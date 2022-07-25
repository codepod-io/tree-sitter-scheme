#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 299
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 83
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 7

enum {
  anon_sym_LPAREN = 1,
  anon_sym_define_DASHsyntax = 2,
  anon_sym_RPAREN = 3,
  anon_sym_syntax_DASHrules = 4,
  aux_sym__pattern_token1 = 5,
  anon_sym_DOT = 6,
  anon_sym_DOT_DOT_DOT = 7,
  anon_sym_POUND = 8,
  anon_sym_define = 9,
  sym__identifier = 10,
  anon_sym_SQUOTE = 11,
  anon_sym_lambda = 12,
  aux_sym_procedure_call_token1 = 13,
  sym_boolean = 14,
  sym_character = 15,
  anon_sym_DQUOTE = 16,
  sym_infnan = 17,
  sym__infnan_immediate = 18,
  aux_sym_binary_number_token1 = 19,
  anon_sym_i = 20,
  anon_sym_PLUSi = 21,
  anon_sym_DASHi = 22,
  aux_sym_binary_number_token2 = 23,
  anon_sym_i2 = 24,
  aux_sym_binary_number_token3 = 25,
  aux_sym_binary_number_token4 = 26,
  aux_sym__real_b_token1 = 27,
  aux_sym_octal_number_token1 = 28,
  aux_sym_octal_number_token2 = 29,
  aux_sym_octal_number_token3 = 30,
  anon_sym_AT = 31,
  aux_sym_octal_number_token4 = 32,
  aux_sym__real_o_token1 = 33,
  aux_sym_decimal_number_token1 = 34,
  aux_sym_decimal_number_token2 = 35,
  aux_sym__decimal_number_token1 = 36,
  sym__real_d_immediate = 37,
  aux_sym__real_d_token1 = 38,
  aux_sym_hexadecimal_number_token1 = 39,
  aux_sym_hexadecimal_number_token2 = 40,
  aux_sym__real_x_token1 = 41,
  sym_program = 42,
  sym__scope = 43,
  sym__token = 44,
  sym_primitives = 45,
  sym__expression = 46,
  sym_definition = 47,
  sym_binding_syntax = 48,
  sym_transformer = 49,
  sym_syntax_rule = 50,
  sym_reserved = 51,
  sym_pattern = 52,
  sym__pattern = 53,
  sym_template = 54,
  sym__template = 55,
  sym_binding_procedure = 56,
  sym_binding_variable = 57,
  sym_identifier = 58,
  sym_vararg_identifier = 59,
  sym_variable = 60,
  sym_symbol = 61,
  sym_arguments = 62,
  sym__rest_arguments = 63,
  sym_body = 64,
  sym_lambda = 65,
  sym_procedure_call = 66,
  sym_string = 67,
  sym_number = 68,
  sym_binary_number = 69,
  sym__real_b = 70,
  sym_octal_number = 71,
  sym__real_o = 72,
  sym_decimal_number = 73,
  sym__decimal_number = 74,
  sym__real_d = 75,
  sym_hexadecimal_number = 76,
  sym__real_x = 77,
  aux_sym_program_repeat1 = 78,
  aux_sym_transformer_repeat1 = 79,
  aux_sym_reserved_repeat1 = 80,
  aux_sym__pattern_repeat1 = 81,
  aux_sym__template_repeat1 = 82,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_define_DASHsyntax] = "define-syntax",
  [anon_sym_RPAREN] = ")",
  [anon_sym_syntax_DASHrules] = "syntax-rules",
  [aux_sym__pattern_token1] = "identifier",
  [anon_sym_DOT] = ".",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_POUND] = "#",
  [anon_sym_define] = "define",
  [sym__identifier] = "_identifier",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_lambda] = "lambda",
  [aux_sym_procedure_call_token1] = "identifier",
  [sym_boolean] = "boolean",
  [sym_character] = "character",
  [anon_sym_DQUOTE] = "\"",
  [sym_infnan] = "infnan",
  [sym__infnan_immediate] = "_infnan_immediate",
  [aux_sym_binary_number_token1] = "binary_number_token1",
  [anon_sym_i] = "i",
  [anon_sym_PLUSi] = "+i",
  [anon_sym_DASHi] = "-i",
  [aux_sym_binary_number_token2] = "binary_number_token2",
  [anon_sym_i2] = "i",
  [aux_sym_binary_number_token3] = "binary_number_token3",
  [aux_sym_binary_number_token4] = "binary_number_token4",
  [aux_sym__real_b_token1] = "_real_b_token1",
  [aux_sym_octal_number_token1] = "octal_number_token1",
  [aux_sym_octal_number_token2] = "octal_number_token2",
  [aux_sym_octal_number_token3] = "octal_number_token3",
  [anon_sym_AT] = "@",
  [aux_sym_octal_number_token4] = "octal_number_token4",
  [aux_sym__real_o_token1] = "_real_o_token1",
  [aux_sym_decimal_number_token1] = "decimal_number_token1",
  [aux_sym_decimal_number_token2] = "decimal_number_token2",
  [aux_sym__decimal_number_token1] = "_decimal_number_token1",
  [sym__real_d_immediate] = "_real_d_immediate",
  [aux_sym__real_d_token1] = "_real_d_token1",
  [aux_sym_hexadecimal_number_token1] = "hexadecimal_number_token1",
  [aux_sym_hexadecimal_number_token2] = "hexadecimal_number_token2",
  [aux_sym__real_x_token1] = "_real_x_token1",
  [sym_program] = "program",
  [sym__scope] = "_scope",
  [sym__token] = "_token",
  [sym_primitives] = "primitives",
  [sym__expression] = "_expression",
  [sym_definition] = "definition",
  [sym_binding_syntax] = "binding_syntax",
  [sym_transformer] = "transformer",
  [sym_syntax_rule] = "syntax_rule",
  [sym_reserved] = "reserved",
  [sym_pattern] = "pattern",
  [sym__pattern] = "_pattern",
  [sym_template] = "template",
  [sym__template] = "_template",
  [sym_binding_procedure] = "binding_procedure",
  [sym_binding_variable] = "binding_variable",
  [sym_identifier] = "identifier",
  [sym_vararg_identifier] = "vararg_identifier",
  [sym_variable] = "variable",
  [sym_symbol] = "symbol",
  [sym_arguments] = "arguments",
  [sym__rest_arguments] = "arguments",
  [sym_body] = "body",
  [sym_lambda] = "lambda",
  [sym_procedure_call] = "procedure_call",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_binary_number] = "binary_number",
  [sym__real_b] = "_real_b",
  [sym_octal_number] = "octal_number",
  [sym__real_o] = "_real_o",
  [sym_decimal_number] = "decimal_number",
  [sym__decimal_number] = "_decimal_number",
  [sym__real_d] = "_real_d",
  [sym_hexadecimal_number] = "hexadecimal_number",
  [sym__real_x] = "_real_x",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_transformer_repeat1] = "transformer_repeat1",
  [aux_sym_reserved_repeat1] = "reserved_repeat1",
  [aux_sym__pattern_repeat1] = "_pattern_repeat1",
  [aux_sym__template_repeat1] = "_template_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_define_DASHsyntax] = anon_sym_define_DASHsyntax,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_syntax_DASHrules] = anon_sym_syntax_DASHrules,
  [aux_sym__pattern_token1] = sym_identifier,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_define] = anon_sym_define,
  [sym__identifier] = sym__identifier,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_lambda] = anon_sym_lambda,
  [aux_sym_procedure_call_token1] = sym_identifier,
  [sym_boolean] = sym_boolean,
  [sym_character] = sym_character,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_infnan] = sym_infnan,
  [sym__infnan_immediate] = sym__infnan_immediate,
  [aux_sym_binary_number_token1] = aux_sym_binary_number_token1,
  [anon_sym_i] = anon_sym_i,
  [anon_sym_PLUSi] = anon_sym_PLUSi,
  [anon_sym_DASHi] = anon_sym_DASHi,
  [aux_sym_binary_number_token2] = aux_sym_binary_number_token2,
  [anon_sym_i2] = anon_sym_i,
  [aux_sym_binary_number_token3] = aux_sym_binary_number_token3,
  [aux_sym_binary_number_token4] = aux_sym_binary_number_token4,
  [aux_sym__real_b_token1] = aux_sym__real_b_token1,
  [aux_sym_octal_number_token1] = aux_sym_octal_number_token1,
  [aux_sym_octal_number_token2] = aux_sym_octal_number_token2,
  [aux_sym_octal_number_token3] = aux_sym_octal_number_token3,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_octal_number_token4] = aux_sym_octal_number_token4,
  [aux_sym__real_o_token1] = aux_sym__real_o_token1,
  [aux_sym_decimal_number_token1] = aux_sym_decimal_number_token1,
  [aux_sym_decimal_number_token2] = aux_sym_decimal_number_token2,
  [aux_sym__decimal_number_token1] = aux_sym__decimal_number_token1,
  [sym__real_d_immediate] = sym__real_d_immediate,
  [aux_sym__real_d_token1] = aux_sym__real_d_token1,
  [aux_sym_hexadecimal_number_token1] = aux_sym_hexadecimal_number_token1,
  [aux_sym_hexadecimal_number_token2] = aux_sym_hexadecimal_number_token2,
  [aux_sym__real_x_token1] = aux_sym__real_x_token1,
  [sym_program] = sym_program,
  [sym__scope] = sym__scope,
  [sym__token] = sym__token,
  [sym_primitives] = sym_primitives,
  [sym__expression] = sym__expression,
  [sym_definition] = sym_definition,
  [sym_binding_syntax] = sym_binding_syntax,
  [sym_transformer] = sym_transformer,
  [sym_syntax_rule] = sym_syntax_rule,
  [sym_reserved] = sym_reserved,
  [sym_pattern] = sym_pattern,
  [sym__pattern] = sym__pattern,
  [sym_template] = sym_template,
  [sym__template] = sym__template,
  [sym_binding_procedure] = sym_binding_procedure,
  [sym_binding_variable] = sym_binding_variable,
  [sym_identifier] = sym_identifier,
  [sym_vararg_identifier] = sym_vararg_identifier,
  [sym_variable] = sym_variable,
  [sym_symbol] = sym_symbol,
  [sym_arguments] = sym_arguments,
  [sym__rest_arguments] = sym_arguments,
  [sym_body] = sym_body,
  [sym_lambda] = sym_lambda,
  [sym_procedure_call] = sym_procedure_call,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_binary_number] = sym_binary_number,
  [sym__real_b] = sym__real_b,
  [sym_octal_number] = sym_octal_number,
  [sym__real_o] = sym__real_o,
  [sym_decimal_number] = sym_decimal_number,
  [sym__decimal_number] = sym__decimal_number,
  [sym__real_d] = sym__real_d,
  [sym_hexadecimal_number] = sym_hexadecimal_number,
  [sym__real_x] = sym__real_x,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_transformer_repeat1] = aux_sym_transformer_repeat1,
  [aux_sym_reserved_repeat1] = aux_sym_reserved_repeat1,
  [aux_sym__pattern_repeat1] = aux_sym__pattern_repeat1,
  [aux_sym__template_repeat1] = aux_sym__template_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define_DASHsyntax] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_syntax_DASHrules] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__pattern_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define] = {
    .visible = true,
    .named = false,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lambda] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_procedure_call_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_infnan] = {
    .visible = true,
    .named = true,
  },
  [sym__infnan_immediate] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_binary_number_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_i] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUSi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHi] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binary_number_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_i2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binary_number_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_number_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__real_b_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_octal_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_octal_number_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_octal_number_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_octal_number_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__real_o_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decimal_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decimal_number_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__decimal_number_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__real_d_immediate] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__real_d_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hexadecimal_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hexadecimal_number_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__real_x_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__scope] = {
    .visible = false,
    .named = true,
  },
  [sym__token] = {
    .visible = false,
    .named = true,
  },
  [sym_primitives] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_definition] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_binding_syntax] = {
    .visible = true,
    .named = true,
  },
  [sym_transformer] = {
    .visible = true,
    .named = true,
  },
  [sym_syntax_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_reserved] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym__pattern] = {
    .visible = false,
    .named = true,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym__template] = {
    .visible = false,
    .named = true,
  },
  [sym_binding_procedure] = {
    .visible = true,
    .named = true,
  },
  [sym_binding_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_vararg_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym__rest_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_lambda] = {
    .visible = true,
    .named = true,
  },
  [sym_procedure_call] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_binary_number] = {
    .visible = true,
    .named = true,
  },
  [sym__real_b] = {
    .visible = false,
    .named = true,
  },
  [sym_octal_number] = {
    .visible = true,
    .named = true,
  },
  [sym__real_o] = {
    .visible = false,
    .named = true,
  },
  [sym_decimal_number] = {
    .visible = true,
    .named = true,
  },
  [sym__decimal_number] = {
    .visible = false,
    .named = true,
  },
  [sym__real_d] = {
    .visible = false,
    .named = true,
  },
  [sym_hexadecimal_number] = {
    .visible = true,
    .named = true,
  },
  [sym__real_x] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_transformer_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_reserved_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__template_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 2},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 4, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 2},
  [2] =
    {field_name, 2},
    {field_value, 3},
  [4] =
    {field_name, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [2] = sym_arguments,
  },
  [6] = {
    [4] = sym_arguments,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_reserved_repeat1, 2,
    aux_sym_reserved_repeat1,
    sym_arguments,
  aux_sym__template_repeat1, 2,
    aux_sym__template_repeat1,
    sym_arguments,
  0,
};

