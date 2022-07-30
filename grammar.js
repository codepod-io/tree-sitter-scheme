const paren = $ => choice( seq("(", $, ")"),
                           seq("[", $, "]"));

module.exports = grammar ({

  name: "scheme",

  extras: $ => [
    $.comment,
    /\s/,
  ],

  supertypes: $ => [
    $.derived_expr,
    $.conditional,
    $.number,
    $.definition,
    $.expression,
    $.primitives,
  ],

  rules: {

    program: $ => choice( $.library, seq(/#![^\n]*/, $._program), $._program),

    library: $ =>
    paren(
      seq(
        "define-library",
        field("name", $.identifier),
        repeat($.library_declaration),
      ),
    ),

    _program: $ =>
    repeat1(
      choice(
        $.import_declaration,
        $._scope
      ),
    ),

    _comment: $ =>
    choice(
      //$._line_comment,
      $._uncommented,
      $._nested_comment,
    ),

    comment: $ => $._line_comment,

    _line_comment: $ => token(/;[^\n]*/),
    _nested_comment: $ => token(/#\|[^#|]*\|#/),

    _uncommented: $ =>
    seq(
      "#;",
      optional(
        repeat(
          prec(1, $._comment,),
        ),
      ),
      $._token,
    ),

    label: $ => seq("#", /\d+/,
      choice(
        seq("=", $._token ),
        "#",
      ),
    ),


    _scope: $ =>
    choice(
      $.definition,
      prec( -1, $._token, ),
    ),

    _token: $ =>
    choice(
      $.expression,
      $.label,
      $.primitives,
      prec(-1, alias($._comment, $.comment)),
    ),

    primitives: $ => choice(
      $.identifier,
      $.quote,
      $.symbol,
      $.boolean,
      $.number,
      $.character,
      $.string,
      $.byte_vector,
    ),

    expression: $ => choice(
      $.derived_expr,
      $.lambda,
      $.procedure_call,
      $.conditional,
      $.assignment,
      $.binding_let_syntax,
      $.includer,
      $.load_procedure,
      //$.macro_use,
    ),

    definition: $ =>
    choice(
      $.binding_syntax,
      $.binding_procedure,
      $.binding_variable,
      $.binding_begin,
      $.binding_values,
      $.binding_record,
    ),

    import_declaration: $ =>
    paren(
      seq(
        "import",
        repeat1($.import_set),
      ),
    ),

    import_set: $ =>
    paren(
      choice(
        repeat1( choice( $.identifier, alias( $._real_d, $.identifier))),
        seq("only",   field("name", $.import_set), repeat1($.identifier)),
        seq("except", field("name", $.import_set), repeat1($.identifier)),
        seq("prefix", field("name", $.import_set), $.identifier),
        seq("rename", field("name", $.import_set), repeat1( paren( seq( $.identifier, $.identifier )))),
      ),
    ),

    includer: $ =>
    paren(
      seq(
        choice("include", "include-ci"),
        repeat1($.string),
      ),
    ),

    load_procedure: $ => paren( seq("load", $._token, optional( field("environment", $._token )))),

    quote: $ => seq("'", $._datum),
    _datum: $ => choice(
      $.list,
      $.vector,
    ),
    symbol: $ => token(/'[\w\d!$%&*/:<=>?^_~+\-@\.]+/), //'

    _either: $ =>
    choice(
      $._datum,
      $.boolean,
      $.number,
      $.character,
      $.string,
      alias($._identifier, "symbol"),
      $.byte_vector,
    ),

    list: $ =>
    choice(
      paren( repeat($._either) ),
      paren( repeat1($._either), ".", $._either, ),
      seq(
        choice("'", "`", ",", ",@"),
        $._datum,
      ),
    ),

    vector: $ => seq("#", paren( repeat($._datum) )),
    byte_vector: $ =>
    seq(
      token("#u8"),
      paren( repeat($.decimal_number) ),
    ),

    conditional: $ =>
    choice(
      $.if_conditional,
      $.when_conditional,
      $.unless_conditional,
      $.cond_conditional,
      $.case_conditional,
      $.and_conditional,
      $.or_conditional,
    ),

    if_conditional: $ =>
      paren(
      seq(
        "if",
        field("test", $._token),
        field("consequence", $._token),
        optional(field("alternative", $._token)),
        ),
      ),

    when_conditional: $ =>
      paren(
      seq(
        "when",
        field("test", $._token),
        field("body", $.body),
        ),
      ),

    unless_conditional: $ =>
      paren(
      seq(
        "unless",
        field("test", $._token),
        field("body", $.body),
        ),
      ),

    assignment: $ =>
    paren(
      seq(
        "set!",
        field("binding", $.identifier),
        field("value", $._token)
      ),
    ),

    derived_expr: $ => choice(
      $.binding_let,
      $.begin,
      $.do_loop,
      $.delay,
      $.parameterize,
      $.guard,
      $.case_lambda,
      $.quasiquotation
    ),

    quasiquotation: $ =>
    choice(
      seq("`", $._qq),
      paren( seq( "quasiquote", $._qq),),
    ),

    _qq: $ =>
    choice(
      $.boolean, $.number, $.character, $.string, alias($.identifier, $.symbol), $.byte_vector,
      paren( repeat($._qq_or_splice) ),
      paren( seq(repeat1($._qq_or_splice), ".", $._qq )),
      seq("'", $._qq),
      $.quasiquotation,
      seq("#", paren(repeat($._qq_or_splice))),
      $.unquotation,
    ),

    unquotation: $ =>
    choice(
      seq(",", $._token),
      paren(seq("unquote", $._token, )),
    ),

    _qq_or_splice: $ => choice(
      $._qq,
      $.splice,
    ),

    splice: $ =>
    choice(
      seq(",@", $._qq),
      paren( seq("unquote-splicing", $._qq)),
    ),

    delay: $ =>
    paren(
      seq(
        choice("delay", "delay-force"), $._token
      ),
    ),

    parameterize: $ =>
    paren(
      seq(
        "parameterize",
        paren(
          optional(
            alias(
              repeat1(
                paren( seq(
                  field("name", $._token),
                  field("value", $._token),
                ))),
              $.binding,
            ),
          ),
        ),
        alias(repeat($._scope), $.body),
      ),
    ),

    guard: $ =>
    paren(
      seq(
        "guard",
        paren(
          seq(
            field("value", $.identifier),
            optional( $.guards ),
          ),
        ),
        alias( repeat($._scope), $.body),
      ),
    ),

    guards: $ => repeat1(alias( $.cond_clause, $.guard)),

    case_lambda: $ =>
    paren(
      seq(
        "case-lambda",
        repeat($.clause),
      ),
    ),

    clause: $ =>
    paren(
      seq(
        field(
          "formal",
          $._formals
        ),
        alias( repeat($._scope) , $.body),
      ),
    ),

    do_loop: $ =>
    paren(
      seq("do",
        paren(optional( repeat1($.iteration_step)) ),
        paren(
          seq(
            field("test", $._token),
            optional( field("result", $._sequence)),
          ),
        ),
        optional( $.body ),
      ),
    ),

    begin: $ => paren( seq("begin", $._sequence)),

    binding_let_syntax: $ =>
    paren(
      seq(
        choice( "let-syntax", "letrec-syntax"),
        paren(
          repeat($.syntax_binding),
        ),
        alias(repeat($._scope), $.body),
      ),
    ),

    syntax_binding: $ =>
    seq(
      field("keyword", $.identifier,),
      $.transformer,
    ),

    binding_let: $ =>
    paren(
      choice(
        seq("let", paren( repeat($.binding)), alias( repeat($._scope), $.body)),
        seq("let", field("label", $.identifier), paren( repeat($.binding)), alias( repeat($._scope), $.body)),
        seq("let*", paren( repeat($.binding)), alias( repeat($._scope), $.body)),
        seq("letrec", paren( repeat($.binding)), alias( repeat($._scope), $.body)),
        seq("letrec*", paren( repeat($.binding)), alias( repeat($._scope), $.body)),
        seq("let-values", paren( repeat( $.multi_bindings,)), alias( repeat($._scope), $.body)),
        seq("let-values*", paren( repeat( $.multi_bindings,)), alias( repeat($._scope), $.body)),
      ),
    ),

    multi_bindings: $ =>
    paren(
      seq(
        field("formal", $._formals ),
        field("value", $._token ),
      ),
    ),

    _formals: $ =>
    choice(
      paren( repeat($.identifier)),
      $.identifier,
      paren( seq( repeat1($.identifier), ".", $.identifier)),
    ),

    binding: $ => paren( seq( $.identifier, $._token )),

    iteration_step: $ =>
    paren(
      seq(
      field("var", $.identifier),
      field("init", $._token),
      optional(field("step", $._token)),
      ),
    ),

    and_conditional: $ => paren( seq("and", repeat($._token))),
    or_conditional: $ => paren( seq("or", repeat($._token))),

    case_conditional: $ =>
      paren(
        choice(
          seq("case", field("on", $._token), repeat1($.case_clause),),
          seq("case", field("on", $._token), repeat($.case_clause), alias( $._case_else_clause, $.else_clause)),
        ),
      ),

    cond_conditional: $ => choice(
      paren( seq("cond", repeat1($.cond_clause))),
      paren( seq("cond", repeat($.cond_clause), $.else_clause )),
    ),
    case_clause: $ =>
    paren(
      choice(
        seq(
          field("test", paren( repeat($._either) )),
          field("consequence", alias( $._sequence, $.body)),
        ),
        seq(
          field("test", paren( repeat($._either) )),
          "=>", field("consequence", $._token)
        ),
      ),
    ),
    _case_else_clause: $ =>
    choice(
      paren( seq( "else", "=>", $._sequence, )),
      $._else_clause
    ),

    else_clause: $ => $._else_clause,
    _else_clause: $ => paren( seq( "else", alias( $._sequence, $.body) )),
    cond_clause: $ => choice(
      paren( seq( field("test", $._token), optional( field("consequence", alias( $._sequence, $.body))))),
      paren( seq( field("test", $._token), "=>", field("consequence", $._token,))),
    ),

    _case_clause: $ => paren( paren( seq( repeat($._token), $._sequence ))),

    bindings: $ => paren( seq($.identifier, $._token, )),

    _body: $ => seq(repeat($._scope), $._sequence),
    _sequence: $ => seq(repeat($._token), $._token),

    ///////////////
    // BINDINGS //{{{
    /////////////

    binding_record: $ =>
    paren(
      seq(
        "define-record-type",
        field("type", $.identifier),
        $.constructor,
        field("predicate", $.identifier),
        repeat($.field),
      ),
    ),

    constructor: $ => paren(seq(field("name", $.identifier), repeat($.identifier))),
    field: $ =>
    paren(
      seq(
        field("name", $.identifier),
        field("accessor", $.identifier),
        optional(field("mutator", $.identifier)),
      ),
    ),

    binding_values: $ =>
    paren(
      seq(
        "define-values",
        alias($._formals, $.bindings),
        field("init", repeat($._scope)),
      ),
    ),

    binding_begin: $ =>
    paren(
      seq(
        "begin", repeat1($._scope),
      ),
    ),

    /////////////
    // SYNTAX //{{{
    ///////////

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
    ),//}}}

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
          alias(repeat($._scope), $.body),
        ),
      ),
    ),


    binding_variable: $ =>
    paren(
      seq(
        "define",
        field("name", $.identifier),
        field("value",
          choice(
            $.primitives,
            $.procedure_call,
            $.conditional,
            $.assignment,
            $.derived_expr,
          ),
        ),
      ),
    ),//}}}

    identifier: $ => $._identifier,
    vararg_identifier: $ => $._identifier,
      // cant match word boundary \b
      // // TODO: perculiar
    _identifier: $ => token(/[A-Za-z!$%&*/:<=>?^_~]{1}[A-Za-z0-9!$%&*/:<=>?^_~+\-@\.]*|\.\.\.|\|([^\\|]*|\\x[A-Fa-f0-9]+|\\|\a|\t|\n|\r)*\|/),

    //_identifier: $ =>
    //  prec.right(
    //  choice(
    //    seq($._initial, repeat($._subsequent)),
    //    seq("|", repeat($._sym), "|"),
    //    $._peculiar,
    //  ),
    //  ),
    //_initial: $ => /[A-Za-z!$%&*/:<=>?^_~]{1}/,
    //_subsequent: $ => choice( $._initial, /[0-9]/, /[+\-.@]/ ),
    //_sym: $ =>
    //choice(
    //  /\|[^\\|]*\|/,
    //  /\\x[A-Fa-f0-9]+/,
    //  "\\", "\a", "\b", "\t", "\n", "\r"
    //),
    //_peculiar: $ =>
    //  prec.right(
    //choice(
    //  /[+\-]/,
    //  seq(/[+\-]/, choice( $._initial, /[+\-]/, "@"), repeat($._subsequent)),
    //  seq(/[+\-]/, ".", choice( $._initial, /[+\-]/, "@", "."), repeat($._subsequent)),
    //  seq(".", choice( $._initial, /[+\-]/, "@", "."), repeat($._subsequent)),
    //),
    //),

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

    lambda: $ => paren(seq("lambda", $.arguments, alias(repeat($._scope), $.body))),
    procedure_call: $ =>
    paren(
      seq(
        field(
          "name",
          choice(
            alias(/[^\s\(\)]+/, $.identifier),
            $._token
          ),
        ),
        optional(
          alias(
            repeat1($._token),
            $.arguments
          ),
        ),
      ),
    ),

    boolean: $ => token(choice("#f", "#t", "#false", "#true")),
    character: $ =>
    token(
      choice(
        /#!\w/,
        /#\\x[0-9a-f]+/,
        /#\\[^x]/,
        /#\\space/,
        /#\\newline/,
        /#\\alarm/,
        /#\\backspace/,
        /#\\delete/,
        /#\\escape/,
        /#\\null/,
        /#\\return/,
        /#\\tab/,
      )
    ),
    // TODO:  function, which prevents quote and backslash, but escapes them.
    // FIXME: should use character names.
    string: $ => token( /".*"/ ),


    //////////////
    // NUMBERS //{{{
    ////////////

    number: $ => choice(
      $.binary_number,
      $.octal_number,
      $.decimal_number,
      $.hexadecimal_number,
      $.infnan,
    ),

    infnan: $ =>
    token(
      seq(
        choice("+", "-"),
        choice("inf", "nan"),
        ".0"
      ),
    ),
    _infnan_immediate: $ =>
    token.immediate(
      seq(
        choice("+", "-"),
        choice("inf", "nan"),
        ".0"
      ),
    ),

    binary_number: $ =>
    prec.right(
      seq(
        /(#(b|B)(#(e|E|i|I))?|(#(e|E|i|I))?#(b|B))/,
        choice(
          seq($._real_b, optional( choice( "i", "+i", "-i"))),
          seq($._real_b, /@/, $._real_b),
          seq($._real_b, $._real_b, optional( "i" )),
          seq($._real_b, $._infnan_immediate, token.immediate("i")),
          seq($._infnan_immediate, token.immediate("i")),
          /\+i/,
          /\-i/
        ),
      ),
    ),

    _real_b: $ =>
    choice(
      $._infnan_immediate,
      token(
        seq(
          choice( "+", "-", ""),
          /[0-1]+#*|[0-1]+#*\/[0-1]+#*/
        ),
      ),
    ),

    octal_number: $ =>
    prec.right(
      seq(
        choice(
          /(#o|#O)(#e|#E|#i|#I)?/,
          /(#e|#E|#i|#I)?(#o|#O)/),
        choice(
          seq($._real_o, token.immediate( optional( choice( "i", "+i", "-i")))),
          seq($._real_o, token.immediate("@"), $._real_o),
          seq($._real_o, $._real_o, token.immediate(optional( "i" ))),
          seq($._real_o, $._infnan_immediate, token.immediate("i")),
          seq($._infnan_immediate, token.immediate("i")),
          /\+i/,
          /\-i/
        ),
      ),
    ),

    _real_o: $ =>
    choice(
      $._infnan_immediate,
      token(
        seq(
          choice( "+", "-", ""),
          /[0-7]+#*|[0-7]+#*\/[0-7]+#*/,
        ),
      ),
    ),

    decimal_number: $ =>
    choice(
      $._decimal_number,
      seq( /(#(d|D))(#(e|E|i|I))?/, $._decimal_number),
      seq( /(#(e|E|i|I))?(#(d|D))/, $._decimal_number),
    ),

    _decimal_number: $ =>
    choice(
      seq($._real_d, token.immediate( optional( choice( "i", "+i", "-i")))),
      seq($._real_d, token.immediate(prec(1, "@")), $._real_d_immediate),
      seq($._real_d, $._real_d_immediate, token.immediate(optional("i"))),
      seq($._real_d, $._infnan_immediate, token.immediate("i")),
      seq($._infnan_immediate, token.immediate("i")),
      /\+i|\-i/ ,
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
    choice(
      $._infnan_immediate,
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
    ),

    hexadecimal_number: $ =>
    prec.right(
      seq(
        choice(
          /(#x|#X)(#e|#E|#i|#I)?/,
          /(#e|#E|#i|#I)?(#x|#X)/,
        ),
        choice(
          seq($._real_x, optional( choice( "i", "+i", "-i"))),
          seq($._real_x, token.immediate("@"), $._real_x),
          seq($._real_x, $._real_x, optional( "i" )),
          seq($._real_x, $._infnan_immediate, token.immediate("i")),
          seq($._infnan_immediate, token.immediate("i")),
          /\+i/,
          /\-i/,
        ),
      ),
    ),
    _real_x: $ =>
    choice(
      $._infnan_immediate,
      token(
        seq(
          choice( "+", "-", ""),
          /[0-9a-f]+#*|[0-9a-f]+#*\/[0-9a-f]+#*/
        ),
      ),
    ),
    //}}}

    library_declaration: $ =>
    choice(
      $.import_declaration,
      $.binding_begin,
      $.includer,
      paren( seq( "export", repeat($.export))),
      paren( seq( "include-library-declarations", repeat1($.string))),
      paren(
        seq( "cond-expand", repeat1($.cond_expand_clause),
          optional(
            paren(
              seq(
                "else", $.library_declaration
              ),
            ),
          ),
        ),
      ),
    ),
    export: $ =>
    choice(
      $.identifier,
      paren( seq( "rename", $.identifier, $.identifier))
    ),

    cond_expand_clause: $ =>
    paren(
      seq(
        $.feature_requirement,
        optional(
          repeat1(
            $.library_declaration
          ),
        ),
      ),
    ),

    feature_requirement: $ =>
    choice(
      $.identifier,
      paren(
        choice(
          repeat1( choice( $.identifier, alias( $._real_d, $.identifier))),
          seq("and", repeat($.feature_requirement)),
          seq("or", repeat($.feature_requirement)),
          seq("not", $.feature_requirement),
        ),
      ),
    ),
  }
});
