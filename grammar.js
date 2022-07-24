
const paren = $ => seq("(", $, ")");

module.exports = grammar ({

  name: "R5RS",

  inline: $ => [
  ],

  conflicts: $ => [
    [$.decimal_number],
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
      $.binding_procedure,
      $.binding_variable,
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
        $._real_b,
        seq($._real_b, /@/, $._real_b),
        seq($._real_b, $._real_b),
        seq($._real_b, $._real_b, /i/),
        seq($._real_b, /i|\+i|\-i/ ),
        /\+i/,
        /\-i/
      ),
    ),

    _real_b: $ => token(/[+\-]?([0-1]+#*|[0-1]+#*\/[0-1]+#*)/),

    octal_number: $ => seq(
      choice(
        /(#o|#O)(#e|#E|#i|#I)?/,
        /(#e|#E|#i|#I)?(#o|#O)/),
      choice(
        $._real_o,
        seq($._real_o, /@/, $._real_o),
        seq($._real_o, $._real_o),
        seq($._real_o, $._real_o, /i/),
        seq($._real_o, /i|\+i|\-i/ ),
        /\+i/,
        /\-i/
      ),
    ),

    _real_o: $ => token(/[+\-]?([0-7]+#*|[0-7]+#*\/[0-7]+#*)/),

    decimal_number: $ =>
    choice(
      /[+\-]?[0-9]+/,
      seq(
        optional(
          choice(
            /(#(d|D))(#(e|E|i|I))?/,
            /(#(e|E|i|I))?(#(d|D))/,
          ),
        ),
        choice(
          $._real_d,
          seq($._real_d, /@/, $._real_d),
          seq($._real_d, $._real_d),
          seq($._real_d, $._real_d, /i/),
          seq($._real_d, /i|\+i|\-i/ ),
          /\+i|\-i/,
        ),
      ),
    ),

    //_real_d: $ => token(/[+\-]?(\.[0-9]+#*([esfdl]{1}[+\-]?[0-9]+)?|[0-9]+#*\/[0-9]+#*|[0-9]+#+\.#*([esfdl]{1}[+\-]?[0-9]+)?|[0-9]+\.[0-9]*#*([esfdl]{1}[+\-]?[0-9]+)?|[0-9]+#*([esfdl]{1}[+\-]?[0-9]+)?|[0-9]+#*)/),
    // this one is following the order of the grammar:
    _real_d: $ => token(/[+\-]?([0-9]+#*([esfdl]{1}[+\-]?[0-9]+)?|\.[0-9]+#*([esfdl]{1}[+\-]?[0-9]+)?|[0-9]+\.[0-9]*#*([esfdl]{1}[+\-]?[0-9]+)?|[0-9]+#+\.#*([esfdl]{1}[+\-]?[0-9]+)?|[0-9]+#*\/[0-9]+#*|[0-9]+#*)/),

    hexadecimal_number: $ => seq(
      choice(
        /(#x|#X)(#e|#E|#i|#I)?/,
        /(#e|#E|#i|#I)?(#x|#X)/,
      ),
      choice(
        seq($._real_x, /@/, $._real_x),
        seq($._real_x, $._real_x),
        seq($._real_x, $._real_x, /i/),
        seq($._real_x, /i|\+i|\-i/ ),
        /\+i/,
        /\-i/,
        $._real_x,
      ),
    ),
    _real_x: $ => token(/[+\-]?([0-9a-f]+#*|[0-9a-f]+#*\/[0-9a-f]+#*)/),
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