static inline bool sym__identifier_character_set_1(int32_t c) {
  return (c < '<'
    ? (c < '*'
      ? (c < '$'
        ? c == '!'
        : c <= '&')
      : (c <= '*' || (c < ':'
        ? c == '/'
        : c <= ':')))
    : (c <= '?' || (c < 'a'
      ? (c < '^'
        ? (c >= 'A' && c <= 'Z')
        : c <= '_')
      : (c <= 'z' || c == '~'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(167);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(247);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == '@') ADVANCE(290);
      if (lookahead == 'd') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(291);
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead == 's') ADVANCE(134);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(155)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(226);
      if (lookahead == '\'') ADVANCE(248);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(192);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (('!' <= lookahead && lookahead <= '*') ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(204);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(226);
      if (lookahead == '\'') ADVANCE(248);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(201);
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (('!' <= lookahead && lookahead <= '*') ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(204);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(226);
      if (lookahead == '\'') ADVANCE(248);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == '+') ADVANCE(192);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(233);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(226);
      if (lookahead == '\'') ADVANCE(248);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == '+') ADVANCE(192);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(233);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(226);
      if (lookahead == '\'') ADVANCE(248);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == '+') ADVANCE(194);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '@') ADVANCE(316);
      if (lookahead == 'i') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(233);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(226);
      if (lookahead == '\'') ADVANCE(248);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == '+') ADVANCE(194);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '@') ADVANCE(316);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(233);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(226);
      if (lookahead == '\'') ADVANCE(248);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == '+') ADVANCE(193);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '@') ADVANCE(233);
      if (lookahead == 'i') ADVANCE(277);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(233);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(226);
      if (lookahead == '\'') ADVANCE(248);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == '+') ADVANCE(193);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '@') ADVANCE(233);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(233);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(226);
      if (lookahead == '\'') ADVANCE(248);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '-') ADVANCE(200);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(233);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(226);
      if (lookahead == '\'') ADVANCE(248);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == '+') ADVANCE(197);
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '@') ADVANCE(233);
      if (lookahead == 'i') ADVANCE(277);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(233);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(226);
      if (lookahead == '\'') ADVANCE(248);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == '+') ADVANCE(201);
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(233);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(192);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(192);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(192);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(192);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(192);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'i') ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(192);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(194);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == '@') ADVANCE(316);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(194);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == '@') ADVANCE(316);
      if (lookahead == 'i') ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(194);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == '@') ADVANCE(316);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(194);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == '@') ADVANCE(316);
      if (lookahead == 'i') ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(193);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == '@') ADVANCE(233);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(193);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == '@') ADVANCE(233);
      if (lookahead == 'i') ADVANCE(279);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(193);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == '@') ADVANCE(233);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(193);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == '@') ADVANCE(233);
      if (lookahead == 'i') ADVANCE(279);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '-') ADVANCE(200);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '-') ADVANCE(200);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'i') ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(197);
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == '@') ADVANCE(233);
      if (lookahead == 'i') ADVANCE(279);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(197);
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == '@') ADVANCE(233);
      if (lookahead == 'i') ADVANCE(279);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(201);
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(201);
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(201);
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'i') ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(201);
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(139);
      END_STATE();
    case 35:
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(91);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '@') ADVANCE(315);
      if (lookahead == 'i') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      END_STATE();
    case 36:
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(91);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '@') ADVANCE(315);
      if (lookahead == 'i') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      END_STATE();
    case 37:
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(95);
      if (lookahead == '-') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      END_STATE();
    case 38:
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(90);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '@') ADVANCE(290);
      if (lookahead == 'i') ADVANCE(291);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      END_STATE();
    case 39:
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(90);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '@') ADVANCE(290);
      if (lookahead == 'i') ADVANCE(276);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      END_STATE();
    case 40:
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(94);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == '@') ADVANCE(290);
      if (lookahead == 'i') ADVANCE(276);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      END_STATE();
    case 41:
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(99);
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == '.') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(321);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(246);
      END_STATE();
    case 42:
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(105);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '.') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(321);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(246);
      END_STATE();
    case 43:
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 44:
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 45:
      if (lookahead == '+') ADVANCE(100);
      if (lookahead == '-') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      END_STATE();
    case 46:
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      END_STATE();
    case 47:
      if (lookahead == '+') ADVANCE(98);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      END_STATE();
    case 48:
      if (lookahead == '+') ADVANCE(104);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(125);
      END_STATE();
    case 50:
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(282);
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(299);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(282);
      if (lookahead == 'n') ADVANCE(75);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(287);
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(299);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(287);
      if (lookahead == 'n') ADVANCE(75);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 54:
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(280);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(299);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 55:
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(285);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(299);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 56:
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(328);
      if (lookahead == 'n') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 57:
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 58:
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(283);
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(299);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 59:
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(283);
      if (lookahead == 'n') ADVANCE(77);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 60:
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(288);
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(299);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 61:
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(288);
      if (lookahead == 'n') ADVANCE(77);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 62:
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(329);
      if (lookahead == 'n') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 63:
      if (lookahead == '.') ADVANCE(237);
      END_STATE();
    case 64:
      if (lookahead == '.') ADVANCE(69);
      END_STATE();
    case 65:
      if (lookahead == '.') ADVANCE(242);
      END_STATE();
    case 66:
      if (lookahead == '.') ADVANCE(70);
      END_STATE();
    case 67:
      if (lookahead == '.') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      END_STATE();
    case 68:
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == 'i') ADVANCE(314);
      if (lookahead == 'n') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 69:
      if (lookahead == '0') ADVANCE(273);
      END_STATE();
    case 70:
      if (lookahead == '0') ADVANCE(272);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(249);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 78:
      if (lookahead == 'b') ADVANCE(81);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(256);
      if (lookahead == 'l') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(80)
      if (lookahead != 0) ADVANCE(267);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 87:
      if (lookahead == 'f') ADVANCE(111);
      END_STATE();
    case 88:
      if (lookahead == 'f') ADVANCE(64);
      END_STATE();
    case 89:
      if (lookahead == 'f') ADVANCE(66);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(282);
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(305);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(282);
      if (lookahead == 'n') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(287);
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(305);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(287);
      if (lookahead == 'n') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(280);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(305);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(285);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(305);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(296);
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(305);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(296);
      if (lookahead == 'n') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(321);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(296);
      if (lookahead == 'n') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(298);
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(305);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(298);
      if (lookahead == 'n') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(321);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(298);
      if (lookahead == 'n') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(295);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(305);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(321);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(297);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(305);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(321);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(314);
      if (lookahead == 'n') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(321);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(113)
      if (lookahead != 0) ADVANCE(267);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 116:
      if (lookahead == 'm') ADVANCE(78);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == 's') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(269);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 124:
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 126:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 130:
      if (lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 131:
      if (lookahead == 'w') ADVANCE(115);
      END_STATE();
    case 132:
      if (lookahead == 'x') ADVANCE(49);
      END_STATE();
    case 133:
      if (lookahead == 'x') ADVANCE(169);
      END_STATE();
    case 134:
      if (lookahead == 'y') ADVANCE(117);
      END_STATE();
    case 135:
      if (lookahead == 'y') ADVANCE(123);
      END_STATE();
    case 136:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(347);
      END_STATE();
    case 137:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      END_STATE();
    case 138:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(275);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(325);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(307);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(349);
      if (lookahead == '\\') ADVANCE(118);
      if (lookahead == 'f' ||
          lookahead == 't') ADVANCE(268);
      END_STATE();
    case 139:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(274);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(326);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(308);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(350);
      END_STATE();
    case 140:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(302);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(343);
      END_STATE();
    case 141:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(303);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(274);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(324);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(306);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(348);
      END_STATE();
    case 146:
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(323);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(347);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(355);
      END_STATE();
    case 155:
      if (eof) ADVANCE(167);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(247);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(54);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == '@') ADVANCE(290);
      if (lookahead == 'd') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(276);
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead == 's') ADVANCE(134);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(155)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 156:
      if (eof) ADVANCE(167);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '\'') ADVANCE(247);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '@') ADVANCE(290);
      if (lookahead == 'i') ADVANCE(293);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(164)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(337);
      if (('!' <= lookahead && lookahead <= '*') ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(246);
      END_STATE();
    case 157:
      if (eof) ADVANCE(167);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '\'') ADVANCE(247);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '@') ADVANCE(290);
      if (lookahead == 'i') ADVANCE(278);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(164)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(337);
      if (('!' <= lookahead && lookahead <= '*') ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(246);
      END_STATE();
    case 158:
      if (eof) ADVANCE(167);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '\'') ADVANCE(247);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(165)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      if (('!' <= lookahead && lookahead <= '*') ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(246);
      END_STATE();
    case 159:
      if (eof) ADVANCE(167);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '\'') ADVANCE(247);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(165)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      if (('!' <= lookahead && lookahead <= '*') ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(246);
      END_STATE();
    case 160:
      if (eof) ADVANCE(167);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '\'') ADVANCE(247);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(166)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      if (('!' <= lookahead && lookahead <= '*') ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(246);
      END_STATE();
    case 161:
      if (eof) ADVANCE(167);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '\'') ADVANCE(247);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(51);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '@') ADVANCE(315);
      if (lookahead == 'i') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(163)
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      if (('!' <= lookahead && lookahead <= '*') ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(246);
      END_STATE();
    case 162:
      if (eof) ADVANCE(167);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '\'') ADVANCE(247);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(51);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '@') ADVANCE(315);
      if (lookahead == 'i') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(163)
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      if (('!' <= lookahead && lookahead <= '*') ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(246);
      END_STATE();
    case 163:
      if (eof) ADVANCE(167);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '\'') ADVANCE(247);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(163)
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      if (('!' <= lookahead && lookahead <= '*') ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(246);
      END_STATE();
    case 164:
      if (eof) ADVANCE(167);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '\'') ADVANCE(247);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(58);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '@') ADVANCE(290);
      if (lookahead == 'i') ADVANCE(278);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(164)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(337);
      if (('!' <= lookahead && lookahead <= '*') ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(246);
      END_STATE();
    case 165:
      if (eof) ADVANCE(167);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '\'') ADVANCE(247);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(62);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(165)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      if (('!' <= lookahead && lookahead <= '*') ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(246);
      END_STATE();
    case 166:
      if (eof) ADVANCE(167);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '\'') ADVANCE(247);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '+') ADVANCE(62);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(166)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      if (('!' <= lookahead && lookahead <= '*') ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(246);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_define_DASHsyntax);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_define_DASHsyntax);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(267);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_syntax_DASHrules);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == '#') ADVANCE(174);
      if (lookahead == '.') ADVANCE(340);
      if (lookahead == '/') ADVANCE(230);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(233);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == '#') ADVANCE(174);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == '/') ADVANCE(230);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(233);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == '#') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == '/') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(233);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '/') ADVANCE(232);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(231);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '/') ADVANCE(232);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '/') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '/') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '.') ADVANCE(340);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'l' ||
          lookahead == 's') ADVANCE(224);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(180);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(233);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == '/') ADVANCE(229);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(233);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '.') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(233);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(185);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == '#') ADVANCE(189);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == '#') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == '#') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == '#') ADVANCE(191);
      if (lookahead == '.') ADVANCE(340);
      if (lookahead == '/') ADVANCE(227);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(190);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(224);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(233);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == '#') ADVANCE(191);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == '/') ADVANCE(227);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(233);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(217);
      if (lookahead == 'n') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(233);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(281);
      if (lookahead == 'n') ADVANCE(207);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(190);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(233);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(281);
      if (lookahead == 'n') ADVANCE(207);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(233);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(286);
      if (lookahead == 'n') ADVANCE(207);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(190);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(233);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(286);
      if (lookahead == 'n') ADVANCE(207);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(233);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(284);
      if (lookahead == 'n') ADVANCE(208);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(190);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(233);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(284);
      if (lookahead == 'n') ADVANCE(208);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(233);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(289);
      if (lookahead == 'n') ADVANCE(208);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(190);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(233);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(289);
      if (lookahead == 'n') ADVANCE(208);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(233);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(221);
      if (lookahead == 'n') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(233);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(233);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == '.') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(233);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(233);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == '.') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(233);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == 'a') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == 'c') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == 'f') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == 'f') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == 'l') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == 'n') ADVANCE(211);
      if (lookahead == 's') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == 'n') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == 'n') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == 'n') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == 'n') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == 'p') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == 'w') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(233);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(233);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(233);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(175);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(175);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(176);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(175);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(175);
      if (lookahead == '\\') ADVANCE(216);
      if (lookahead == 'f' ||
          lookahead == 't') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(185);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__pattern_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(65);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(275);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(325);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(307);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(349);
      if (lookahead == '\\') ADVANCE(118);
      if (lookahead == 'f' ||
          lookahead == 't') ADVANCE(268);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(175);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(175);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(176);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(175);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(175);
      if (lookahead == '\\') ADVANCE(216);
      if (lookahead == 'f' ||
          lookahead == 't') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_define);
      if (lookahead == '-') ADVANCE(127);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_define);
      if (lookahead == '-') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(267);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__identifier);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '#') ADVANCE(351);
      if (lookahead == '/') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(246);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '#') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(246);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(246);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_lambda);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_lambda);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(267);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_procedure_call_token1);
      if (lookahead == 'a') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(267);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_procedure_call_token1);
      if (lookahead == 'a') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(267);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_procedure_call_token1);
      if (lookahead == 'a') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(267);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_procedure_call_token1);
      if (lookahead == 'b') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(267);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_procedure_call_token1);
      if (lookahead == 'd') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(267);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_procedure_call_token1);
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(267);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_procedure_call_token1);
      if (lookahead == 'e') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(267);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_procedure_call_token1);
      if (lookahead == 'f') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(267);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_procedure_call_token1);
      if (lookahead == 'i') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(267);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_procedure_call_token1);
      if (lookahead == 'm') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(267);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_procedure_call_token1);
      if (lookahead == 'n') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(267);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_procedure_call_token1);
      if (lookahead == 'n') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(267);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_procedure_call_token1);
      if (lookahead == 's') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(267);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_procedure_call_token1);
      if (lookahead == 't') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(267);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_procedure_call_token1);
      if (lookahead == 'x') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(267);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_procedure_call_token1);
      if (lookahead == 'y') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_procedure_call_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_infnan);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__infnan_immediate);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_binary_number_token1);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_binary_number_token1);
      if (lookahead == '#') ADVANCE(142);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_i);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(233);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(246);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_PLUSi);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_PLUSi);
      if (lookahead == 'n') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_PLUSi);
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_PLUSi);
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_PLUSi);
      if (lookahead == 'n') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_DASHi);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_DASHi);
      if (lookahead == 'n') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_DASHi);
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_DASHi);
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_DASHi);
      if (lookahead == 'n') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_binary_number_token2);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_i2);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_i2);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(233);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_i2);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(246);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_i2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_binary_number_token3);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_binary_number_token3);
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_binary_number_token4);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_binary_number_token4);
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__real_b_token1);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(340);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(299);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(136);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__real_b_token1);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == '/') ADVANCE(140);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(136);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__real_b_token1);
      if (lookahead == '#') ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__real_b_token1);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(302);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(343);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__real_b_token1);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__real_b_token1);
      if (lookahead == '#') ADVANCE(304);
      if (lookahead == '/') ADVANCE(141);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__real_b_token1);
      if (lookahead == '#') ADVANCE(304);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_octal_number_token1);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_octal_number_token1);
      if (lookahead == '#') ADVANCE(144);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_octal_number_token2);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_octal_number_token3);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_octal_number_token3);
      if (lookahead == '+') ADVANCE(68);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '@') ADVANCE(315);
      if (lookahead == 'i') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_octal_number_token3);
      if (lookahead == '+') ADVANCE(68);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '@') ADVANCE(315);
      if (lookahead == 'i') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_octal_number_token3);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(291);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_octal_number_token3);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(309);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_octal_number_token3);
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(233);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_octal_number_token4);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_octal_number_token4);
      if (lookahead == 'i') ADVANCE(291);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_octal_number_token4);
      if (lookahead == 'i') ADVANCE(317);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__real_o_token1);
      if (lookahead == '#') ADVANCE(320);
      if (lookahead == '/') ADVANCE(147);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__real_o_token1);
      if (lookahead == '#') ADVANCE(320);
      if (lookahead == '/') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__real_o_token1);
      if (lookahead == '#') ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__real_o_token1);
      if (lookahead == '#') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_decimal_number_token1);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_decimal_number_token1);
      if (lookahead == '#') ADVANCE(143);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_decimal_number_token2);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__decimal_number_token1);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__decimal_number_token1);
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__decimal_number_token1);
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__real_d_immediate);
      if (lookahead == '#') ADVANCE(331);
      if (lookahead == '.') ADVANCE(333);
      if (lookahead == '/') ADVANCE(152);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__real_d_immediate);
      if (lookahead == '#') ADVANCE(331);
      if (lookahead == '.') ADVANCE(332);
      if (lookahead == '/') ADVANCE(152);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(137);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__real_d_immediate);
      if (lookahead == '#') ADVANCE(332);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(137);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__real_d_immediate);
      if (lookahead == '#') ADVANCE(332);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__real_d_immediate);
      if (lookahead == '#') ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__real_d_immediate);
      if (lookahead == '#') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__real_d_immediate);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__real_d_token1);
      if (lookahead == '#') ADVANCE(338);
      if (lookahead == '.') ADVANCE(340);
      if (lookahead == '/') ADVANCE(149);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__real_d_token1);
      if (lookahead == '#') ADVANCE(338);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == '/') ADVANCE(149);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(136);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__real_d_token1);
      if (lookahead == '#') ADVANCE(339);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(136);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__real_d_token1);
      if (lookahead == '#') ADVANCE(339);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__real_d_token1);
      if (lookahead == '#') ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__real_d_token1);
      if (lookahead == '#') ADVANCE(341);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__real_d_token1);
      if (lookahead == '#') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__real_d_token1);
      if (lookahead == '#') ADVANCE(351);
      if (lookahead == '/') ADVANCE(154);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__real_d_token1);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '.') ADVANCE(340);
      if (lookahead == '/') ADVANCE(146);
      if (lookahead == 'l' ||
          lookahead == 's') ADVANCE(136);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(353);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__real_d_token1);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == '/') ADVANCE(146);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(136);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__real_d_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_hexadecimal_number_token1);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_hexadecimal_number_token1);
      if (lookahead == '#') ADVANCE(145);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_hexadecimal_number_token2);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__real_x_token1);
      if (lookahead == '#') ADVANCE(351);
      if (lookahead == '/') ADVANCE(154);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__real_x_token1);
      if (lookahead == '#') ADVANCE(351);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(150);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__real_x_token1);
      if (lookahead == '#') ADVANCE(351);
      if (lookahead == '/') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__real_x_token1);
      if (lookahead == '#') ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__real_x_token1);
      if (lookahead == '#') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(355);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 160},
  [2] = {.lex_state = 160},
  [3] = {.lex_state = 160},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 160},
  [6] = {.lex_state = 160},
  [7] = {.lex_state = 160},
  [8] = {.lex_state = 160},
  [9] = {.lex_state = 160},
  [10] = {.lex_state = 160},
  [11] = {.lex_state = 160},
  [12] = {.lex_state = 160},
  [13] = {.lex_state = 160},
  [14] = {.lex_state = 17},
  [15] = {.lex_state = 17},
  [16] = {.lex_state = 17},
  [17] = {.lex_state = 17},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 17},
  [22] = {.lex_state = 17},
  [23] = {.lex_state = 17},
  [24] = {.lex_state = 17},
  [25] = {.lex_state = 17},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 17},
  [28] = {.lex_state = 17},
  [29] = {.lex_state = 17},
  [30] = {.lex_state = 18},
  [31] = {.lex_state = 22},
  [32] = {.lex_state = 19},
  [33] = {.lex_state = 17},
  [34] = {.lex_state = 23},
  [35] = {.lex_state = 17},
  [36] = {.lex_state = 156},
  [37] = {.lex_state = 157},
  [38] = {.lex_state = 161},
  [39] = {.lex_state = 162},
  [40] = {.lex_state = 21},
  [41] = {.lex_state = 20},
  [42] = {.lex_state = 24},
  [43] = {.lex_state = 25},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 12},
  [49] = {.lex_state = 12},
  [50] = {.lex_state = 13},
  [51] = {.lex_state = 158},
  [52] = {.lex_state = 15},
  [53] = {.lex_state = 15},
  [54] = {.lex_state = 13},
  [55] = {.lex_state = 158},
  [56] = {.lex_state = 14},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 159},
  [59] = {.lex_state = 14},
  [60] = {.lex_state = 14},
  [61] = {.lex_state = 14},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 14},
  [64] = {.lex_state = 159},
  [65] = {.lex_state = 14},
  [66] = {.lex_state = 14},
  [67] = {.lex_state = 14},
  [68] = {.lex_state = 14},
  [69] = {.lex_state = 14},
  [70] = {.lex_state = 14},
  [71] = {.lex_state = 14},
  [72] = {.lex_state = 16},
  [73] = {.lex_state = 14},
  [74] = {.lex_state = 14},
  [75] = {.lex_state = 14},
  [76] = {.lex_state = 14},
  [77] = {.lex_state = 14},
  [78] = {.lex_state = 14},
  [79] = {.lex_state = 14},
  [80] = {.lex_state = 16},
  [81] = {.lex_state = 14},
  [82] = {.lex_state = 14},
  [83] = {.lex_state = 14},
  [84] = {.lex_state = 14},
  [85] = {.lex_state = 14},
  [86] = {.lex_state = 14},
  [87] = {.lex_state = 17},
  [88] = {.lex_state = 17},
  [89] = {.lex_state = 160},
  [90] = {.lex_state = 160},
  [91] = {.lex_state = 160},
  [92] = {.lex_state = 17},
  [93] = {.lex_state = 17},
  [94] = {.lex_state = 160},
  [95] = {.lex_state = 17},
  [96] = {.lex_state = 17},
  [97] = {.lex_state = 160},
  [98] = {.lex_state = 17},
  [99] = {.lex_state = 160},
  [100] = {.lex_state = 17},
  [101] = {.lex_state = 17},
  [102] = {.lex_state = 160},
  [103] = {.lex_state = 17},
  [104] = {.lex_state = 160},
  [105] = {.lex_state = 17},
  [106] = {.lex_state = 160},
  [107] = {.lex_state = 160},
  [108] = {.lex_state = 160},
  [109] = {.lex_state = 17},
  [110] = {.lex_state = 160},
  [111] = {.lex_state = 160},
  [112] = {.lex_state = 160},
  [113] = {.lex_state = 160},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 17},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 160},
  [118] = {.lex_state = 160},
  [119] = {.lex_state = 160},
  [120] = {.lex_state = 17},
  [121] = {.lex_state = 17},
  [122] = {.lex_state = 160},
  [123] = {.lex_state = 17},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 17},
  [126] = {.lex_state = 17},
  [127] = {.lex_state = 160},
  [128] = {.lex_state = 160},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 17},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 160},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 160},
  [136] = {.lex_state = 160},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 160},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 160},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 160},
  [148] = {.lex_state = 160},
  [149] = {.lex_state = 160},
  [150] = {.lex_state = 160},
  [151] = {.lex_state = 160},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 160},
  [160] = {.lex_state = 160},
  [161] = {.lex_state = 160},
  [162] = {.lex_state = 160},
  [163] = {.lex_state = 35},
  [164] = {.lex_state = 36},
  [165] = {.lex_state = 39},
  [166] = {.lex_state = 38},
  [167] = {.lex_state = 41},
  [168] = {.lex_state = 310},
  [169] = {.lex_state = 45},
  [170] = {.lex_state = 310},
  [171] = {.lex_state = 312},
  [172] = {.lex_state = 45},
  [173] = {.lex_state = 43},
  [174] = {.lex_state = 41},
  [175] = {.lex_state = 47},
  [176] = {.lex_state = 310},
  [177] = {.lex_state = 312},
  [178] = {.lex_state = 313},
  [179] = {.lex_state = 313},
  [180] = {.lex_state = 47},
  [181] = {.lex_state = 41},
  [182] = {.lex_state = 43},
  [183] = {.lex_state = 312},
  [184] = {.lex_state = 45},
  [185] = {.lex_state = 47},
  [186] = {.lex_state = 313},
  [187] = {.lex_state = 43},
  [188] = {.lex_state = 41},
  [189] = {.lex_state = 47},
  [190] = {.lex_state = 45},
  [191] = {.lex_state = 310},
  [192] = {.lex_state = 313},
  [193] = {.lex_state = 47},
  [194] = {.lex_state = 312},
  [195] = {.lex_state = 41},
  [196] = {.lex_state = 41},
  [197] = {.lex_state = 43},
  [198] = {.lex_state = 41},
  [199] = {.lex_state = 45},
  [200] = {.lex_state = 41},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 160},
  [203] = {.lex_state = 311},
  [204] = {.lex_state = 160},
  [205] = {.lex_state = 160},
  [206] = {.lex_state = 80},
  [207] = {.lex_state = 311},
  [208] = {.lex_state = 160},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 160},
  [211] = {.lex_state = 311},
  [212] = {.lex_state = 311},
  [213] = {.lex_state = 41},
  [214] = {.lex_state = 41},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 39},
  [217] = {.lex_state = 35},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 41},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 35},
  [222] = {.lex_state = 41},
  [223] = {.lex_state = 39},
  [224] = {.lex_state = 160},
  [225] = {.lex_state = 41},
  [226] = {.lex_state = 35},
  [227] = {.lex_state = 41},
  [228] = {.lex_state = 35},
  [229] = {.lex_state = 35},
  [230] = {.lex_state = 39},
  [231] = {.lex_state = 39},
  [232] = {.lex_state = 39},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 318},
  [235] = {.lex_state = 160},
  [236] = {.lex_state = 318},
  [237] = {.lex_state = 160},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 318},
  [241] = {.lex_state = 160},
  [242] = {.lex_state = 160},
  [243] = {.lex_state = 36},
  [244] = {.lex_state = 160},
  [245] = {.lex_state = 113},
  [246] = {.lex_state = 318},
  [247] = {.lex_state = 36},
  [248] = {.lex_state = 310},
  [249] = {.lex_state = 319},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 319},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 310},
  [257] = {.lex_state = 319},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 319},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 310},
  [264] = {.lex_state = 319},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 319},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 310},
  [280] = {.lex_state = 319},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 319},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 160},
  [298] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_define_DASHsyntax] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_syntax_DASHrules] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_lambda] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym_character] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__infnan_immediate] = ACTIONS(1),
    [aux_sym_binary_number_token1] = ACTIONS(1),
    [anon_sym_i] = ACTIONS(1),
    [anon_sym_PLUSi] = ACTIONS(1),
    [anon_sym_DASHi] = ACTIONS(1),
    [aux_sym_binary_number_token2] = ACTIONS(1),
    [anon_sym_i2] = ACTIONS(1),
    [aux_sym_binary_number_token3] = ACTIONS(1),
    [aux_sym_binary_number_token4] = ACTIONS(1),
    [aux_sym__real_b_token1] = ACTIONS(1),
    [aux_sym_octal_number_token1] = ACTIONS(1),
    [aux_sym_octal_number_token2] = ACTIONS(1),
    [aux_sym_decimal_number_token1] = ACTIONS(1),
    [aux_sym_decimal_number_token2] = ACTIONS(1),
    [aux_sym__decimal_number_token1] = ACTIONS(1),
    [aux_sym__real_d_token1] = ACTIONS(1),
    [aux_sym_hexadecimal_number_token1] = ACTIONS(1),
    [aux_sym_hexadecimal_number_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(265),
    [sym__scope] = STATE(3),
    [sym__token] = STATE(3),
    [sym_primitives] = STATE(3),
    [sym__expression] = STATE(3),
    [sym_definition] = STATE(3),
    [sym_binding_syntax] = STATE(143),
    [sym_binding_procedure] = STATE(143),
    [sym_binding_variable] = STATE(143),
    [sym_variable] = STATE(122),
    [sym_symbol] = STATE(122),
    [sym_lambda] = STATE(106),
    [sym_procedure_call] = STATE(106),
    [sym_string] = STATE(122),
    [sym_number] = STATE(122),
    [sym_binary_number] = STATE(118),
    [sym_octal_number] = STATE(118),
    [sym_decimal_number] = STATE(118),
    [sym__decimal_number] = STATE(117),
    [sym__real_d] = STATE(212),
    [sym_hexadecimal_number] = STATE(118),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
    [sym__identifier] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [sym_boolean] = ACTIONS(11),
    [sym_character] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_infnan] = ACTIONS(15),
    [sym__infnan_immediate] = ACTIONS(17),
    [aux_sym_binary_number_token1] = ACTIONS(19),
    [aux_sym_octal_number_token1] = ACTIONS(21),
    [aux_sym_octal_number_token2] = ACTIONS(23),
    [aux_sym_decimal_number_token1] = ACTIONS(25),
    [aux_sym_decimal_number_token2] = ACTIONS(27),
    [aux_sym__decimal_number_token1] = ACTIONS(29),
    [aux_sym__real_d_token1] = ACTIONS(31),
    [aux_sym_hexadecimal_number_token1] = ACTIONS(33),
    [aux_sym_hexadecimal_number_token2] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 24,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(42), 1,
      sym__identifier,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(54), 1,
      sym_infnan,
    ACTIONS(57), 1,
      sym__infnan_immediate,
    ACTIONS(60), 1,
      aux_sym_binary_number_token1,
    ACTIONS(63), 1,
      aux_sym_octal_number_token1,
    ACTIONS(66), 1,
      aux_sym_octal_number_token2,
    ACTIONS(69), 1,
      aux_sym_decimal_number_token1,
    ACTIONS(72), 1,
      aux_sym_decimal_number_token2,
    ACTIONS(75), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(78), 1,
      aux_sym__real_d_token1,
    ACTIONS(81), 1,
      aux_sym_hexadecimal_number_token1,
    ACTIONS(84), 1,
      aux_sym_hexadecimal_number_token2,
    STATE(117), 1,
      sym__decimal_number,
    STATE(212), 1,
      sym__real_d,
    ACTIONS(48), 2,
      sym_boolean,
      sym_character,
    STATE(106), 2,
      sym_lambda,
      sym_procedure_call,
    STATE(143), 3,
      sym_binding_syntax,
      sym_binding_procedure,
      sym_binding_variable,
    STATE(118), 4,
      sym_binary_number,
      sym_octal_number,
      sym_decimal_number,
      sym_hexadecimal_number,
    STATE(122), 4,
      sym_variable,
      sym_symbol,
      sym_string,
      sym_number,
    STATE(2), 6,
      sym__scope,
      sym__token,
      sym_primitives,
      sym__expression,
      sym_definition,
      aux_sym_program_repeat1,
  [88] = 24,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_infnan,
    ACTIONS(17), 1,
      sym__infnan_immediate,
    ACTIONS(19), 1,
      aux_sym_binary_number_token1,
    ACTIONS(21), 1,
      aux_sym_octal_number_token1,
    ACTIONS(23), 1,
      aux_sym_octal_number_token2,
    ACTIONS(25), 1,
      aux_sym_decimal_number_token1,
    ACTIONS(27), 1,
      aux_sym_decimal_number_token2,
    ACTIONS(29), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(31), 1,
      aux_sym__real_d_token1,
    ACTIONS(33), 1,
      aux_sym_hexadecimal_number_token1,
    ACTIONS(35), 1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    STATE(117), 1,
      sym__decimal_number,
    STATE(212), 1,
      sym__real_d,
    ACTIONS(11), 2,
      sym_boolean,
      sym_character,
    STATE(106), 2,
      sym_lambda,
      sym_procedure_call,
    STATE(143), 3,
      sym_binding_syntax,
      sym_binding_procedure,
      sym_binding_variable,
    STATE(118), 4,
      sym_binary_number,
      sym_octal_number,
      sym_decimal_number,
      sym_hexadecimal_number,
    STATE(122), 4,
      sym_variable,
      sym_symbol,
      sym_string,
      sym_number,
    STATE(2), 6,
      sym__scope,
      sym__token,
      sym_primitives,
      sym__expression,
      sym_definition,
      aux_sym_program_repeat1,
  [176] = 23,
    ACTIONS(15), 1,
      sym_infnan,
    ACTIONS(17), 1,
      sym__infnan_immediate,
    ACTIONS(29), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      aux_sym__pattern_token1,
    ACTIONS(93), 1,
      sym__identifier,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      aux_sym_binary_number_token1,
    ACTIONS(103), 1,
      aux_sym__real_d_token1,
    STATE(12), 1,
      aux_sym__template_repeat1,
    STATE(117), 1,
      sym__decimal_number,
    STATE(212), 1,
      sym__real_d,
    STATE(291), 1,
      sym_template,
    STATE(292), 1,
      sym__template,
    ACTIONS(23), 2,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
    ACTIONS(27), 2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
    ACTIONS(35), 2,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(97), 2,
      sym_boolean,
      sym_character,
    STATE(106), 2,
      sym_lambda,
      sym_procedure_call,
    STATE(135), 3,
      sym__token,
      sym_primitives,
      sym__expression,
    STATE(118), 4,
      sym_binary_number,
      sym_octal_number,
      sym_decimal_number,
      sym_hexadecimal_number,
    STATE(122), 4,
      sym_variable,
      sym_symbol,
      sym_string,
      sym_number,
  [259] = 24,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_infnan,
    ACTIONS(17), 1,
      sym__infnan_immediate,
    ACTIONS(19), 1,
      aux_sym_binary_number_token1,
    ACTIONS(21), 1,
      aux_sym_octal_number_token1,
    ACTIONS(23), 1,
      aux_sym_octal_number_token2,
    ACTIONS(25), 1,
      aux_sym_decimal_number_token1,
    ACTIONS(27), 1,
      aux_sym_decimal_number_token2,
    ACTIONS(29), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(31), 1,
      aux_sym__real_d_token1,
    ACTIONS(33), 1,
      aux_sym_hexadecimal_number_token1,
    ACTIONS(35), 1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      aux_sym__template_repeat1,
    STATE(117), 1,
      sym__decimal_number,
    STATE(212), 1,
      sym__real_d,
    STATE(276), 1,
      sym_body,
    ACTIONS(11), 2,
      sym_boolean,
      sym_character,
    STATE(106), 2,
      sym_lambda,
      sym_procedure_call,
    STATE(135), 3,
      sym__token,
      sym_primitives,
      sym__expression,
    STATE(118), 4,
      sym_binary_number,
      sym_octal_number,
      sym_decimal_number,
      sym_hexadecimal_number,
    STATE(122), 4,
      sym_variable,
      sym_symbol,
      sym_string,
      sym_number,
  [342] = 24,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_infnan,
    ACTIONS(17), 1,
      sym__infnan_immediate,
    ACTIONS(19), 1,
      aux_sym_binary_number_token1,
    ACTIONS(21), 1,
      aux_sym_octal_number_token1,
    ACTIONS(23), 1,
      aux_sym_octal_number_token2,
    ACTIONS(25), 1,
      aux_sym_decimal_number_token1,
    ACTIONS(27), 1,
      aux_sym_decimal_number_token2,
    ACTIONS(29), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(31), 1,
      aux_sym__real_d_token1,
    ACTIONS(33), 1,
      aux_sym_hexadecimal_number_token1,
    ACTIONS(35), 1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      aux_sym__template_repeat1,
    STATE(117), 1,
      sym__decimal_number,
    STATE(212), 1,
      sym__real_d,
    ACTIONS(11), 2,
      sym_boolean,
      sym_character,
    STATE(106), 2,
      sym_lambda,
      sym_procedure_call,
    STATE(135), 3,
      sym__token,
      sym_primitives,
      sym__expression,
    STATE(118), 4,
      sym_binary_number,
      sym_octal_number,
      sym_decimal_number,
      sym_hexadecimal_number,
    STATE(122), 4,
      sym_variable,
      sym_symbol,
      sym_string,
      sym_number,
  [425] = 24,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_infnan,
    ACTIONS(17), 1,
      sym__infnan_immediate,
    ACTIONS(19), 1,
      aux_sym_binary_number_token1,
    ACTIONS(21), 1,
      aux_sym_octal_number_token1,
    ACTIONS(23), 1,
      aux_sym_octal_number_token2,
    ACTIONS(25), 1,
      aux_sym_decimal_number_token1,
    ACTIONS(27), 1,
      aux_sym_decimal_number_token2,
    ACTIONS(29), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(31), 1,
      aux_sym__real_d_token1,
    ACTIONS(33), 1,
      aux_sym_hexadecimal_number_token1,
    ACTIONS(35), 1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      aux_sym__template_repeat1,
    STATE(117), 1,
      sym__decimal_number,
    STATE(212), 1,
      sym__real_d,
    STATE(273), 1,
      sym_body,
    ACTIONS(11), 2,
      sym_boolean,
      sym_character,
    STATE(106), 2,
      sym_lambda,
      sym_procedure_call,
    STATE(135), 3,
      sym__token,
      sym_primitives,
      sym__expression,
    STATE(118), 4,
      sym_binary_number,
      sym_octal_number,
      sym_decimal_number,
      sym_hexadecimal_number,
    STATE(122), 4,
      sym_variable,
      sym_symbol,
      sym_string,
      sym_number,
  [508] = 24,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_infnan,
    ACTIONS(17), 1,
      sym__infnan_immediate,
    ACTIONS(19), 1,
      aux_sym_binary_number_token1,
    ACTIONS(21), 1,
      aux_sym_octal_number_token1,
    ACTIONS(23), 1,
      aux_sym_octal_number_token2,
    ACTIONS(25), 1,
      aux_sym_decimal_number_token1,
    ACTIONS(27), 1,
      aux_sym_decimal_number_token2,
    ACTIONS(29), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(31), 1,
      aux_sym__real_d_token1,
    ACTIONS(33), 1,
      aux_sym_hexadecimal_number_token1,
    ACTIONS(35), 1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      aux_sym__template_repeat1,
    STATE(117), 1,
      sym__decimal_number,
    STATE(212), 1,
      sym__real_d,
    ACTIONS(11), 2,
      sym_boolean,
      sym_character,
    STATE(106), 2,
      sym_lambda,
      sym_procedure_call,
    STATE(135), 3,
      sym__token,
      sym_primitives,
      sym__expression,
    STATE(118), 4,
      sym_binary_number,
      sym_octal_number,
      sym_decimal_number,
      sym_hexadecimal_number,
    STATE(122), 4,
      sym_variable,
      sym_symbol,
      sym_string,
      sym_number,
  [591] = 24,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_infnan,
    ACTIONS(17), 1,
      sym__infnan_immediate,
    ACTIONS(19), 1,
      aux_sym_binary_number_token1,
    ACTIONS(21), 1,
      aux_sym_octal_number_token1,
    ACTIONS(23), 1,
      aux_sym_octal_number_token2,
    ACTIONS(25), 1,
      aux_sym_decimal_number_token1,
    ACTIONS(27), 1,
      aux_sym_decimal_number_token2,
    ACTIONS(29), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(31), 1,
      aux_sym__real_d_token1,
    ACTIONS(33), 1,
      aux_sym_hexadecimal_number_token1,
    ACTIONS(35), 1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      aux_sym__template_repeat1,
    STATE(117), 1,
      sym__decimal_number,
    STATE(212), 1,
      sym__real_d,
    STATE(283), 1,
      sym_body,
    ACTIONS(11), 2,
      sym_boolean,
      sym_character,
    STATE(106), 2,
      sym_lambda,
      sym_procedure_call,
    STATE(135), 3,
      sym__token,
      sym_primitives,
      sym__expression,
    STATE(118), 4,
      sym_binary_number,
      sym_octal_number,
      sym_decimal_number,
      sym_hexadecimal_number,
    STATE(122), 4,
      sym_variable,
      sym_symbol,
      sym_string,
      sym_number,
  [674] = 24,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
    ACTIONS(114), 1,
      sym__identifier,
    ACTIONS(117), 1,
      anon_sym_SQUOTE,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(126), 1,
      sym_infnan,
    ACTIONS(129), 1,
      sym__infnan_immediate,
    ACTIONS(132), 1,
      aux_sym_binary_number_token1,
    ACTIONS(135), 1,
      aux_sym_octal_number_token1,
    ACTIONS(138), 1,
      aux_sym_octal_number_token2,
    ACTIONS(141), 1,
      aux_sym_decimal_number_token1,
    ACTIONS(144), 1,
      aux_sym_decimal_number_token2,
    ACTIONS(147), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(150), 1,
      aux_sym__real_d_token1,
    ACTIONS(153), 1,
      aux_sym_hexadecimal_number_token1,
    ACTIONS(156), 1,
      aux_sym_hexadecimal_number_token2,
    STATE(10), 1,
      aux_sym__template_repeat1,
    STATE(117), 1,
      sym__decimal_number,
    STATE(212), 1,
      sym__real_d,
    ACTIONS(120), 2,
      sym_boolean,
      sym_character,
    STATE(106), 2,
      sym_lambda,
      sym_procedure_call,
    STATE(135), 3,
      sym__token,
      sym_primitives,
      sym__expression,
    STATE(118), 4,
      sym_binary_number,
      sym_octal_number,
      sym_decimal_number,
      sym_hexadecimal_number,
    STATE(122), 4,
      sym_variable,
      sym_symbol,
      sym_string,
      sym_number,
  [757] = 24,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_infnan,
    ACTIONS(17), 1,
      sym__infnan_immediate,
    ACTIONS(19), 1,
      aux_sym_binary_number_token1,
    ACTIONS(21), 1,
      aux_sym_octal_number_token1,
    ACTIONS(23), 1,
      aux_sym_octal_number_token2,
    ACTIONS(25), 1,
      aux_sym_decimal_number_token1,
    ACTIONS(27), 1,
      aux_sym_decimal_number_token2,
    ACTIONS(29), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(31), 1,
      aux_sym__real_d_token1,
    ACTIONS(33), 1,
      aux_sym_hexadecimal_number_token1,
    ACTIONS(35), 1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      aux_sym__template_repeat1,
    STATE(117), 1,
      sym__decimal_number,
    STATE(212), 1,
      sym__real_d,
    ACTIONS(11), 2,
      sym_boolean,
      sym_character,
    STATE(106), 2,
      sym_lambda,
      sym_procedure_call,
    STATE(135), 3,
      sym__token,
      sym_primitives,
      sym__expression,
    STATE(118), 4,
      sym_binary_number,
      sym_octal_number,
      sym_decimal_number,
      sym_hexadecimal_number,
    STATE(122), 4,
      sym_variable,
      sym_symbol,
      sym_string,
      sym_number,
  [840] = 24,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_infnan,
    ACTIONS(17), 1,
      sym__infnan_immediate,
    ACTIONS(19), 1,
      aux_sym_binary_number_token1,
    ACTIONS(21), 1,
      aux_sym_octal_number_token1,
    ACTIONS(23), 1,
      aux_sym_octal_number_token2,
    ACTIONS(25), 1,
      aux_sym_decimal_number_token1,
    ACTIONS(27), 1,
      aux_sym_decimal_number_token2,
    ACTIONS(29), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(31), 1,
      aux_sym__real_d_token1,
    ACTIONS(33), 1,
      aux_sym_hexadecimal_number_token1,
    ACTIONS(35), 1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      aux_sym__template_repeat1,
    STATE(117), 1,
      sym__decimal_number,
    STATE(212), 1,
      sym__real_d,
    ACTIONS(11), 2,
      sym_boolean,
      sym_character,
    STATE(106), 2,
      sym_lambda,
      sym_procedure_call,
    STATE(135), 3,
      sym__token,
      sym_primitives,
      sym__expression,
    STATE(118), 4,
      sym_binary_number,
      sym_octal_number,
      sym_decimal_number,
      sym_hexadecimal_number,
    STATE(122), 4,
      sym_variable,
      sym_symbol,
      sym_string,
      sym_number,
  [923] = 22,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_infnan,
    ACTIONS(17), 1,
      sym__infnan_immediate,
    ACTIONS(21), 1,
      aux_sym_octal_number_token1,
    ACTIONS(23), 1,
      aux_sym_octal_number_token2,
    ACTIONS(25), 1,
      aux_sym_decimal_number_token1,
    ACTIONS(27), 1,
      aux_sym_decimal_number_token2,
    ACTIONS(29), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(31), 1,
      aux_sym__real_d_token1,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      aux_sym_binary_number_token1,
    ACTIONS(165), 1,
      aux_sym_hexadecimal_number_token1,
    ACTIONS(167), 1,
      aux_sym_hexadecimal_number_token2,
    STATE(117), 1,
      sym__decimal_number,
    STATE(212), 1,
      sym__real_d,
    STATE(272), 1,
      sym_lambda,
    ACTIONS(11), 2,
      sym_boolean,
      sym_character,
    STATE(271), 2,
      sym_primitives,
      sym_procedure_call,
    STATE(118), 4,
      sym_binary_number,
      sym_octal_number,
      sym_decimal_number,
      sym_hexadecimal_number,
    STATE(122), 4,
      sym_variable,
      sym_symbol,
      sym_string,
      sym_number,
  [998] = 19,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    ACTIONS(175), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_POUND,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      sym_infnan,
    ACTIONS(183), 1,
      sym__infnan_immediate,
    ACTIONS(185), 1,
      aux_sym_binary_number_token1,
    ACTIONS(191), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(193), 1,
      aux_sym__real_d_token1,
    STATE(15), 1,
      aux_sym__pattern_repeat1,
    STATE(86), 1,
      sym__decimal_number,
    STATE(203), 1,
      sym__real_d,
    ACTIONS(187), 2,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
    ACTIONS(189), 2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
    ACTIONS(195), 2,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(173), 3,
      aux_sym__pattern_token1,
      sym_boolean,
      sym_character,
    STATE(65), 3,
      sym__pattern,
      sym_string,
      sym_number,
    STATE(85), 4,
      sym_binary_number,
      sym_octal_number,
      sym_decimal_number,
      sym_hexadecimal_number,
  [1066] = 18,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_RPAREN,
    ACTIONS(205), 1,
      anon_sym_DOT,
    ACTIONS(207), 1,
      anon_sym_POUND,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    ACTIONS(213), 1,
      sym_infnan,
    ACTIONS(216), 1,
      sym__infnan_immediate,
    ACTIONS(219), 1,
      aux_sym_binary_number_token1,
    ACTIONS(228), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(231), 1,
      aux_sym__real_d_token1,
    STATE(98), 1,
      sym__decimal_number,
    STATE(207), 1,
      sym__real_d,
    ACTIONS(222), 2,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
    ACTIONS(225), 2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
    ACTIONS(234), 2,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(202), 3,
      aux_sym__pattern_token1,
      sym_boolean,
      sym_character,
    STATE(15), 4,
      sym__pattern,
      sym_string,
      sym_number,
      aux_sym__pattern_repeat1,
    STATE(87), 4,
      sym_binary_number,
      sym_octal_number,
      sym_decimal_number,
      sym_hexadecimal_number,
  [1132] = 19,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_POUND,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      sym_infnan,
    ACTIONS(183), 1,
      sym__infnan_immediate,
    ACTIONS(185), 1,
      aux_sym_binary_number_token1,
    ACTIONS(191), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(193), 1,
      aux_sym__real_d_token1,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    ACTIONS(241), 1,
      anon_sym_DOT,
    STATE(15), 1,
      aux_sym__pattern_repeat1,
    STATE(86), 1,
      sym__decimal_number,
    STATE(203), 1,
      sym__real_d,
    ACTIONS(187), 2,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
    ACTIONS(189), 2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
    ACTIONS(195), 2,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(239), 3,
      aux_sym__pattern_token1,
      sym_boolean,
      sym_character,
    STATE(75), 3,
      sym__pattern,
      sym_string,
      sym_number,
    STATE(85), 4,
      sym_binary_number,
      sym_octal_number,
      sym_decimal_number,
      sym_hexadecimal_number,
  [1200] = 19,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_POUND,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      sym_infnan,
    ACTIONS(183), 1,
      sym__infnan_immediate,
    ACTIONS(185), 1,
      aux_sym_binary_number_token1,
    ACTIONS(191), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(193), 1,
      aux_sym__real_d_token1,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    ACTIONS(247), 1,
      anon_sym_DOT,
    STATE(15), 1,
      aux_sym__pattern_repeat1,
    STATE(86), 1,
      sym__decimal_number,
    STATE(203), 1,
      sym__real_d,
    ACTIONS(187), 2,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
    ACTIONS(189), 2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
    ACTIONS(195), 2,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(245), 3,
      aux_sym__pattern_token1,
      sym_boolean,
      sym_character,
    STATE(78), 3,
      sym__pattern,
      sym_string,
      sym_number,
    STATE(85), 4,
      sym_binary_number,
      sym_octal_number,
      sym_decimal_number,
      sym_hexadecimal_number,
  [1268] = 17,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_POUND,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      sym_infnan,
    ACTIONS(183), 1,
      sym__infnan_immediate,
    ACTIONS(185), 1,
      aux_sym_binary_number_token1,
    ACTIONS(191), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(193), 1,
      aux_sym__real_d_token1,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      sym__decimal_number,
    STATE(203), 1,
      sym__real_d,
    ACTIONS(187), 2,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
    ACTIONS(189), 2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
    ACTIONS(195), 2,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(251), 3,
      aux_sym__pattern_token1,
      sym_boolean,
      sym_character,
    STATE(20), 4,
      sym__pattern,
      sym_string,
      sym_number,
      aux_sym__pattern_repeat1,
    STATE(85), 4,
      sym_binary_number,
      sym_octal_number,
      sym_decimal_number,
      sym_hexadecimal_number,
  [1331] = 17,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_POUND,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      sym_infnan,
    ACTIONS(183), 1,
      sym__infnan_immediate,
    ACTIONS(185), 1,
      aux_sym_binary_number_token1,
    ACTIONS(191), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(193), 1,
      aux_sym__real_d_token1,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      sym__decimal_number,
    STATE(203), 1,
      sym__real_d,
    ACTIONS(187), 2,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
    ACTIONS(189), 2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
    ACTIONS(195), 2,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(251), 3,
      aux_sym__pattern_token1,
      sym_boolean,
      sym_character,
    STATE(20), 4,
      sym__pattern,
      sym_string,
      sym_number,
      aux_sym__pattern_repeat1,
    STATE(85), 4,
      sym_binary_number,
      sym_octal_number,
      sym_decimal_number,
      sym_hexadecimal_number,
  [1394] = 17,
    ACTIONS(200), 1,
      anon_sym_RPAREN,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      sym_infnan,
    ACTIONS(270), 1,
      sym__infnan_immediate,
    ACTIONS(273), 1,
      aux_sym_binary_number_token1,
    ACTIONS(282), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(285), 1,
      aux_sym__real_d_token1,
    STATE(86), 1,
      sym__decimal_number,
    STATE(203), 1,
      sym__real_d,
    ACTIONS(276), 2,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
    ACTIONS(279), 2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
    ACTIONS(288), 2,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(258), 3,
      aux_sym__pattern_token1,
      sym_boolean,
      sym_character,
    STATE(20), 4,
      sym__pattern,
      sym_string,
      sym_number,
      aux_sym__pattern_repeat1,
    STATE(85), 4,
      sym_binary_number,
      sym_octal_number,
      sym_decimal_number,
      sym_hexadecimal_number,
  [1457] = 17,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_POUND,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      sym_infnan,
    ACTIONS(183), 1,
      sym__infnan_immediate,
    ACTIONS(185), 1,
      aux_sym_binary_number_token1,
    ACTIONS(191), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(193), 1,
      aux_sym__real_d_token1,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      sym__decimal_number,
    STATE(203), 1,
      sym__real_d,
    ACTIONS(187), 2,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
    ACTIONS(189), 2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
    ACTIONS(195), 2,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(291), 3,
      aux_sym__pattern_token1,
      sym_boolean,
      sym_character,
    STATE(19), 4,
      sym__pattern,
      sym_string,
      sym_number,
      aux_sym__pattern_repeat1,
    STATE(85), 4,
      sym_binary_number,
      sym_octal_number,
      sym_decimal_number,
      sym_hexadecimal_number,
  [1520] = 17,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_POUND,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      sym_infnan,
    ACTIONS(183), 1,
      sym__infnan_immediate,
    ACTIONS(185), 1,
      aux_sym_binary_number_token1,
    ACTIONS(191), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(193), 1,
      aux_sym__real_d_token1,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      sym__decimal_number,
    STATE(203), 1,
      sym__real_d,
    ACTIONS(187), 2,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
    ACTIONS(189), 2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
    ACTIONS(195), 2,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(251), 3,
      aux_sym__pattern_token1,
      sym_boolean,
      sym_character,
    STATE(20), 4,
      sym__pattern,
      sym_string,
      sym_number,
      aux_sym__pattern_repeat1,
    STATE(85), 4,
      sym_binary_number,
      sym_octal_number,
      sym_decimal_number,
      sym_hexadecimal_number,
  [1583] = 18,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_POUND,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      sym_infnan,
    ACTIONS(183), 1,
      sym__infnan_immediate,
    ACTIONS(185), 1,
      aux_sym_binary_number_token1,
    ACTIONS(191), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(193), 1,
      aux_sym__real_d_token1,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      aux_sym__pattern_repeat1,
    STATE(86), 1,
      sym__decimal_number,
    STATE(203), 1,
      sym__real_d,
    ACTIONS(187), 2,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
    ACTIONS(189), 2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
    ACTIONS(195), 2,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(297), 3,
      aux_sym__pattern_token1,
      sym_boolean,
      sym_character,
    STATE(76), 3,
      sym__pattern,
      sym_string,
      sym_number,
    STATE(85), 4,
      sym_binary_number,
      sym_octal_number,
      sym_decimal_number,
      sym_hexadecimal_number,
  [1648] = 18,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_POUND,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      sym_infnan,
    ACTIONS(183), 1,
      sym__infnan_immediate,
    ACTIONS(185), 1,
      aux_sym_binary_number_token1,
    ACTIONS(191), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(193), 1,
      aux_sym__real_d_token1,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      aux_sym__pattern_repeat1,
    STATE(86), 1,
      sym__decimal_number,
    STATE(203), 1,
      sym__real_d,
    ACTIONS(187), 2,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
    ACTIONS(189), 2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
    ACTIONS(195), 2,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(301), 3,
      aux_sym__pattern_token1,
      sym_boolean,
      sym_character,
    STATE(74), 3,
      sym__pattern,
      sym_string,
      sym_number,
    STATE(85), 4,
      sym_binary_number,
      sym_octal_number,
      sym_decimal_number,
      sym_hexadecimal_number,
  [1713] = 18,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_POUND,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      sym_infnan,
    ACTIONS(183), 1,
      sym__infnan_immediate,
    ACTIONS(185), 1,
      aux_sym_binary_number_token1,
    ACTIONS(191), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(193), 1,
      aux_sym__real_d_token1,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      aux_sym__pattern_repeat1,
    STATE(86), 1,
      sym__decimal_number,
    STATE(203), 1,
      sym__real_d,
    ACTIONS(187), 2,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
    ACTIONS(189), 2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
    ACTIONS(195), 2,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(305), 3,
      aux_sym__pattern_token1,
      sym_boolean,
      sym_character,
    STATE(83), 3,
      sym__pattern,
      sym_string,
      sym_number,
    STATE(85), 4,
      sym_binary_number,
      sym_octal_number,
      sym_decimal_number,
      sym_hexadecimal_number,
  [1778] = 17,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_POUND,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      sym_infnan,
    ACTIONS(183), 1,
      sym__infnan_immediate,
    ACTIONS(185), 1,
      aux_sym_binary_number_token1,
    ACTIONS(191), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(193), 1,
      aux_sym__real_d_token1,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      sym__decimal_number,
    STATE(203), 1,
      sym__real_d,
    ACTIONS(187), 2,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
    ACTIONS(189), 2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
    ACTIONS(195), 2,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(307), 3,
      aux_sym__pattern_token1,
      sym_boolean,
      sym_character,
    STATE(18), 4,
      sym__pattern,
      sym_string,
      sym_number,
      aux_sym__pattern_repeat1,
    STATE(85), 4,
      sym_binary_number,
      sym_octal_number,
      sym_decimal_number,
      sym_hexadecimal_number,
  [1841] = 17,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    ACTIONS(177), 1,
      anon_sym_POUND,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      sym_infnan,
    ACTIONS(183), 1,
      sym__infnan_immediate,
    ACTIONS(185), 1,
      aux_sym_binary_number_token1,
    ACTIONS(191), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(193), 1,
      aux_sym__real_d_token1,
    STATE(86), 1,
      sym__decimal_number,
    STATE(203), 1,
      sym__real_d,
    ACTIONS(187), 2,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
    ACTIONS(189), 2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
    ACTIONS(195), 2,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(309), 3,
      aux_sym__pattern_token1,
      sym_boolean,
      sym_character,
    STATE(22), 4,
      sym__pattern,
      sym_string,
      sym_number,
      aux_sym__pattern_repeat1,
    STATE(85), 4,
      sym_binary_number,
      sym_octal_number,
      sym_decimal_number,
      sym_hexadecimal_number,
  [1904] = 17,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(315), 1,
      anon_sym_POUND,
    ACTIONS(317), 1,
      anon_sym_DQUOTE,
    ACTIONS(319), 1,
      sym_infnan,
    ACTIONS(321), 1,
      sym__infnan_immediate,
    ACTIONS(323), 1,
      aux_sym_binary_number_token1,
    ACTIONS(329), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(331), 1,
      aux_sym__real_d_token1,
    STATE(4), 1,
      sym_pattern,
    STATE(141), 1,
      sym__decimal_number,
    STATE(211), 1,
      sym__real_d,
    ACTIONS(325), 2,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
    ACTIONS(327), 2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
    ACTIONS(333), 2,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(313), 3,
      aux_sym__pattern_token1,
      sym_boolean,
      sym_character,
    STATE(144), 3,
      sym__pattern,
      sym_string,
      sym_number,
    STATE(152), 4,
      sym_binary_number,
      sym_octal_number,
      sym_decimal_number,
      sym_hexadecimal_number,
  [1966] = 16,
    ACTIONS(15), 1,
      sym_infnan,
    ACTIONS(17), 1,
      sym__infnan_immediate,
    ACTIONS(29), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      aux_sym__real_d_token1,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(315), 1,
      anon_sym_POUND,
    ACTIONS(337), 1,
      aux_sym_binary_number_token1,
    STATE(117), 1,
      sym__decimal_number,
    STATE(212), 1,
      sym__real_d,
    ACTIONS(23), 2,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
    ACTIONS(27), 2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
    ACTIONS(167), 2,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(335), 3,
      aux_sym__pattern_token1,
      sym_boolean,
      sym_character,
    STATE(258), 3,
      sym__pattern,
      sym_string,
      sym_number,
    STATE(118), 4,
      sym_binary_number,
      sym_octal_number,
      sym_decimal_number,
      sym_hexadecimal_number,
  [2025] = 3,
    ACTIONS(343), 1,
      anon_sym_i2,
    ACTIONS(339), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      sym__infnan_immediate,
    ACTIONS(341), 21,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      anon_sym_i,
      anon_sym_PLUSi,
      anon_sym_DASHi,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      anon_sym_AT,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
      aux_sym__real_x_token1,
  [2058] = 3,
    ACTIONS(349), 1,
      anon_sym_i2,
    ACTIONS(345), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      sym__infnan_immediate,
    ACTIONS(347), 21,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      anon_sym_i,
      anon_sym_PLUSi,
      anon_sym_DASHi,
      aux_sym_binary_number_token2,
      aux_sym__real_b_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [2091] = 7,
    ACTIONS(355), 1,
      sym__infnan_immediate,
    ACTIONS(357), 1,
      anon_sym_AT,
    ACTIONS(359), 1,
      aux_sym__real_x_token1,
    STATE(54), 1,
      sym__real_x,
    ACTIONS(343), 3,
      anon_sym_i,
      anon_sym_PLUSi,
      anon_sym_DASHi,
    ACTIONS(351), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(353), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [2132] = 16,
    ACTIONS(15), 1,
      sym_infnan,
    ACTIONS(17), 1,
      sym__infnan_immediate,
    ACTIONS(29), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      aux_sym__real_d_token1,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(315), 1,
      anon_sym_POUND,
    ACTIONS(337), 1,
      aux_sym_binary_number_token1,
    STATE(117), 1,
      sym__decimal_number,
    STATE(212), 1,
      sym__real_d,
    ACTIONS(23), 2,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
    ACTIONS(27), 2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
    ACTIONS(167), 2,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(361), 3,
      aux_sym__pattern_token1,
      sym_boolean,
      sym_character,
    STATE(250), 3,
      sym__pattern,
      sym_string,
      sym_number,
    STATE(118), 4,
      sym_binary_number,
      sym_octal_number,
      sym_decimal_number,
      sym_hexadecimal_number,
  [2191] = 7,
    ACTIONS(367), 1,
      sym__infnan_immediate,
    ACTIONS(369), 1,
      aux_sym_binary_number_token2,
    ACTIONS(371), 1,
      aux_sym__real_b_token1,
    STATE(50), 1,
      sym__real_b,
    ACTIONS(349), 3,
      anon_sym_i,
      anon_sym_PLUSi,
      anon_sym_DASHi,
    ACTIONS(363), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(365), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [2232] = 16,
    ACTIONS(15), 1,
      sym_infnan,
    ACTIONS(17), 1,
      sym__infnan_immediate,
    ACTIONS(29), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      aux_sym__real_d_token1,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(315), 1,
      anon_sym_POUND,
    ACTIONS(337), 1,
      aux_sym_binary_number_token1,
    STATE(117), 1,
      sym__decimal_number,
    STATE(212), 1,
      sym__real_d,
    ACTIONS(23), 2,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
    ACTIONS(27), 2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
    ACTIONS(167), 2,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(373), 3,
      aux_sym__pattern_token1,
      sym_boolean,
      sym_character,
    STATE(268), 3,
      sym__pattern,
      sym_string,
      sym_number,
    STATE(118), 4,
      sym_binary_number,
      sym_octal_number,
      sym_decimal_number,
      sym_hexadecimal_number,
  [2291] = 3,
    ACTIONS(375), 1,
      anon_sym_i2,
    ACTIONS(347), 11,
      sym__identifier,
      sym_infnan,
      anon_sym_i,
      anon_sym_PLUSi,
      anon_sym_DASHi,
      aux_sym__real_b_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(345), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_binary_number_token2,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym_hexadecimal_number_token1,
  [2323] = 7,
    ACTIONS(377), 1,
      sym__infnan_immediate,
    ACTIONS(379), 1,
      aux_sym_binary_number_token2,
    ACTIONS(381), 1,
      aux_sym__real_b_token1,
    STATE(58), 1,
      sym__real_b,
    ACTIONS(375), 3,
      anon_sym_i,
      anon_sym_PLUSi,
      anon_sym_DASHi,
    ACTIONS(365), 7,
      sym__identifier,
      sym_infnan,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(363), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym_hexadecimal_number_token1,
  [2363] = 3,
    ACTIONS(383), 1,
      anon_sym_i2,
    ACTIONS(341), 11,
      sym__identifier,
      sym_infnan,
      anon_sym_i,
      anon_sym_PLUSi,
      anon_sym_DASHi,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token2,
      aux_sym__real_x_token1,
    ACTIONS(339), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      anon_sym_AT,
      aux_sym_decimal_number_token1,
      aux_sym_hexadecimal_number_token1,
  [2395] = 7,
    ACTIONS(385), 1,
      sym__infnan_immediate,
    ACTIONS(387), 1,
      anon_sym_AT,
    ACTIONS(389), 1,
      aux_sym__real_x_token1,
    STATE(64), 1,
      sym__real_x,
    ACTIONS(383), 3,
      anon_sym_i,
      anon_sym_PLUSi,
      anon_sym_DASHi,
    ACTIONS(353), 7,
      sym__identifier,
      sym_infnan,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(351), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym_hexadecimal_number_token1,
  [2435] = 7,
    ACTIONS(391), 1,
      sym__infnan_immediate,
    ACTIONS(395), 1,
      anon_sym_AT,
    ACTIONS(397), 1,
      aux_sym__real_x_token1,
    STATE(80), 1,
      sym__real_x,
    ACTIONS(351), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(393), 3,
      anon_sym_i,
      anon_sym_PLUSi,
      anon_sym_DASHi,
    ACTIONS(353), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [2475] = 3,
    ACTIONS(393), 1,
      anon_sym_i2,
    ACTIONS(339), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__infnan_immediate,
    ACTIONS(341), 21,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      anon_sym_i,
      anon_sym_PLUSi,
      anon_sym_DASHi,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      anon_sym_AT,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
      aux_sym__real_x_token1,
  [2507] = 3,
    ACTIONS(399), 1,
      anon_sym_i2,
    ACTIONS(345), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__infnan_immediate,
    ACTIONS(347), 21,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      anon_sym_i,
      anon_sym_PLUSi,
      anon_sym_DASHi,
      aux_sym_binary_number_token2,
      aux_sym__real_b_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [2539] = 7,
    ACTIONS(401), 1,
      sym__infnan_immediate,
    ACTIONS(403), 1,
      aux_sym_binary_number_token2,
    ACTIONS(405), 1,
      aux_sym__real_b_token1,
    STATE(72), 1,
      sym__real_b,
    ACTIONS(363), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(399), 3,
      anon_sym_i,
      anon_sym_PLUSi,
      anon_sym_DASHi,
    ACTIONS(365), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [2579] = 7,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(407), 1,
      sym__infnan_immediate,
    ACTIONS(411), 1,
      aux_sym_binary_number_token2,
    ACTIONS(413), 1,
      aux_sym__real_b_token1,
    STATE(129), 1,
      sym__real_b,
    ACTIONS(409), 3,
      anon_sym_i,
      anon_sym_PLUSi,
      anon_sym_DASHi,
    ACTIONS(365), 16,
      aux_sym__pattern_token1,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [2618] = 3,
    ACTIONS(409), 1,
      anon_sym_i2,
    ACTIONS(345), 2,
      anon_sym_LPAREN,
      sym__infnan_immediate,
    ACTIONS(347), 21,
      aux_sym__pattern_token1,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      anon_sym_i,
      anon_sym_PLUSi,
      anon_sym_DASHi,
      aux_sym_binary_number_token2,
      aux_sym__real_b_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [2649] = 7,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    ACTIONS(415), 1,
      sym__infnan_immediate,
    ACTIONS(419), 1,
      anon_sym_AT,
    ACTIONS(421), 1,
      aux_sym__real_x_token1,
    STATE(114), 1,
      sym__real_x,
    ACTIONS(417), 3,
      anon_sym_i,
      anon_sym_PLUSi,
      anon_sym_DASHi,
    ACTIONS(353), 16,
      aux_sym__pattern_token1,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [2688] = 3,
    ACTIONS(417), 1,
      anon_sym_i2,
    ACTIONS(339), 2,
      anon_sym_LPAREN,
      sym__infnan_immediate,
    ACTIONS(341), 21,
      aux_sym__pattern_token1,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      anon_sym_i,
      anon_sym_PLUSi,
      anon_sym_DASHi,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      anon_sym_AT,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
      aux_sym__real_x_token1,
  [2719] = 3,
    ACTIONS(423), 1,
      anon_sym_i2,
    ACTIONS(345), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      sym__infnan_immediate,
    ACTIONS(347), 17,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      anon_sym_i,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [2748] = 3,
    ACTIONS(425), 1,
      anon_sym_i2,
    ACTIONS(339), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      sym__infnan_immediate,
    ACTIONS(341), 17,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      anon_sym_i,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [2777] = 3,
    ACTIONS(423), 1,
      anon_sym_i,
    ACTIONS(427), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      sym__infnan_immediate,
    ACTIONS(429), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [2805] = 3,
    ACTIONS(431), 1,
      anon_sym_i2,
    ACTIONS(347), 7,
      sym__identifier,
      sym_infnan,
      anon_sym_i,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(345), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
  [2833] = 3,
    ACTIONS(433), 1,
      anon_sym_i2,
    ACTIONS(339), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__infnan_immediate,
    ACTIONS(341), 17,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      anon_sym_i,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [2861] = 3,
    ACTIONS(435), 1,
      anon_sym_i2,
    ACTIONS(345), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__infnan_immediate,
    ACTIONS(347), 17,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      anon_sym_i,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [2889] = 3,
    ACTIONS(425), 1,
      anon_sym_i,
    ACTIONS(437), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      sym__infnan_immediate,
    ACTIONS(439), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [2917] = 3,
    ACTIONS(441), 1,
      anon_sym_i2,
    ACTIONS(341), 7,
      sym__identifier,
      sym_infnan,
      anon_sym_i,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(339), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
  [2945] = 2,
    ACTIONS(443), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      sym__infnan_immediate,
    ACTIONS(445), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [2970] = 3,
    ACTIONS(447), 1,
      anon_sym_i2,
    ACTIONS(339), 2,
      anon_sym_LPAREN,
      sym__infnan_immediate,
    ACTIONS(341), 17,
      aux_sym__pattern_token1,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      anon_sym_i,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [2997] = 3,
    ACTIONS(431), 1,
      anon_sym_i,
    ACTIONS(429), 6,
      sym__identifier,
      sym_infnan,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(427), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
  [3024] = 2,
    ACTIONS(351), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      sym__infnan_immediate,
    ACTIONS(353), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [3049] = 2,
    ACTIONS(449), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      sym__infnan_immediate,
    ACTIONS(451), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [3074] = 2,
    ACTIONS(427), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      sym__infnan_immediate,
    ACTIONS(429), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [3099] = 3,
    ACTIONS(453), 1,
      anon_sym_i2,
    ACTIONS(345), 2,
      anon_sym_LPAREN,
      sym__infnan_immediate,
    ACTIONS(347), 17,
      aux_sym__pattern_token1,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      anon_sym_i,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [3126] = 2,
    ACTIONS(455), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      sym__infnan_immediate,
    ACTIONS(457), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [3151] = 3,
    ACTIONS(441), 1,
      anon_sym_i,
    ACTIONS(439), 6,
      sym__identifier,
      sym_infnan,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(437), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
  [3178] = 3,
    ACTIONS(463), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(459), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__infnan_immediate,
    ACTIONS(461), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [3205] = 2,
    ACTIONS(465), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      sym__infnan_immediate,
    ACTIONS(467), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [3230] = 2,
    ACTIONS(469), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      sym__infnan_immediate,
    ACTIONS(471), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [3255] = 2,
    ACTIONS(363), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      sym__infnan_immediate,
    ACTIONS(365), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [3280] = 2,
    ACTIONS(473), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      sym__infnan_immediate,
    ACTIONS(475), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [3305] = 2,
    ACTIONS(437), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      sym__infnan_immediate,
    ACTIONS(439), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [3330] = 2,
    ACTIONS(477), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      sym__infnan_immediate,
    ACTIONS(479), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [3355] = 3,
    ACTIONS(435), 1,
      anon_sym_i,
    ACTIONS(427), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__infnan_immediate,
    ACTIONS(429), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [3382] = 2,
    ACTIONS(481), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      sym__infnan_immediate,
    ACTIONS(483), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [3407] = 3,
    ACTIONS(485), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(459), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__infnan_immediate,
    ACTIONS(461), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [3434] = 3,
    ACTIONS(487), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(459), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__infnan_immediate,
    ACTIONS(461), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [3461] = 3,
    ACTIONS(489), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(459), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__infnan_immediate,
    ACTIONS(461), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [3488] = 2,
    ACTIONS(491), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      sym__infnan_immediate,
    ACTIONS(493), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [3513] = 3,
    ACTIONS(495), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(459), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__infnan_immediate,
    ACTIONS(461), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [3540] = 2,
    ACTIONS(497), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      sym__infnan_immediate,
    ACTIONS(499), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [3565] = 3,
    ACTIONS(433), 1,
      anon_sym_i,
    ACTIONS(437), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__infnan_immediate,
    ACTIONS(439), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [3592] = 2,
    ACTIONS(501), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      sym__infnan_immediate,
    ACTIONS(503), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [3617] = 2,
    ACTIONS(505), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      sym__infnan_immediate,
    ACTIONS(507), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [3642] = 3,
    ACTIONS(509), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(459), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__infnan_immediate,
    ACTIONS(461), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [3669] = 2,
    ACTIONS(511), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      sym__infnan_immediate,
    ACTIONS(513), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [3694] = 2,
    ACTIONS(515), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      sym__infnan_immediate,
    ACTIONS(517), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [3719] = 2,
    ACTIONS(519), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      sym__infnan_immediate,
    ACTIONS(521), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [3744] = 2,
    ACTIONS(515), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__infnan_immediate,
    ACTIONS(517), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [3768] = 2,
    ACTIONS(501), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__infnan_immediate,
    ACTIONS(503), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [3792] = 2,
    ACTIONS(365), 5,
      sym_infnan,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(363), 14,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
  [3816] = 2,
    ACTIONS(475), 5,
      sym_infnan,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(473), 14,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
  [3840] = 2,
    ACTIONS(479), 5,
      sym_infnan,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(477), 14,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
  [3864] = 2,
    ACTIONS(477), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__infnan_immediate,
    ACTIONS(479), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [3888] = 2,
    ACTIONS(473), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__infnan_immediate,
    ACTIONS(475), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [3912] = 2,
    ACTIONS(525), 5,
      sym_infnan,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(523), 14,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
  [3936] = 2,
    ACTIONS(363), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__infnan_immediate,
    ACTIONS(365), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [3960] = 2,
    ACTIONS(455), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__infnan_immediate,
    ACTIONS(457), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [3984] = 2,
    ACTIONS(353), 5,
      sym_infnan,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(351), 14,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
  [4008] = 2,
    ACTIONS(519), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__infnan_immediate,
    ACTIONS(521), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [4032] = 2,
    ACTIONS(529), 5,
      sym_infnan,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(527), 14,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
  [4056] = 2,
    ACTIONS(511), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__infnan_immediate,
    ACTIONS(513), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [4080] = 2,
    ACTIONS(469), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__infnan_immediate,
    ACTIONS(471), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [4104] = 2,
    ACTIONS(457), 5,
      sym_infnan,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(455), 14,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
  [4128] = 2,
    ACTIONS(465), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__infnan_immediate,
    ACTIONS(467), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [4152] = 2,
    ACTIONS(533), 5,
      sym_infnan,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(531), 14,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
  [4176] = 2,
    ACTIONS(481), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__infnan_immediate,
    ACTIONS(483), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [4200] = 2,
    ACTIONS(537), 5,
      sym_infnan,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(535), 14,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
  [4224] = 2,
    ACTIONS(451), 5,
      sym_infnan,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(449), 14,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
  [4248] = 2,
    ACTIONS(429), 5,
      sym_infnan,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(427), 14,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
  [4272] = 2,
    ACTIONS(449), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__infnan_immediate,
    ACTIONS(451), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [4296] = 2,
    ACTIONS(507), 5,
      sym_infnan,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(505), 14,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
  [4320] = 2,
    ACTIONS(503), 5,
      sym_infnan,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(501), 14,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
  [4344] = 2,
    ACTIONS(445), 5,
      sym_infnan,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(443), 14,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
  [4368] = 2,
    ACTIONS(499), 5,
      sym_infnan,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(497), 14,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
  [4392] = 3,
    ACTIONS(447), 1,
      anon_sym_i,
    ACTIONS(437), 2,
      anon_sym_LPAREN,
      sym__infnan_immediate,
    ACTIONS(439), 16,
      aux_sym__pattern_token1,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [4418] = 2,
    ACTIONS(505), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__infnan_immediate,
    ACTIONS(507), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [4442] = 2,
    ACTIONS(481), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__infnan_immediate,
    ACTIONS(483), 16,
      aux_sym__pattern_token1,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [4466] = 2,
    ACTIONS(521), 5,
      sym_infnan,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(519), 14,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
  [4490] = 2,
    ACTIONS(517), 5,
      sym_infnan,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(515), 14,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
  [4514] = 2,
    ACTIONS(541), 5,
      sym_infnan,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(539), 14,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
  [4538] = 2,
    ACTIONS(427), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__infnan_immediate,
    ACTIONS(429), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [4562] = 2,
    ACTIONS(351), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__infnan_immediate,
    ACTIONS(353), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [4586] = 2,
    ACTIONS(545), 5,
      sym_infnan,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(543), 14,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
  [4610] = 2,
    ACTIONS(443), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__infnan_immediate,
    ACTIONS(445), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [4634] = 2,
    ACTIONS(465), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__infnan_immediate,
    ACTIONS(467), 16,
      aux_sym__pattern_token1,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [4658] = 2,
    ACTIONS(437), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__infnan_immediate,
    ACTIONS(439), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [4682] = 2,
    ACTIONS(497), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__infnan_immediate,
    ACTIONS(499), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [4706] = 2,
    ACTIONS(493), 5,
      sym_infnan,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(491), 14,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
  [4730] = 2,
    ACTIONS(549), 5,
      sym_infnan,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(547), 14,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
  [4754] = 3,
    ACTIONS(453), 1,
      anon_sym_i,
    ACTIONS(427), 2,
      anon_sym_LPAREN,
      sym__infnan_immediate,
    ACTIONS(429), 16,
      aux_sym__pattern_token1,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [4780] = 2,
    ACTIONS(469), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__infnan_immediate,
    ACTIONS(471), 16,
      aux_sym__pattern_token1,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [4804] = 2,
    ACTIONS(491), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__infnan_immediate,
    ACTIONS(493), 16,
      aux_sym__pattern_token1,
      anon_sym_DOT,
      anon_sym_POUND,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [4828] = 2,
    ACTIONS(511), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__infnan_immediate,
    ACTIONS(513), 16,
      aux_sym__pattern_token1,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [4852] = 2,
    ACTIONS(439), 5,
      sym_infnan,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(437), 14,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
  [4876] = 2,
    ACTIONS(443), 2,
      anon_sym_LPAREN,
      sym__infnan_immediate,
    ACTIONS(445), 16,
      aux_sym__pattern_token1,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [4899] = 2,
    ACTIONS(553), 5,
      sym_infnan,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(551), 13,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
  [4922] = 2,
    ACTIONS(557), 5,
      sym_infnan,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(555), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
  [4945] = 2,
    ACTIONS(363), 2,
      anon_sym_LPAREN,
      sym__infnan_immediate,
    ACTIONS(365), 16,
      aux_sym__pattern_token1,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [4968] = 2,
    ACTIONS(561), 5,
      sym_infnan,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(559), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
  [4991] = 2,
    ACTIONS(473), 2,
      anon_sym_LPAREN,
      sym__infnan_immediate,
    ACTIONS(475), 16,
      aux_sym__pattern_token1,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [5014] = 2,
    ACTIONS(477), 2,
      anon_sym_LPAREN,
      sym__infnan_immediate,
    ACTIONS(479), 16,
      aux_sym__pattern_token1,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [5037] = 2,
    ACTIONS(519), 2,
      anon_sym_LPAREN,
      sym__infnan_immediate,
    ACTIONS(521), 16,
      aux_sym__pattern_token1,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [5060] = 2,
    ACTIONS(351), 2,
      anon_sym_LPAREN,
      sym__infnan_immediate,
    ACTIONS(353), 16,
      aux_sym__pattern_token1,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [5083] = 2,
    ACTIONS(565), 5,
      sym_infnan,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(563), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
  [5106] = 2,
    ACTIONS(567), 2,
      anon_sym_LPAREN,
      sym__infnan_immediate,
    ACTIONS(569), 16,
      aux_sym__pattern_token1,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [5129] = 2,
    ACTIONS(449), 2,
      anon_sym_LPAREN,
      sym__infnan_immediate,
    ACTIONS(451), 16,
      aux_sym__pattern_token1,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [5152] = 2,
    ACTIONS(427), 2,
      anon_sym_LPAREN,
      sym__infnan_immediate,
    ACTIONS(429), 16,
      aux_sym__pattern_token1,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [5175] = 2,
    ACTIONS(573), 5,
      sym_infnan,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(571), 13,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
  [5198] = 2,
    ACTIONS(577), 5,
      sym_infnan,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(575), 13,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
  [5221] = 2,
    ACTIONS(581), 5,
      sym_infnan,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(579), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
  [5244] = 2,
    ACTIONS(585), 5,
      sym_infnan,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(583), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
  [5267] = 2,
    ACTIONS(589), 5,
      sym_infnan,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(587), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
  [5290] = 2,
    ACTIONS(515), 2,
      anon_sym_LPAREN,
      sym__infnan_immediate,
    ACTIONS(517), 16,
      aux_sym__pattern_token1,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [5313] = 2,
    ACTIONS(437), 2,
      anon_sym_LPAREN,
      sym__infnan_immediate,
    ACTIONS(439), 16,
      aux_sym__pattern_token1,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [5336] = 2,
    ACTIONS(455), 2,
      anon_sym_LPAREN,
      sym__infnan_immediate,
    ACTIONS(457), 16,
      aux_sym__pattern_token1,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [5359] = 2,
    ACTIONS(491), 2,
      anon_sym_LPAREN,
      sym__infnan_immediate,
    ACTIONS(493), 16,
      aux_sym__pattern_token1,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [5382] = 2,
    ACTIONS(497), 2,
      anon_sym_LPAREN,
      sym__infnan_immediate,
    ACTIONS(499), 16,
      aux_sym__pattern_token1,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [5405] = 2,
    ACTIONS(501), 2,
      anon_sym_LPAREN,
      sym__infnan_immediate,
    ACTIONS(503), 16,
      aux_sym__pattern_token1,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [5428] = 2,
    ACTIONS(505), 2,
      anon_sym_LPAREN,
      sym__infnan_immediate,
    ACTIONS(507), 16,
      aux_sym__pattern_token1,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_infnan,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
      aux_sym_hexadecimal_number_token2,
  [5451] = 2,
    ACTIONS(593), 5,
      sym_infnan,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(591), 12,
      anon_sym_LPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
  [5473] = 2,
    ACTIONS(597), 5,
      sym_infnan,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(595), 12,
      anon_sym_LPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
  [5495] = 2,
    ACTIONS(601), 5,
      sym_infnan,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(599), 12,
      anon_sym_LPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
  [5517] = 2,
    ACTIONS(605), 5,
      sym_infnan,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token2,
      aux_sym__decimal_number_token1,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(603), 12,
      anon_sym_LPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym__infnan_immediate,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token1,
      aux_sym__real_d_token1,
      aux_sym_hexadecimal_number_token1,
  [5539] = 3,
    ACTIONS(607), 1,
      anon_sym_i2,
    ACTIONS(341), 3,
      anon_sym_i,
      anon_sym_PLUSi,
      anon_sym_DASHi,
    ACTIONS(339), 4,
      anon_sym_RPAREN,
      sym__infnan_immediate,
      anon_sym_AT,
      aux_sym__real_x_token1,
  [5554] = 7,
    ACTIONS(351), 1,
      anon_sym_RPAREN,
    ACTIONS(607), 1,
      anon_sym_i,
    ACTIONS(609), 1,
      sym__infnan_immediate,
    ACTIONS(611), 1,
      anon_sym_AT,
    ACTIONS(613), 1,
      aux_sym__real_x_token1,
    STATE(247), 1,
      sym__real_x,
    ACTIONS(383), 2,
      anon_sym_PLUSi,
      anon_sym_DASHi,
  [5577] = 7,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    ACTIONS(615), 1,
      sym__infnan_immediate,
    ACTIONS(617), 1,
      anon_sym_i,
    ACTIONS(619), 1,
      aux_sym_binary_number_token2,
    ACTIONS(621), 1,
      aux_sym__real_b_token1,
    STATE(243), 1,
      sym__real_b,
    ACTIONS(375), 2,
      anon_sym_PLUSi,
      anon_sym_DASHi,
  [5600] = 3,
    ACTIONS(617), 1,
      anon_sym_i2,
    ACTIONS(347), 3,
      anon_sym_i,
      anon_sym_PLUSi,
      anon_sym_DASHi,
    ACTIONS(345), 4,
      anon_sym_RPAREN,
      sym__infnan_immediate,
      aux_sym_binary_number_token2,
      aux_sym__real_b_token1,
  [5615] = 6,
    ACTIONS(623), 1,
      anon_sym_RPAREN,
    ACTIONS(625), 1,
      anon_sym_DOT,
    ACTIONS(627), 1,
      sym__identifier,
    STATE(200), 1,
      aux_sym_reserved_repeat1,
    STATE(225), 1,
      sym_identifier,
    STATE(274), 1,
      sym__rest_arguments,
  [5634] = 3,
    ACTIONS(631), 1,
      anon_sym_i2,
    ACTIONS(633), 1,
      aux_sym_octal_number_token3,
    ACTIONS(629), 3,
      sym__infnan_immediate,
      anon_sym_AT,
      sym__real_d_immediate,
  [5646] = 4,
    ACTIONS(635), 1,
      sym__infnan_immediate,
    ACTIONS(639), 1,
      aux_sym__real_x_token1,
    STATE(164), 1,
      sym__real_x,
    ACTIONS(637), 2,
      aux_sym_binary_number_token3,
      aux_sym_binary_number_token4,
  [5660] = 3,
    ACTIONS(633), 1,
      aux_sym_octal_number_token3,
    ACTIONS(641), 1,
      anon_sym_i2,
    ACTIONS(629), 3,
      sym__infnan_immediate,
      anon_sym_AT,
      sym__real_d_immediate,
  [5672] = 3,
    ACTIONS(645), 1,
      anon_sym_i2,
    ACTIONS(643), 2,
      sym__infnan_immediate,
      anon_sym_AT,
    ACTIONS(647), 2,
      aux_sym_octal_number_token3,
      aux_sym__real_o_token1,
  [5684] = 4,
    ACTIONS(649), 1,
      sym__infnan_immediate,
    ACTIONS(653), 1,
      aux_sym__real_x_token1,
    STATE(46), 1,
      sym__real_x,
    ACTIONS(651), 2,
      aux_sym_binary_number_token3,
      aux_sym_binary_number_token4,
  [5698] = 5,
    ACTIONS(183), 1,
      sym__infnan_immediate,
    ACTIONS(655), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(657), 1,
      aux_sym__real_d_token1,
    STATE(71), 1,
      sym__decimal_number,
    STATE(203), 1,
      sym__real_d,
  [5714] = 4,
    ACTIONS(659), 1,
      sym__infnan_immediate,
    ACTIONS(663), 1,
      aux_sym__real_o_token1,
    STATE(186), 1,
      sym__real_o,
    ACTIONS(661), 2,
      aux_sym_binary_number_token3,
      aux_sym_binary_number_token4,
  [5728] = 4,
    ACTIONS(665), 1,
      sym__infnan_immediate,
    ACTIONS(669), 1,
      aux_sym__real_b_token1,
    STATE(44), 1,
      sym__real_b,
    ACTIONS(667), 2,
      aux_sym_binary_number_token3,
      aux_sym_binary_number_token4,
  [5742] = 3,
    ACTIONS(633), 1,
      aux_sym_octal_number_token3,
    ACTIONS(671), 1,
      anon_sym_i2,
    ACTIONS(629), 3,
      sym__infnan_immediate,
      anon_sym_AT,
      sym__real_d_immediate,
  [5754] = 3,
    ACTIONS(673), 1,
      anon_sym_i2,
    ACTIONS(643), 2,
      sym__infnan_immediate,
      anon_sym_AT,
    ACTIONS(647), 2,
      aux_sym_octal_number_token3,
      aux_sym__real_o_token1,
  [5766] = 5,
    ACTIONS(675), 1,
      sym__infnan_immediate,
    ACTIONS(677), 1,
      aux_sym_octal_number_token3,
    ACTIONS(679), 1,
      anon_sym_AT,
    ACTIONS(681), 1,
      aux_sym__real_o_token1,
    STATE(267), 1,
      sym__real_o,
  [5782] = 5,
    ACTIONS(683), 1,
      sym__infnan_immediate,
    ACTIONS(685), 1,
      aux_sym_octal_number_token3,
    ACTIONS(687), 1,
      anon_sym_AT,
    ACTIONS(689), 1,
      aux_sym__real_o_token1,
    STATE(254), 1,
      sym__real_o,
  [5798] = 4,
    ACTIONS(691), 1,
      sym__infnan_immediate,
    ACTIONS(695), 1,
      aux_sym__real_b_token1,
    STATE(37), 1,
      sym__real_b,
    ACTIONS(693), 2,
      aux_sym_binary_number_token3,
      aux_sym_binary_number_token4,
  [5812] = 4,
    ACTIONS(697), 1,
      sym__infnan_immediate,
    ACTIONS(701), 1,
      aux_sym__real_o_token1,
    STATE(178), 1,
      sym__real_o,
    ACTIONS(699), 2,
      aux_sym_binary_number_token3,
      aux_sym_binary_number_token4,
  [5826] = 5,
    ACTIONS(17), 1,
      sym__infnan_immediate,
    ACTIONS(31), 1,
      aux_sym__real_d_token1,
    ACTIONS(703), 1,
      aux_sym__decimal_number_token1,
    STATE(91), 1,
      sym__decimal_number,
    STATE(212), 1,
      sym__real_d,
  [5842] = 3,
    ACTIONS(705), 1,
      anon_sym_i2,
    ACTIONS(643), 2,
      sym__infnan_immediate,
      anon_sym_AT,
    ACTIONS(647), 2,
      aux_sym_octal_number_token3,
      aux_sym__real_o_token1,
  [5854] = 4,
    ACTIONS(707), 1,
      sym__infnan_immediate,
    ACTIONS(711), 1,
      aux_sym__real_x_token1,
    STATE(40), 1,
      sym__real_x,
    ACTIONS(709), 2,
      aux_sym_binary_number_token3,
      aux_sym_binary_number_token4,
  [5868] = 4,
    ACTIONS(713), 1,
      sym__infnan_immediate,
    ACTIONS(717), 1,
      aux_sym__real_b_token1,
    STATE(43), 1,
      sym__real_b,
    ACTIONS(715), 2,
      aux_sym_binary_number_token3,
      aux_sym_binary_number_token4,
  [5882] = 5,
    ACTIONS(719), 1,
      sym__infnan_immediate,
    ACTIONS(721), 1,
      aux_sym_octal_number_token3,
    ACTIONS(723), 1,
      anon_sym_AT,
    ACTIONS(725), 1,
      aux_sym__real_o_token1,
    STATE(261), 1,
      sym__real_o,
  [5898] = 5,
    ACTIONS(321), 1,
      sym__infnan_immediate,
    ACTIONS(727), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(729), 1,
      aux_sym__real_d_token1,
    STATE(140), 1,
      sym__decimal_number,
    STATE(211), 1,
      sym__real_d,
  [5914] = 4,
    ACTIONS(731), 1,
      sym__infnan_immediate,
    ACTIONS(735), 1,
      aux_sym__real_o_token1,
    STATE(179), 1,
      sym__real_o,
    ACTIONS(733), 2,
      aux_sym_binary_number_token3,
      aux_sym_binary_number_token4,
  [5928] = 4,
    ACTIONS(737), 1,
      sym__infnan_immediate,
    ACTIONS(739), 1,
      aux_sym__real_b_token1,
    STATE(165), 1,
      sym__real_b,
    ACTIONS(693), 2,
      aux_sym_binary_number_token3,
      aux_sym_binary_number_token4,
  [5942] = 4,
    ACTIONS(741), 1,
      sym__infnan_immediate,
    ACTIONS(743), 1,
      aux_sym__real_x_token1,
    STATE(39), 1,
      sym__real_x,
    ACTIONS(637), 2,
      aux_sym_binary_number_token3,
      aux_sym_binary_number_token4,
  [5956] = 3,
    ACTIONS(633), 1,
      aux_sym_octal_number_token3,
    ACTIONS(745), 1,
      anon_sym_i2,
    ACTIONS(629), 3,
      sym__infnan_immediate,
      anon_sym_AT,
      sym__real_d_immediate,
  [5968] = 5,
    ACTIONS(747), 1,
      sym__infnan_immediate,
    ACTIONS(749), 1,
      aux_sym_octal_number_token3,
    ACTIONS(751), 1,
      anon_sym_AT,
    ACTIONS(753), 1,
      aux_sym__real_o_token1,
    STATE(284), 1,
      sym__real_o,
  [5984] = 4,
    ACTIONS(755), 1,
      sym__infnan_immediate,
    ACTIONS(759), 1,
      aux_sym__real_b_token1,
    STATE(34), 1,
      sym__real_b,
    ACTIONS(757), 2,
      aux_sym_binary_number_token3,
      aux_sym_binary_number_token4,
  [5998] = 3,
    ACTIONS(761), 1,
      anon_sym_i2,
    ACTIONS(643), 2,
      sym__infnan_immediate,
      anon_sym_AT,
    ACTIONS(647), 2,
      aux_sym_octal_number_token3,
      aux_sym__real_o_token1,
  [6010] = 4,
    ACTIONS(763), 1,
      sym__infnan_immediate,
    ACTIONS(767), 1,
      aux_sym__real_o_token1,
    STATE(192), 1,
      sym__real_o,
    ACTIONS(765), 2,
      aux_sym_binary_number_token3,
      aux_sym_binary_number_token4,
  [6024] = 5,
    ACTIONS(627), 1,
      sym__identifier,
    ACTIONS(769), 1,
      anon_sym_RPAREN,
    ACTIONS(771), 1,
      anon_sym_DOT,
    STATE(198), 1,
      aux_sym_reserved_repeat1,
    STATE(225), 1,
      sym_identifier,
  [6040] = 5,
    ACTIONS(773), 1,
      sym__infnan_immediate,
    ACTIONS(775), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(777), 1,
      aux_sym__real_d_token1,
    STATE(92), 1,
      sym__decimal_number,
    STATE(207), 1,
      sym__real_d,
  [6056] = 5,
    ACTIONS(779), 1,
      anon_sym_RPAREN,
    ACTIONS(781), 1,
      anon_sym_DOT,
    ACTIONS(783), 1,
      sym__identifier,
    STATE(198), 1,
      aux_sym_reserved_repeat1,
    STATE(225), 1,
      sym_identifier,
  [6072] = 4,
    ACTIONS(786), 1,
      sym__infnan_immediate,
    ACTIONS(790), 1,
      aux_sym__real_x_token1,
    STATE(32), 1,
      sym__real_x,
    ACTIONS(788), 2,
      aux_sym_binary_number_token3,
      aux_sym_binary_number_token4,
  [6086] = 5,
    ACTIONS(627), 1,
      sym__identifier,
    ACTIONS(792), 1,
      anon_sym_RPAREN,
    ACTIONS(794), 1,
      anon_sym_DOT,
    STATE(198), 1,
      aux_sym_reserved_repeat1,
    STATE(225), 1,
      sym_identifier,
  [6102] = 3,
    ACTIONS(796), 1,
      anon_sym_LPAREN,
    ACTIONS(798), 1,
      anon_sym_RPAREN,
    STATE(209), 2,
      sym_syntax_rule,
      aux_sym_transformer_repeat1,
  [6113] = 4,
    ACTIONS(627), 1,
      sym__identifier,
    ACTIONS(800), 1,
      anon_sym_RPAREN,
    STATE(196), 1,
      aux_sym_reserved_repeat1,
    STATE(225), 1,
      sym_identifier,
  [6126] = 4,
    ACTIONS(802), 1,
      sym__infnan_immediate,
    ACTIONS(804), 1,
      aux_sym_octal_number_token3,
    ACTIONS(806), 1,
      anon_sym_AT,
    ACTIONS(808), 1,
      sym__real_d_immediate,
  [6139] = 4,
    ACTIONS(810), 1,
      anon_sym_RPAREN,
    ACTIONS(812), 1,
      sym__identifier,
    STATE(210), 1,
      aux_sym_reserved_repeat1,
    STATE(225), 1,
      sym_identifier,
  [6152] = 4,
    ACTIONS(814), 1,
      anon_sym_LPAREN,
    ACTIONS(816), 1,
      sym__identifier,
    STATE(7), 1,
      sym_arguments,
    STATE(160), 1,
      sym_vararg_identifier,
  [6165] = 4,
    ACTIONS(818), 1,
      anon_sym_define_DASHsyntax,
    ACTIONS(820), 1,
      anon_sym_define,
    ACTIONS(822), 1,
      anon_sym_lambda,
    ACTIONS(824), 1,
      aux_sym_procedure_call_token1,
  [6178] = 4,
    ACTIONS(826), 1,
      sym__infnan_immediate,
    ACTIONS(828), 1,
      aux_sym_octal_number_token3,
    ACTIONS(830), 1,
      anon_sym_AT,
    ACTIONS(832), 1,
      sym__real_d_immediate,
  [6191] = 4,
    ACTIONS(779), 1,
      anon_sym_RPAREN,
    ACTIONS(834), 1,
      sym__identifier,
    STATE(208), 1,
      aux_sym_reserved_repeat1,
    STATE(225), 1,
      sym_identifier,
  [6204] = 3,
    ACTIONS(837), 1,
      anon_sym_LPAREN,
    ACTIONS(840), 1,
      anon_sym_RPAREN,
    STATE(209), 2,
      sym_syntax_rule,
      aux_sym_transformer_repeat1,
  [6215] = 4,
    ACTIONS(812), 1,
      sym__identifier,
    ACTIONS(842), 1,
      anon_sym_RPAREN,
    STATE(208), 1,
      aux_sym_reserved_repeat1,
    STATE(225), 1,
      sym_identifier,
  [6228] = 4,
    ACTIONS(844), 1,
      sym__infnan_immediate,
    ACTIONS(846), 1,
      aux_sym_octal_number_token3,
    ACTIONS(848), 1,
      anon_sym_AT,
    ACTIONS(850), 1,
      sym__real_d_immediate,
  [6241] = 4,
    ACTIONS(852), 1,
      sym__infnan_immediate,
    ACTIONS(854), 1,
      aux_sym_octal_number_token3,
    ACTIONS(856), 1,
      anon_sym_AT,
    ACTIONS(858), 1,
      sym__real_d_immediate,
  [6254] = 2,
    STATE(157), 1,
      sym__real_o,
    ACTIONS(860), 2,
      sym__infnan_immediate,
      aux_sym__real_o_token1,
  [6262] = 2,
    ACTIONS(573), 1,
      anon_sym_DOT,
    ACTIONS(571), 2,
      anon_sym_RPAREN,
      sym__identifier,
  [6270] = 2,
    ACTIONS(796), 1,
      anon_sym_LPAREN,
    STATE(201), 2,
      sym_syntax_rule,
      aux_sym_transformer_repeat1,
  [6278] = 2,
    STATE(113), 1,
      sym__real_b,
    ACTIONS(862), 2,
      sym__infnan_immediate,
      aux_sym__real_b_token1,
  [6286] = 2,
    STATE(110), 1,
      sym__real_x,
    ACTIONS(864), 2,
      sym__infnan_immediate,
      aux_sym__real_x_token1,
  [6294] = 3,
    ACTIONS(339), 1,
      anon_sym_RPAREN,
    ACTIONS(341), 1,
      anon_sym_i,
    ACTIONS(864), 1,
      anon_sym_i2,
  [6304] = 2,
    STATE(88), 1,
      sym__real_o,
    ACTIONS(866), 2,
      sym__infnan_immediate,
      aux_sym__real_o_token1,
  [6312] = 3,
    ACTIONS(345), 1,
      anon_sym_RPAREN,
    ACTIONS(347), 1,
      anon_sym_i,
    ACTIONS(862), 1,
      anon_sym_i2,
  [6322] = 2,
    STATE(82), 1,
      sym__real_x,
    ACTIONS(868), 2,
      sym__infnan_immediate,
      aux_sym__real_x_token1,
  [6330] = 2,
    STATE(81), 1,
      sym__real_o,
    ACTIONS(870), 2,
      sym__infnan_immediate,
      aux_sym__real_o_token1,
  [6338] = 2,
    STATE(113), 1,
      sym__real_b,
    ACTIONS(862), 2,
      sym__infnan_immediate,
      aux_sym__real_b_token1,
  [6346] = 3,
    ACTIONS(812), 1,
      sym__identifier,
    ACTIONS(872), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_identifier,
  [6356] = 2,
    ACTIONS(876), 1,
      anon_sym_DOT,
    ACTIONS(874), 2,
      anon_sym_RPAREN,
      sym__identifier,
  [6364] = 2,
    STATE(115), 1,
      sym__real_x,
    ACTIONS(878), 2,
      sym__infnan_immediate,
      aux_sym__real_x_token1,
  [6372] = 2,
    STATE(111), 1,
      sym__real_o,
    ACTIONS(880), 2,
      sym__infnan_immediate,
      aux_sym__real_o_token1,
  [6380] = 2,
    STATE(158), 1,
      sym__real_x,
    ACTIONS(882), 2,
      sym__infnan_immediate,
      aux_sym__real_x_token1,
  [6388] = 2,
    STATE(110), 1,
      sym__real_x,
    ACTIONS(864), 2,
      sym__infnan_immediate,
      aux_sym__real_x_token1,
  [6396] = 2,
    STATE(156), 1,
      sym__real_b,
    ACTIONS(884), 2,
      sym__infnan_immediate,
      aux_sym__real_b_token1,
  [6404] = 2,
    STATE(79), 1,
      sym__real_b,
    ACTIONS(886), 2,
      sym__infnan_immediate,
      aux_sym__real_b_token1,
  [6412] = 2,
    STATE(126), 1,
      sym__real_b,
    ACTIONS(888), 2,
      sym__infnan_immediate,
      aux_sym__real_b_token1,
  [6420] = 1,
    ACTIONS(890), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6425] = 2,
    ACTIONS(647), 1,
      aux_sym_octal_number_token4,
    ACTIONS(860), 1,
      anon_sym_i2,
  [6432] = 2,
    ACTIONS(816), 1,
      sym__identifier,
    STATE(277), 1,
      sym_vararg_identifier,
  [6439] = 2,
    ACTIONS(647), 1,
      aux_sym_octal_number_token4,
    ACTIONS(870), 1,
      anon_sym_i2,
  [6446] = 2,
    ACTIONS(816), 1,
      sym__identifier,
    STATE(285), 1,
      sym_vararg_identifier,
  [6453] = 2,
    ACTIONS(892), 1,
      anon_sym_LPAREN,
    STATE(215), 1,
      sym_reserved,
  [6460] = 2,
    ACTIONS(894), 1,
      anon_sym_LPAREN,
    STATE(270), 1,
      sym_transformer,
  [6467] = 2,
    ACTIONS(647), 1,
      aux_sym_octal_number_token4,
    ACTIONS(880), 1,
      anon_sym_i2,
  [6474] = 2,
    ACTIONS(812), 1,
      sym__identifier,
    STATE(239), 1,
      sym_identifier,
  [6481] = 2,
    ACTIONS(816), 1,
      sym__identifier,
    STATE(281), 1,
      sym_vararg_identifier,
  [6488] = 2,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    ACTIONS(862), 1,
      anon_sym_i,
  [6495] = 2,
    ACTIONS(627), 1,
      sym__identifier,
    STATE(167), 1,
      sym_identifier,
  [6502] = 2,
    ACTIONS(822), 1,
      anon_sym_lambda,
    ACTIONS(824), 1,
      aux_sym_procedure_call_token1,
  [6509] = 2,
    ACTIONS(647), 1,
      aux_sym_octal_number_token4,
    ACTIONS(866), 1,
      anon_sym_i2,
  [6516] = 2,
    ACTIONS(437), 1,
      anon_sym_RPAREN,
    ACTIONS(864), 1,
      anon_sym_i,
  [6523] = 1,
    ACTIONS(896), 1,
      sym__real_d_immediate,
  [6527] = 1,
    ACTIONS(896), 1,
      aux_sym_octal_number_token4,
  [6531] = 1,
    ACTIONS(898), 1,
      anon_sym_RPAREN,
  [6535] = 1,
    ACTIONS(900), 1,
      anon_sym_DQUOTE,
  [6539] = 1,
    ACTIONS(902), 1,
      anon_sym_DQUOTE,
  [6543] = 1,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
  [6547] = 1,
    ACTIONS(860), 1,
      aux_sym_octal_number_token4,
  [6551] = 1,
    ACTIONS(904), 1,
      anon_sym_i2,
  [6555] = 1,
    ACTIONS(904), 1,
      sym__real_d_immediate,
  [6559] = 1,
    ACTIONS(904), 1,
      aux_sym_octal_number_token4,
  [6563] = 1,
    ACTIONS(906), 1,
      anon_sym_RPAREN,
  [6567] = 1,
    ACTIONS(896), 1,
      anon_sym_i2,
  [6571] = 1,
    ACTIONS(908), 1,
      anon_sym_DQUOTE,
  [6575] = 1,
    ACTIONS(870), 1,
      aux_sym_octal_number_token4,
  [6579] = 1,
    ACTIONS(910), 1,
      anon_sym_i2,
  [6583] = 1,
    ACTIONS(910), 1,
      sym__real_d_immediate,
  [6587] = 1,
    ACTIONS(910), 1,
      aux_sym_octal_number_token4,
  [6591] = 1,
    ACTIONS(912), 1,
      ts_builtin_sym_end,
  [6595] = 1,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
  [6599] = 1,
    ACTIONS(880), 1,
      aux_sym_octal_number_token4,
  [6603] = 1,
    ACTIONS(914), 1,
      anon_sym_RPAREN,
  [6607] = 1,
    ACTIONS(916), 1,
      anon_sym_syntax_DASHrules,
  [6611] = 1,
    ACTIONS(918), 1,
      anon_sym_RPAREN,
  [6615] = 1,
    ACTIONS(920), 1,
      anon_sym_RPAREN,
  [6619] = 1,
    ACTIONS(922), 1,
      anon_sym_RPAREN,
  [6623] = 1,
    ACTIONS(924), 1,
      anon_sym_RPAREN,
  [6627] = 1,
    ACTIONS(792), 1,
      anon_sym_RPAREN,
  [6631] = 1,
    ACTIONS(926), 1,
      anon_sym_DQUOTE,
  [6635] = 1,
    ACTIONS(928), 1,
      anon_sym_RPAREN,
  [6639] = 1,
    ACTIONS(930), 1,
      anon_sym_RPAREN,
  [6643] = 1,
    ACTIONS(932), 1,
      anon_sym_i2,
  [6647] = 1,
    ACTIONS(932), 1,
      sym__real_d_immediate,
  [6651] = 1,
    ACTIONS(932), 1,
      aux_sym_octal_number_token4,
  [6655] = 1,
    ACTIONS(934), 1,
      anon_sym_RPAREN,
  [6659] = 1,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
  [6663] = 1,
    ACTIONS(938), 1,
      anon_sym_RPAREN,
  [6667] = 1,
    ACTIONS(866), 1,
      aux_sym_octal_number_token4,
  [6671] = 1,
    ACTIONS(940), 1,
      anon_sym_RPAREN,
  [6675] = 1,
    ACTIONS(942), 1,
      anon_sym_LPAREN,
  [6679] = 1,
    ACTIONS(944), 1,
      anon_sym_LPAREN,
  [6683] = 1,
    ACTIONS(946), 1,
      sym_character,
  [6687] = 1,
    ACTIONS(948), 1,
      anon_sym_LPAREN,
  [6691] = 1,
    ACTIONS(950), 1,
      anon_sym_RPAREN,
  [6695] = 1,
    ACTIONS(952), 1,
      anon_sym_RPAREN,
  [6699] = 1,
    ACTIONS(954), 1,
      anon_sym_RPAREN,
  [6703] = 1,
    ACTIONS(956), 1,
      sym_character,
  [6707] = 1,
    ACTIONS(958), 1,
      anon_sym_LPAREN,
  [6711] = 1,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
  [6715] = 1,
    ACTIONS(960), 1,
      sym_character,
  [6719] = 1,
    ACTIONS(962), 1,
      sym__identifier,
  [6723] = 1,
    ACTIONS(964), 1,
      sym_character,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 88,
  [SMALL_STATE(4)] = 176,
  [SMALL_STATE(5)] = 259,
  [SMALL_STATE(6)] = 342,
  [SMALL_STATE(7)] = 425,
  [SMALL_STATE(8)] = 508,
  [SMALL_STATE(9)] = 591,
  [SMALL_STATE(10)] = 674,
  [SMALL_STATE(11)] = 757,
  [SMALL_STATE(12)] = 840,
  [SMALL_STATE(13)] = 923,
  [SMALL_STATE(14)] = 998,
  [SMALL_STATE(15)] = 1066,
  [SMALL_STATE(16)] = 1132,
  [SMALL_STATE(17)] = 1200,
  [SMALL_STATE(18)] = 1268,
  [SMALL_STATE(19)] = 1331,
  [SMALL_STATE(20)] = 1394,
  [SMALL_STATE(21)] = 1457,
  [SMALL_STATE(22)] = 1520,
  [SMALL_STATE(23)] = 1583,
  [SMALL_STATE(24)] = 1648,
  [SMALL_STATE(25)] = 1713,
  [SMALL_STATE(26)] = 1778,
  [SMALL_STATE(27)] = 1841,
  [SMALL_STATE(28)] = 1904,
  [SMALL_STATE(29)] = 1966,
  [SMALL_STATE(30)] = 2025,
  [SMALL_STATE(31)] = 2058,
  [SMALL_STATE(32)] = 2091,
  [SMALL_STATE(33)] = 2132,
  [SMALL_STATE(34)] = 2191,
  [SMALL_STATE(35)] = 2232,
  [SMALL_STATE(36)] = 2291,
  [SMALL_STATE(37)] = 2323,
  [SMALL_STATE(38)] = 2363,
  [SMALL_STATE(39)] = 2395,
  [SMALL_STATE(40)] = 2435,
  [SMALL_STATE(41)] = 2475,
  [SMALL_STATE(42)] = 2507,
  [SMALL_STATE(43)] = 2539,
  [SMALL_STATE(44)] = 2579,
  [SMALL_STATE(45)] = 2618,
  [SMALL_STATE(46)] = 2649,
  [SMALL_STATE(47)] = 2688,
  [SMALL_STATE(48)] = 2719,
  [SMALL_STATE(49)] = 2748,
  [SMALL_STATE(50)] = 2777,
  [SMALL_STATE(51)] = 2805,
  [SMALL_STATE(52)] = 2833,
  [SMALL_STATE(53)] = 2861,
  [SMALL_STATE(54)] = 2889,
  [SMALL_STATE(55)] = 2917,
  [SMALL_STATE(56)] = 2945,
  [SMALL_STATE(57)] = 2970,
  [SMALL_STATE(58)] = 2997,
  [SMALL_STATE(59)] = 3024,
  [SMALL_STATE(60)] = 3049,
  [SMALL_STATE(61)] = 3074,
  [SMALL_STATE(62)] = 3099,
  [SMALL_STATE(63)] = 3126,
  [SMALL_STATE(64)] = 3151,
  [SMALL_STATE(65)] = 3178,
  [SMALL_STATE(66)] = 3205,
  [SMALL_STATE(67)] = 3230,
  [SMALL_STATE(68)] = 3255,
  [SMALL_STATE(69)] = 3280,
  [SMALL_STATE(70)] = 3305,
  [SMALL_STATE(71)] = 3330,
  [SMALL_STATE(72)] = 3355,
  [SMALL_STATE(73)] = 3382,
  [SMALL_STATE(74)] = 3407,
  [SMALL_STATE(75)] = 3434,
  [SMALL_STATE(76)] = 3461,
  [SMALL_STATE(77)] = 3488,
  [SMALL_STATE(78)] = 3513,
  [SMALL_STATE(79)] = 3540,
  [SMALL_STATE(80)] = 3565,
  [SMALL_STATE(81)] = 3592,
  [SMALL_STATE(82)] = 3617,
  [SMALL_STATE(83)] = 3642,
  [SMALL_STATE(84)] = 3669,
  [SMALL_STATE(85)] = 3694,
  [SMALL_STATE(86)] = 3719,
  [SMALL_STATE(87)] = 3744,
  [SMALL_STATE(88)] = 3768,
  [SMALL_STATE(89)] = 3792,
  [SMALL_STATE(90)] = 3816,
  [SMALL_STATE(91)] = 3840,
  [SMALL_STATE(92)] = 3864,
  [SMALL_STATE(93)] = 3888,
  [SMALL_STATE(94)] = 3912,
  [SMALL_STATE(95)] = 3936,
  [SMALL_STATE(96)] = 3960,
  [SMALL_STATE(97)] = 3984,
  [SMALL_STATE(98)] = 4008,
  [SMALL_STATE(99)] = 4032,
  [SMALL_STATE(100)] = 4056,
  [SMALL_STATE(101)] = 4080,
  [SMALL_STATE(102)] = 4104,
  [SMALL_STATE(103)] = 4128,
  [SMALL_STATE(104)] = 4152,
  [SMALL_STATE(105)] = 4176,
  [SMALL_STATE(106)] = 4200,
  [SMALL_STATE(107)] = 4224,
  [SMALL_STATE(108)] = 4248,
  [SMALL_STATE(109)] = 4272,
  [SMALL_STATE(110)] = 4296,
  [SMALL_STATE(111)] = 4320,
  [SMALL_STATE(112)] = 4344,
  [SMALL_STATE(113)] = 4368,
  [SMALL_STATE(114)] = 4392,
  [SMALL_STATE(115)] = 4418,
  [SMALL_STATE(116)] = 4442,
  [SMALL_STATE(117)] = 4466,
  [SMALL_STATE(118)] = 4490,
  [SMALL_STATE(119)] = 4514,
  [SMALL_STATE(120)] = 4538,
  [SMALL_STATE(121)] = 4562,
  [SMALL_STATE(122)] = 4586,
  [SMALL_STATE(123)] = 4610,
  [SMALL_STATE(124)] = 4634,
  [SMALL_STATE(125)] = 4658,
  [SMALL_STATE(126)] = 4682,
  [SMALL_STATE(127)] = 4706,
  [SMALL_STATE(128)] = 4730,
  [SMALL_STATE(129)] = 4754,
  [SMALL_STATE(130)] = 4780,
  [SMALL_STATE(131)] = 4804,
  [SMALL_STATE(132)] = 4828,
  [SMALL_STATE(133)] = 4852,
  [SMALL_STATE(134)] = 4876,
  [SMALL_STATE(135)] = 4899,
  [SMALL_STATE(136)] = 4922,
  [SMALL_STATE(137)] = 4945,
  [SMALL_STATE(138)] = 4968,
  [SMALL_STATE(139)] = 4991,
  [SMALL_STATE(140)] = 5014,
  [SMALL_STATE(141)] = 5037,
  [SMALL_STATE(142)] = 5060,
  [SMALL_STATE(143)] = 5083,
  [SMALL_STATE(144)] = 5106,
  [SMALL_STATE(145)] = 5129,
  [SMALL_STATE(146)] = 5152,
  [SMALL_STATE(147)] = 5175,
  [SMALL_STATE(148)] = 5198,
  [SMALL_STATE(149)] = 5221,
  [SMALL_STATE(150)] = 5244,
  [SMALL_STATE(151)] = 5267,
  [SMALL_STATE(152)] = 5290,
  [SMALL_STATE(153)] = 5313,
  [SMALL_STATE(154)] = 5336,
  [SMALL_STATE(155)] = 5359,
  [SMALL_STATE(156)] = 5382,
  [SMALL_STATE(157)] = 5405,
  [SMALL_STATE(158)] = 5428,
  [SMALL_STATE(159)] = 5451,
  [SMALL_STATE(160)] = 5473,
  [SMALL_STATE(161)] = 5495,
  [SMALL_STATE(162)] = 5517,
  [SMALL_STATE(163)] = 5539,
  [SMALL_STATE(164)] = 5554,
  [SMALL_STATE(165)] = 5577,
  [SMALL_STATE(166)] = 5600,
  [SMALL_STATE(167)] = 5615,
  [SMALL_STATE(168)] = 5634,
  [SMALL_STATE(169)] = 5646,
  [SMALL_STATE(170)] = 5660,
  [SMALL_STATE(171)] = 5672,
  [SMALL_STATE(172)] = 5684,
  [SMALL_STATE(173)] = 5698,
  [SMALL_STATE(174)] = 5714,
  [SMALL_STATE(175)] = 5728,
  [SMALL_STATE(176)] = 5742,
  [SMALL_STATE(177)] = 5754,
  [SMALL_STATE(178)] = 5766,
  [SMALL_STATE(179)] = 5782,
  [SMALL_STATE(180)] = 5798,
  [SMALL_STATE(181)] = 5812,
  [SMALL_STATE(182)] = 5826,
  [SMALL_STATE(183)] = 5842,
  [SMALL_STATE(184)] = 5854,
  [SMALL_STATE(185)] = 5868,
  [SMALL_STATE(186)] = 5882,
  [SMALL_STATE(187)] = 5898,
  [SMALL_STATE(188)] = 5914,
  [SMALL_STATE(189)] = 5928,
  [SMALL_STATE(190)] = 5942,
  [SMALL_STATE(191)] = 5956,
  [SMALL_STATE(192)] = 5968,
  [SMALL_STATE(193)] = 5984,
  [SMALL_STATE(194)] = 5998,
  [SMALL_STATE(195)] = 6010,
  [SMALL_STATE(196)] = 6024,
  [SMALL_STATE(197)] = 6040,
  [SMALL_STATE(198)] = 6056,
  [SMALL_STATE(199)] = 6072,
  [SMALL_STATE(200)] = 6086,
  [SMALL_STATE(201)] = 6102,
  [SMALL_STATE(202)] = 6113,
  [SMALL_STATE(203)] = 6126,
  [SMALL_STATE(204)] = 6139,
  [SMALL_STATE(205)] = 6152,
  [SMALL_STATE(206)] = 6165,
  [SMALL_STATE(207)] = 6178,
  [SMALL_STATE(208)] = 6191,
  [SMALL_STATE(209)] = 6204,
  [SMALL_STATE(210)] = 6215,
  [SMALL_STATE(211)] = 6228,
  [SMALL_STATE(212)] = 6241,
  [SMALL_STATE(213)] = 6254,
  [SMALL_STATE(214)] = 6262,
  [SMALL_STATE(215)] = 6270,
  [SMALL_STATE(216)] = 6278,
  [SMALL_STATE(217)] = 6286,
  [SMALL_STATE(218)] = 6294,
  [SMALL_STATE(219)] = 6304,
  [SMALL_STATE(220)] = 6312,
  [SMALL_STATE(221)] = 6322,
  [SMALL_STATE(222)] = 6330,
  [SMALL_STATE(223)] = 6338,
  [SMALL_STATE(224)] = 6346,
  [SMALL_STATE(225)] = 6356,
  [SMALL_STATE(226)] = 6364,
  [SMALL_STATE(227)] = 6372,
  [SMALL_STATE(228)] = 6380,
  [SMALL_STATE(229)] = 6388,
  [SMALL_STATE(230)] = 6396,
  [SMALL_STATE(231)] = 6404,
  [SMALL_STATE(232)] = 6412,
  [SMALL_STATE(233)] = 6420,
  [SMALL_STATE(234)] = 6425,
  [SMALL_STATE(235)] = 6432,
  [SMALL_STATE(236)] = 6439,
  [SMALL_STATE(237)] = 6446,
  [SMALL_STATE(238)] = 6453,
  [SMALL_STATE(239)] = 6460,
  [SMALL_STATE(240)] = 6467,
  [SMALL_STATE(241)] = 6474,
  [SMALL_STATE(242)] = 6481,
  [SMALL_STATE(243)] = 6488,
  [SMALL_STATE(244)] = 6495,
  [SMALL_STATE(245)] = 6502,
  [SMALL_STATE(246)] = 6509,
  [SMALL_STATE(247)] = 6516,
  [SMALL_STATE(248)] = 6523,
  [SMALL_STATE(249)] = 6527,
  [SMALL_STATE(250)] = 6531,
  [SMALL_STATE(251)] = 6535,
  [SMALL_STATE(252)] = 6539,
  [SMALL_STATE(253)] = 6543,
  [SMALL_STATE(254)] = 6547,
  [SMALL_STATE(255)] = 6551,
  [SMALL_STATE(256)] = 6555,
  [SMALL_STATE(257)] = 6559,
  [SMALL_STATE(258)] = 6563,
  [SMALL_STATE(259)] = 6567,
  [SMALL_STATE(260)] = 6571,
  [SMALL_STATE(261)] = 6575,
  [SMALL_STATE(262)] = 6579,
  [SMALL_STATE(263)] = 6583,
  [SMALL_STATE(264)] = 6587,
  [SMALL_STATE(265)] = 6591,
  [SMALL_STATE(266)] = 6595,
  [SMALL_STATE(267)] = 6599,
  [SMALL_STATE(268)] = 6603,
  [SMALL_STATE(269)] = 6607,
  [SMALL_STATE(270)] = 6611,
  [SMALL_STATE(271)] = 6615,
  [SMALL_STATE(272)] = 6619,
  [SMALL_STATE(273)] = 6623,
  [SMALL_STATE(274)] = 6627,
  [SMALL_STATE(275)] = 6631,
  [SMALL_STATE(276)] = 6635,
  [SMALL_STATE(277)] = 6639,
  [SMALL_STATE(278)] = 6643,
  [SMALL_STATE(279)] = 6647,
  [SMALL_STATE(280)] = 6651,
  [SMALL_STATE(281)] = 6655,
  [SMALL_STATE(282)] = 6659,
  [SMALL_STATE(283)] = 6663,
  [SMALL_STATE(284)] = 6667,
  [SMALL_STATE(285)] = 6671,
  [SMALL_STATE(286)] = 6675,
  [SMALL_STATE(287)] = 6679,
  [SMALL_STATE(288)] = 6683,
  [SMALL_STATE(289)] = 6687,
  [SMALL_STATE(290)] = 6691,
  [SMALL_STATE(291)] = 6695,
  [SMALL_STATE(292)] = 6699,
  [SMALL_STATE(293)] = 6703,
  [SMALL_STATE(294)] = 6707,
  [SMALL_STATE(295)] = 6711,
  [SMALL_STATE(296)] = 6715,
  [SMALL_STATE(297)] = 6719,
  [SMALL_STATE(298)] = 6723,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(206),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(128),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(297),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(122),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(296),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(118),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(170),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(180),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(181),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(181),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(182),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(182),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(117),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(212),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(190),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(190),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(245),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(128),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(297),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(122),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(296),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(118),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(170),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(180),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(181),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(181),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(182),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(182),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(117),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(212),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(190),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(190),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pattern_repeat1, 2), SHIFT_REPEAT(24),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__pattern_repeat1, 2),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2), SHIFT_REPEAT(15),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2), SHIFT_REPEAT(294),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2), SHIFT_REPEAT(298),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2), SHIFT_REPEAT(87),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pattern_repeat1, 2), SHIFT_REPEAT(191),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2), SHIFT_REPEAT(185),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2), SHIFT_REPEAT(195),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2), SHIFT_REPEAT(197),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2), SHIFT_REPEAT(98),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2), SHIFT_REPEAT(207),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2), SHIFT_REPEAT(184),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pattern_repeat1, 2), SHIFT_REPEAT(25),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2), SHIFT_REPEAT(20),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2), SHIFT_REPEAT(289),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2), SHIFT_REPEAT(293),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2), SHIFT_REPEAT(85),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pattern_repeat1, 2), SHIFT_REPEAT(176),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2), SHIFT_REPEAT(193),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2), SHIFT_REPEAT(174),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2), SHIFT_REPEAT(173),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2), SHIFT_REPEAT(86),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2), SHIFT_REPEAT(203),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 2), SHIFT_REPEAT(199),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_x, 1),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_x, 1),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_b, 1),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_b, 1),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexadecimal_number, 2),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hexadecimal_number, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_number, 2),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_number, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_number, 3),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_number, 3),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexadecimal_number, 3),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hexadecimal_number, 3),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal_number, 3),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_octal_number, 3),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 2),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 2),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__pattern_repeat1, 1),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__pattern_repeat1, 1),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 3),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 4),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 4),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal_number, 2),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_octal_number, 2),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 2),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_number, 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 2),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 2),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 3),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 3),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_number, 4),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_number, 4),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal_number, 4),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_octal_number, 4),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexadecimal_number, 4),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hexadecimal_number, 4),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 5),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 5),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 1),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_number, 1),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 5),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 5),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 2),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 2),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_call, 3, .production_id = 1),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_call, 3, .production_id = 1),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_call, 4, .production_id = 2),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_call, 4, .production_id = 2),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitives, 1),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitives, 1),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 1),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__template_repeat1, 1),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_variable, 5, .production_id = 4),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binding_variable, 5, .production_id = 4),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_procedure, 5, .production_id = 3),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binding_procedure, 5, .production_id = 3),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 1),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vararg_identifier, 1),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vararg_identifier, 1),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_procedure, 8, .production_id = 6),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binding_procedure, 8, .production_id = 6),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_procedure, 7, .production_id = 5),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binding_procedure, 7, .production_id = 5),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_syntax, 5, .production_id = 3),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binding_syntax, 5, .production_id = 3),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 5),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 5),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_d, 1),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_d, 1),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_o, 1),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_o, 1),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reserved_repeat1, 2),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_reserved_repeat1, 2),
  [783] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reserved_repeat1, 2), SHIFT_REPEAT(214),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [834] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reserved_repeat1, 2), SHIFT_REPEAT(147),
  [837] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transformer_repeat1, 2), SHIFT_REPEAT(28),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transformer_repeat1, 2),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reserved_repeat1, 1),
  [876] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_reserved_repeat1, 1),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax_rule, 4),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [912] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rest_arguments, 2),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reserved, 2),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rest_arguments, 3),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reserved, 3),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transformer, 5),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_R5RS(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
