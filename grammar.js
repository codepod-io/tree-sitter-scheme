
const paren = $ => seq("(", $, ")");

module.exports = grammar ({

  name: "R5RS",

  inline: $ => [
  ],

  conflicts: $ => [
  ],

  supertypes: $ => [
    $.number,
    $.definition,
    $.expression,
    $.primitives,
  ],

  rules: {
    program: $ => repeat($._scope),

    _scope: $ =>
    choice(
      $._token,
      $.definition,
    ),

    _token: $ =>
    choice(
      $.primitives,
      $.expression,
    ),

    primitives: $ => choice(
      $.variable,
      //$.quoted_datum,
      $.boolean,
      $.symbol,
      $.number,
      $.character,
      $.string,
    ),

    expression: $ => choice(
      $.lambda,
      $.procedure_call,
      //$.conditional,
      //$.assignment,
      //$.derived_expr,
      //$.macro_use,
      //$.macro_block
    ),

    definition: $ =>
    choice(
      $.binding_syntax,
      $.binding_procedure,
      $.binding_variable,
    ),

    binding_syntax: $ =>
    paren(
      seq(
        "define-syntax",
        field("name", $.identifier),
        $.transformer,
      ),
    ),
    transformer: $ =>
    paren(
      seq(
        "syntax-rules",
        $.reserved,
        repeat1($.syntax_rule),
      ),
    ),

    syntax_rule: $ => paren( seq( $.pattern, $.template),),
    reserved: $ => paren( repeat($.identifier) ),

    pattern: $ => $._pattern,

    _pattern: $ =>
    prec.right(
      choice(
        alias( /[^(\.\.\.)\S]+/, $.identifier),
        paren( optional( repeat1($._pattern))),
        paren( seq( repeat1($._pattern), ".", $._pattern)),
        paren( seq( repeat($._pattern), $._pattern, "..." )),
        seq("#", paren( repeat($._pattern))),
        seq("#", paren( repeat($._pattern), $._pattern, "..." )),
        $.string, $.character, $.boolean, $.number
      ),
    ),

    template: $ => $._template,
    _template: $ =>
    prec.right(
      choice(
        alias( /[^(\.\.\.)\S]+/, $.identifier),
        repeat1($._token),
      ),
    ),

    binding_procedure: $ =>
    paren(
      choice(
        seq(
          "define",
          field("name", $.identifier),
          $.lambda,
        ),
        seq(
          "define",
          paren(
            seq(
              field("name", $.identifier),
              alias(
                optional(
                  choice(
                    repeat1($.identifier),
                    $._rest_arguments,
                  ),
                ),
                $.arguments
              ),
            ),
          ),
          $.body,
        ),
      ),
    ),


    binding_variable: $ =>
    paren(
      seq(
        "define",
        field("name", $.identifier),
        field(
          "value",
          choice(
            $.primitives,
            $.procedure_call,
          ),
        ),
      ),
    ),

    identifier: $ => $._identifier,
    vararg_identifier: $ => $._identifier,
    variable: $ => $._identifier,
    _identifier: $ => token(/[A-Za-z!$%&*/:<=>?^_~]{1}[A-Za-z0-9!$%&*/:<=>?^_~+\-@\.]*|\.\.\./),

    symbol: $ => seq("'", $._identifier),

    // these are the arguments for a lambda.
    arguments: $ =>
    choice(
      paren(optional(repeat1($.identifier))),
      $.vararg_identifier,
      paren(seq(repeat1($.identifier), ".", $.vararg_identifier)),
    ),

    // this is for the packed form of a procedure
    // where the arguments appear in the same nesting depth as the identifier.
    _rest_arguments: $ =>
    seq(
      optional(
        repeat1($.identifier),
      ),
      ".",
      $.vararg_identifier
    ),

    // TODO: catch the last expression as the return value.
    body: $ => repeat1($._token),

    lambda: $ => paren(seq("lambda", $.arguments, $.body)),
    procedure_call: $ =>
    paren(
      seq(
        field(
          "name",
          alias(/\S+/, $.identifier),
        ),
        optional(
          alias(
            repeat1($._token),
            $.arguments
          ),
        ),
      ),
    ),

    boolean: $ => token(choice("#f", "#t")),
    character: $ => token(choice(
      /#\\[\S]/,
      /#\\space/,
      /#\\newline/
    )),
    // TODO:  function, which prevents quote and backslash, but escapes them.
    // FIXME: should use character names.
    string: $ => seq("\"", $.character ,"\""),

    //////////////
    // NUMBERS //{{{
    ////////////

    number: $ => choice(
      $.binary_number,
      $.octal_number,
      $.decimal_number,
      $.hexadecimal_number,
    ),

    binary_number: $ => seq(
      /(#(b|B)(#(e|E|i|I))?|(#(e|E|i|I))?#(b|B))/,
      choice(
        seq($._real_b, optional( choice( "i", "+i", "-i"))),
        seq($._real_b, /@/, $._real_b),
        seq($._real_b, $._real_b, optional( "i" )),
        /\+i/,
        /\-i/
      ),
    ),

    _real_b: $ =>
    token(
      seq(
        choice( "+", "-", ""),
        /[+\-]?([0-1]+#*|[0-1]+#*\/[0-1]+#*)/
      ),
    ),

    octal_number: $ => seq(
      choice(
        /(#o|#O)(#e|#E|#i|#I)?/,
        /(#e|#E|#i|#I)?(#o|#O)/),
      choice(
        seq($._real_o, token.immediate( optional( choice( "i", "+i", "-i")))),
        seq($._real_o, token.immediate("@"), $._real_o),
        seq($._real_o, $._real_o, token.immediate(optional( "i" ))),
        /\+i/,
        /\-i/
      ),
    ),

    _real_o: $ =>
    token(
      seq(
        choice( "+", "-", ""),
        /[0-7]+#*|[0-7]+#*\/[0-7]+#*/,
      ),
    ),

    decimal_number: $ =>
    choice(
      $._decimal_number,
      seq( /(#(d|D))(#(e|E|i|I))?/, $._decimal_number),
      seq( /(#(e|E|i|I))?(#(d|D))/, $._decimal_number),
    ),

    _decimal_number: $ =>
    prec.right(
      choice(
        seq($._real_d, token.immediate( optional( choice( "i", "+i", "-i")))),
        seq($._real_d, $._real_d_immediate, token.immediate(optional("i"))),
        seq($._real_d, token.immediate("@"), $._real_d_immediate),
        /\+i|\-i/ ,
      ),
    ),

    _real_d_immediate: $ =>
    token.immediate(
      seq(
        choice( "+", "-", ""),
        choice(
          /[0-9]+#*\/[0-9]+#*/,
          /[0-9]+#+\.#*([esfdl]{1}[+\-]?[0-9]+)?/,
          /[0-9]+\.[0-9]*#*([esfdl]{1}[+\-]?[0-9]+)?/,
          /[0-9]+#*([esfdl]{1}[+\-]?[0-9]+)?/,
          /\.[0-9]+#*([esfdl]{1}[+\-]?[0-9]+)?/,
        ),
      ),
    ),

    _real_d: $ =>
    token(
      seq(
        choice( "+", "-", ""),
        choice(
          /[0-9]+#*\/[0-9]+#*/,
          /[0-9]+#+\.#*([esfdl]{1}[+\-]?[0-9]+)?/,
          /[0-9]+\.[0-9]*#*([esfdl]{1}[+\-]?[0-9]+)?/,
          /[0-9]+#*([esfdl]{1}[+\-]?[0-9]+)?/,
          /\.[0-9]+#*([esfdl]{1}[+\-]?[0-9]+)?/,
        ),
      ),
    ),

    hexadecimal_number: $ => seq(
      choice(
        /(#x|#X)(#e|#E|#i|#I)?/,
        /(#e|#E|#i|#I)?(#x|#X)/,
      ),
      choice(
        seq($._real_x, optional( choice( "i", "+i", "-i"))),
        seq($._real_x, token.immediate("@"), $._real_x),
        seq($._real_x, $._real_x, optional( "i" )),
        /\+i/,
        /\-i/,
      ),
    ),
    _real_x: $ =>
    token(
      seq(
        choice( "+", "-", ""),
        /[0-9a-f]+#*|[0-9a-f]+#*\/[0-9a-f]+#*/
      ),
    ),
    //}}}
  }
});

// TO BE DONE:

//<delimiter> --> <whitespace> | ( | ) | " | ;
//<whitespace> --> <space or newline>
//<comment> --> ;  <all subsequent characters up to a
//                 line break>
//<atmosphere> --> <whitespace> | <comment>
//<intertoken space> --> <atmosphere>*
//
//In <quasiquotation>s, a <list qq template D> can sometimes be confused with either an <unquotation D> or a <splicing unquotation D>. The interpretation as an <unquotation> or <splicing unquotation D> takes precedence.
//
//7.1.5 Transformers
//
