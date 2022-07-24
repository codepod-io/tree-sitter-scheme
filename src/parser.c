#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 106
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 7

enum {
  anon_sym_LPAREN = 1,
  anon_sym_define = 2,
  anon_sym_RPAREN = 3,
  sym__identifier = 4,
  anon_sym_SQUOTE = 5,
  anon_sym_DOT = 6,
  anon_sym_lambda = 7,
  aux_sym_procedure_call_token1 = 8,
  sym_boolean = 9,
  sym_character = 10,
  anon_sym_DQUOTE = 11,
  aux_sym_binary_number_token1 = 12,
  aux_sym_binary_number_token2 = 13,
  aux_sym_binary_number_token3 = 14,
  aux_sym_binary_number_token4 = 15,
  aux_sym_binary_number_token5 = 16,
  aux_sym_binary_number_token6 = 17,
  sym__real_b = 18,
  aux_sym_octal_number_token1 = 19,
  aux_sym_octal_number_token2 = 20,
  sym__real_o = 21,
  aux_sym_decimal_number_token1 = 22,
  aux_sym_decimal_number_token2 = 23,
  aux_sym_decimal_number_token3 = 24,
  aux_sym_decimal_number_token4 = 25,
  sym__real_d = 26,
  aux_sym_hexadecimal_number_token1 = 27,
  aux_sym_hexadecimal_number_token2 = 28,
  sym__real_x = 29,
  sym_program = 30,
  sym__scope = 31,
  sym__token = 32,
  sym_primitives = 33,
  sym_expression = 34,
  sym_definition = 35,
  sym_binding_procedure = 36,
  sym_binding_variable = 37,
  sym_identifier = 38,
  sym_vararg_identifier = 39,
  sym_variable = 40,
  sym_symbol = 41,
  sym_arguments = 42,
  sym__rest_arguments = 43,
  sym_body = 44,
  sym_lambda = 45,
  sym_procedure_call = 46,
  sym_string = 47,
  sym_number = 48,
  sym_binary_number = 49,
  sym_octal_number = 50,
  sym_decimal_number = 51,
  sym_hexadecimal_number = 52,
  aux_sym_program_repeat1 = 53,
  aux_sym_binding_procedure_repeat1 = 54,
  aux_sym_body_repeat1 = 55,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_define] = "define",
  [anon_sym_RPAREN] = ")",
  [sym__identifier] = "_identifier",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DOT] = ".",
  [anon_sym_lambda] = "lambda",
  [aux_sym_procedure_call_token1] = "identifier",
  [sym_boolean] = "boolean",
  [sym_character] = "character",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_binary_number_token1] = "binary_number_token1",
  [aux_sym_binary_number_token2] = "binary_number_token2",
  [aux_sym_binary_number_token3] = "binary_number_token3",
  [aux_sym_binary_number_token4] = "binary_number_token4",
  [aux_sym_binary_number_token5] = "binary_number_token5",
  [aux_sym_binary_number_token6] = "binary_number_token6",
  [sym__real_b] = "_real_b",
  [aux_sym_octal_number_token1] = "octal_number_token1",
  [aux_sym_octal_number_token2] = "octal_number_token2",
  [sym__real_o] = "_real_o",
  [aux_sym_decimal_number_token1] = "decimal_number_token1",
  [aux_sym_decimal_number_token2] = "decimal_number_token2",
  [aux_sym_decimal_number_token3] = "decimal_number_token3",
  [aux_sym_decimal_number_token4] = "decimal_number_token4",
  [sym__real_d] = "_real_d",
  [aux_sym_hexadecimal_number_token1] = "hexadecimal_number_token1",
  [aux_sym_hexadecimal_number_token2] = "hexadecimal_number_token2",
  [sym__real_x] = "_real_x",
  [sym_program] = "program",
  [sym__scope] = "_scope",
  [sym__token] = "_token",
  [sym_primitives] = "primitives",
  [sym_expression] = "expression",
  [sym_definition] = "definition",
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
  [sym_octal_number] = "octal_number",
  [sym_decimal_number] = "decimal_number",
  [sym_hexadecimal_number] = "hexadecimal_number",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_binding_procedure_repeat1] = "binding_procedure_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym__identifier] = sym__identifier,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_lambda] = anon_sym_lambda,
  [aux_sym_procedure_call_token1] = sym_identifier,
  [sym_boolean] = sym_boolean,
  [sym_character] = sym_character,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_binary_number_token1] = aux_sym_binary_number_token1,
  [aux_sym_binary_number_token2] = aux_sym_binary_number_token2,
  [aux_sym_binary_number_token3] = aux_sym_binary_number_token3,
  [aux_sym_binary_number_token4] = aux_sym_binary_number_token4,
  [aux_sym_binary_number_token5] = aux_sym_binary_number_token5,
  [aux_sym_binary_number_token6] = aux_sym_binary_number_token6,
  [sym__real_b] = sym__real_b,
  [aux_sym_octal_number_token1] = aux_sym_octal_number_token1,
  [aux_sym_octal_number_token2] = aux_sym_octal_number_token2,
  [sym__real_o] = sym__real_o,
  [aux_sym_decimal_number_token1] = aux_sym_decimal_number_token1,
  [aux_sym_decimal_number_token2] = aux_sym_decimal_number_token2,
  [aux_sym_decimal_number_token3] = aux_sym_decimal_number_token3,
  [aux_sym_decimal_number_token4] = aux_sym_decimal_number_token4,
  [sym__real_d] = sym__real_d,
  [aux_sym_hexadecimal_number_token1] = aux_sym_hexadecimal_number_token1,
  [aux_sym_hexadecimal_number_token2] = aux_sym_hexadecimal_number_token2,
  [sym__real_x] = sym__real_x,
  [sym_program] = sym_program,
  [sym__scope] = sym__scope,
  [sym__token] = sym__token,
  [sym_primitives] = sym_primitives,
  [sym_expression] = sym_expression,
  [sym_definition] = sym_definition,
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
  [sym_octal_number] = sym_octal_number,
  [sym_decimal_number] = sym_decimal_number,
  [sym_hexadecimal_number] = sym_hexadecimal_number,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_binding_procedure_repeat1] = aux_sym_binding_procedure_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
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
  [anon_sym_define] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [anon_sym_DOT] = {
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
  [aux_sym_binary_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_number_token2] = {
    .visible = false,
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
  [aux_sym_binary_number_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_number_token6] = {
    .visible = false,
    .named = false,
  },
  [sym__real_b] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_octal_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_octal_number_token2] = {
    .visible = false,
    .named = false,
  },
  [sym__real_o] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_decimal_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decimal_number_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decimal_number_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decimal_number_token4] = {
    .visible = false,
    .named = false,
  },
  [sym__real_d] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_hexadecimal_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hexadecimal_number_token2] = {
    .visible = false,
    .named = false,
  },
  [sym__real_x] = {
    .visible = false,
    .named = true,
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
  [sym_expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_definition] = {
    .visible = false,
    .named = true,
    .supertype = true,
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
  [sym_octal_number] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal_number] = {
    .visible = true,
    .named = true,
  },
  [sym_hexadecimal_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binding_procedure_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat1] = {
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
  [3] = {.index = 1, .length = 2},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 4, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 2},
    {field_value, 3},
  [3] =
    {field_name, 2},
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
  aux_sym_binding_procedure_repeat1, 2,
    aux_sym_binding_procedure_repeat1,
    sym_arguments,
  aux_sym_body_repeat1, 2,
    aux_sym_body_repeat1,
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
      if (eof) ADVANCE(72);
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '\'') ADVANCE(82);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == '+') ADVANCE(11);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(105);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '\'') ADVANCE(82);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == '+') ADVANCE(16);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (('!' <= lookahead && lookahead <= '*') ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(81);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(53);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(125);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == '+') ADVANCE(32);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == '+') ADVANCE(34);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 7:
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 8:
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(125);
      END_STATE();
    case 9:
      if (lookahead == '+') ADVANCE(36);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '+') ADVANCE(17);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(109);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(119);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'i') ADVANCE(106);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'i') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'i') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'i') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'i') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(77);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(92);
      if (lookahead == 'l') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(115);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(125);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(115);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(125);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(115);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(125);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 45:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(29);
      if (lookahead == 's') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(100);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 49:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 50:
      if (lookahead == 'w') ADVANCE(44);
      END_STATE();
    case 51:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 52:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(103);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(129);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(117);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(143);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == 'f' ||
          lookahead == 't') ADVANCE(99);
      END_STATE();
    case 53:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(102);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(130);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(118);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(144);
      END_STATE();
    case 54:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(112);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 55:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(113);
      END_STATE();
    case 56:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(122);
      END_STATE();
    case 57:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 58:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 59:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 60:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 61:
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(123);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 67:
      if (eof) ADVANCE(72);
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '\'') ADVANCE(82);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == '+') ADVANCE(11);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(67)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (('!' <= lookahead && lookahead <= '*') ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(81);
      END_STATE();
    case 68:
      if (eof) ADVANCE(72);
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '\'') ADVANCE(82);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == '+') ADVANCE(16);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(68)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (('!' <= lookahead && lookahead <= '*') ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(81);
      END_STATE();
    case 69:
      if (eof) ADVANCE(72);
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '\'') ADVANCE(82);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(69)
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('!' <= lookahead && lookahead <= '*') ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(81);
      END_STATE();
    case 70:
      if (eof) ADVANCE(72);
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '\'') ADVANCE(82);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70)
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(119);
      if (('!' <= lookahead && lookahead <= '*') ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(81);
      END_STATE();
    case 71:
      if (eof) ADVANCE(72);
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '\'') ADVANCE(82);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == '+') ADVANCE(14);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (('!' <= lookahead && lookahead <= '*') ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(81);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_define);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__identifier);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '/') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '#') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(81);
      END_STATE();
    case 81:
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
          lookahead == '~') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(19);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_lambda);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_lambda);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_procedure_call_token1);
      if (lookahead == 'a') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_procedure_call_token1);
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_procedure_call_token1);
      if (lookahead == 'b') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_procedure_call_token1);
      if (lookahead == 'd') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_procedure_call_token1);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_procedure_call_token1);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_procedure_call_token1);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_procedure_call_token1);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_procedure_call_token1);
      if (lookahead == 'm') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_procedure_call_token1);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_procedure_call_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_binary_number_token1);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_binary_number_token1);
      if (lookahead == '#') ADVANCE(57);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_binary_number_token2);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_binary_number_token3);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_binary_number_token4);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_binary_number_token5);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_binary_number_token6);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__real_b);
      if (lookahead == '#') ADVANCE(110);
      if (lookahead == '.') ADVANCE(135);
      if (lookahead == '/') ADVANCE(54);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(109);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(51);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__real_b);
      if (lookahead == '#') ADVANCE(110);
      if (lookahead == '.') ADVANCE(134);
      if (lookahead == '/') ADVANCE(54);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(51);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__real_b);
      if (lookahead == '#') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__real_b);
      if (lookahead == '#') ADVANCE(111);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(112);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__real_b);
      if (lookahead == '#') ADVANCE(111);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__real_b);
      if (lookahead == '#') ADVANCE(114);
      if (lookahead == '/') ADVANCE(55);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__real_b);
      if (lookahead == '#') ADVANCE(114);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_octal_number_token1);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_octal_number_token1);
      if (lookahead == '#') ADVANCE(59);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_octal_number_token2);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__real_o);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '.') ADVANCE(135);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(126);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__real_o);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '.') ADVANCE(134);
      if (lookahead == '/') ADVANCE(56);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(51);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__real_o);
      if (lookahead == '#') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__real_o);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__real_o);
      if (lookahead == '#') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__real_o);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '/') ADVANCE(62);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__real_o);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '/') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_decimal_number_token1);
      if (lookahead == '#') ADVANCE(133);
      if (lookahead == '.') ADVANCE(135);
      if (lookahead == '/') ADVANCE(64);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_decimal_number_token1);
      if (lookahead == '#') ADVANCE(140);
      if (lookahead == '.') ADVANCE(135);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == 'l' ||
          lookahead == 's') ADVANCE(51);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(147);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_decimal_number_token2);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_decimal_number_token2);
      if (lookahead == '#') ADVANCE(58);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_decimal_number_token3);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_decimal_number_token4);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__real_d);
      if (lookahead == '#') ADVANCE(133);
      if (lookahead == '.') ADVANCE(135);
      if (lookahead == '/') ADVANCE(64);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__real_d);
      if (lookahead == '#') ADVANCE(133);
      if (lookahead == '.') ADVANCE(134);
      if (lookahead == '/') ADVANCE(64);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(51);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__real_d);
      if (lookahead == '#') ADVANCE(134);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(51);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__real_d);
      if (lookahead == '#') ADVANCE(134);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__real_d);
      if (lookahead == '#') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__real_d);
      if (lookahead == '#') ADVANCE(136);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__real_d);
      if (lookahead == '#') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__real_d);
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '/') ADVANCE(66);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__real_d);
      if (lookahead == '#') ADVANCE(140);
      if (lookahead == '.') ADVANCE(134);
      if (lookahead == '/') ADVANCE(61);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(51);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__real_d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_hexadecimal_number_token1);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_hexadecimal_number_token1);
      if (lookahead == '#') ADVANCE(60);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_hexadecimal_number_token2);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__real_x);
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '/') ADVANCE(66);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__real_x);
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(65);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__real_x);
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '/') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__real_x);
      if (lookahead == '#') ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__real_x);
      if (lookahead == '#') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 68},
  [2] = {.lex_state = 68},
  [3] = {.lex_state = 68},
  [4] = {.lex_state = 68},
  [5] = {.lex_state = 68},
  [6] = {.lex_state = 68},
  [7] = {.lex_state = 68},
  [8] = {.lex_state = 68},
  [9] = {.lex_state = 68},
  [10] = {.lex_state = 68},
  [11] = {.lex_state = 68},
  [12] = {.lex_state = 69},
  [13] = {.lex_state = 67},
  [14] = {.lex_state = 70},
  [15] = {.lex_state = 71},
  [16] = {.lex_state = 71},
  [17] = {.lex_state = 68},
  [18] = {.lex_state = 68},
  [19] = {.lex_state = 68},
  [20] = {.lex_state = 68},
  [21] = {.lex_state = 68},
  [22] = {.lex_state = 68},
  [23] = {.lex_state = 68},
  [24] = {.lex_state = 68},
  [25] = {.lex_state = 68},
  [26] = {.lex_state = 68},
  [27] = {.lex_state = 68},
  [28] = {.lex_state = 68},
  [29] = {.lex_state = 68},
  [30] = {.lex_state = 68},
  [31] = {.lex_state = 68},
  [32] = {.lex_state = 68},
  [33] = {.lex_state = 68},
  [34] = {.lex_state = 68},
  [35] = {.lex_state = 68},
  [36] = {.lex_state = 68},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 68},
  [39] = {.lex_state = 68},
  [40] = {.lex_state = 68},
  [41] = {.lex_state = 68},
  [42] = {.lex_state = 68},
  [43] = {.lex_state = 68},
  [44] = {.lex_state = 68},
  [45] = {.lex_state = 68},
  [46] = {.lex_state = 68},
  [47] = {.lex_state = 68},
  [48] = {.lex_state = 68},
  [49] = {.lex_state = 68},
  [50] = {.lex_state = 68},
  [51] = {.lex_state = 68},
  [52] = {.lex_state = 68},
  [53] = {.lex_state = 68},
  [54] = {.lex_state = 68},
  [55] = {.lex_state = 68},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 68},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 68},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 25},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 68},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 68},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 68},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 68},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 68},
  [87] = {.lex_state = 43},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 68},
  [105] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_lambda] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym_character] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_binary_number_token1] = ACTIONS(1),
    [aux_sym_binary_number_token2] = ACTIONS(1),
    [aux_sym_binary_number_token3] = ACTIONS(1),
    [aux_sym_binary_number_token4] = ACTIONS(1),
    [aux_sym_binary_number_token5] = ACTIONS(1),
    [aux_sym_binary_number_token6] = ACTIONS(1),
    [sym__real_b] = ACTIONS(1),
    [aux_sym_octal_number_token1] = ACTIONS(1),
    [aux_sym_octal_number_token2] = ACTIONS(1),
    [aux_sym_decimal_number_token1] = ACTIONS(1),
    [aux_sym_decimal_number_token2] = ACTIONS(1),
    [aux_sym_decimal_number_token3] = ACTIONS(1),
    [aux_sym_decimal_number_token4] = ACTIONS(1),
    [sym__real_d] = ACTIONS(1),
    [aux_sym_hexadecimal_number_token1] = ACTIONS(1),
    [aux_sym_hexadecimal_number_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(93),
    [sym__scope] = STATE(3),
    [sym__token] = STATE(3),
    [sym_primitives] = STATE(3),
    [sym_expression] = STATE(3),
    [sym_definition] = STATE(3),
    [sym_binding_procedure] = STATE(46),
    [sym_binding_variable] = STATE(46),
    [sym_variable] = STATE(28),
    [sym_symbol] = STATE(28),
    [sym_lambda] = STATE(25),
    [sym_procedure_call] = STATE(25),
    [sym_string] = STATE(28),
    [sym_number] = STATE(28),
    [sym_binary_number] = STATE(26),
    [sym_octal_number] = STATE(26),
    [sym_decimal_number] = STATE(26),
    [sym_hexadecimal_number] = STATE(26),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
    [sym__identifier] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [sym_boolean] = ACTIONS(11),
    [sym_character] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [aux_sym_binary_number_token1] = ACTIONS(15),
    [aux_sym_octal_number_token1] = ACTIONS(17),
    [aux_sym_octal_number_token2] = ACTIONS(19),
    [aux_sym_decimal_number_token1] = ACTIONS(21),
    [aux_sym_decimal_number_token2] = ACTIONS(23),
    [aux_sym_decimal_number_token3] = ACTIONS(25),
    [aux_sym_decimal_number_token4] = ACTIONS(27),
    [sym__real_d] = ACTIONS(29),
    [aux_sym_hexadecimal_number_token1] = ACTIONS(31),
    [aux_sym_hexadecimal_number_token2] = ACTIONS(33),
  },
  [2] = {
    [sym__scope] = STATE(2),
    [sym__token] = STATE(2),
    [sym_primitives] = STATE(2),
    [sym_expression] = STATE(2),
    [sym_definition] = STATE(2),
    [sym_binding_procedure] = STATE(46),
    [sym_binding_variable] = STATE(46),
    [sym_variable] = STATE(28),
    [sym_symbol] = STATE(28),
    [sym_lambda] = STATE(25),
    [sym_procedure_call] = STATE(25),
    [sym_string] = STATE(28),
    [sym_number] = STATE(28),
    [sym_binary_number] = STATE(26),
    [sym_octal_number] = STATE(26),
    [sym_decimal_number] = STATE(26),
    [sym_hexadecimal_number] = STATE(26),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym__identifier] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [sym_boolean] = ACTIONS(46),
    [sym_character] = ACTIONS(46),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [aux_sym_binary_number_token1] = ACTIONS(52),
    [aux_sym_octal_number_token1] = ACTIONS(55),
    [aux_sym_octal_number_token2] = ACTIONS(58),
    [aux_sym_decimal_number_token1] = ACTIONS(61),
    [aux_sym_decimal_number_token2] = ACTIONS(64),
    [aux_sym_decimal_number_token3] = ACTIONS(67),
    [aux_sym_decimal_number_token4] = ACTIONS(70),
    [sym__real_d] = ACTIONS(73),
    [aux_sym_hexadecimal_number_token1] = ACTIONS(76),
    [aux_sym_hexadecimal_number_token2] = ACTIONS(79),
  },
  [3] = {
    [sym__scope] = STATE(2),
    [sym__token] = STATE(2),
    [sym_primitives] = STATE(2),
    [sym_expression] = STATE(2),
    [sym_definition] = STATE(2),
    [sym_binding_procedure] = STATE(46),
    [sym_binding_variable] = STATE(46),
    [sym_variable] = STATE(28),
    [sym_symbol] = STATE(28),
    [sym_lambda] = STATE(25),
    [sym_procedure_call] = STATE(25),
    [sym_string] = STATE(28),
    [sym_number] = STATE(28),
    [sym_binary_number] = STATE(26),
    [sym_octal_number] = STATE(26),
    [sym_decimal_number] = STATE(26),
    [sym_hexadecimal_number] = STATE(26),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(5),
    [sym__identifier] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [sym_boolean] = ACTIONS(11),
    [sym_character] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [aux_sym_binary_number_token1] = ACTIONS(15),
    [aux_sym_octal_number_token1] = ACTIONS(17),
    [aux_sym_octal_number_token2] = ACTIONS(19),
    [aux_sym_decimal_number_token1] = ACTIONS(21),
    [aux_sym_decimal_number_token2] = ACTIONS(23),
    [aux_sym_decimal_number_token3] = ACTIONS(25),
    [aux_sym_decimal_number_token4] = ACTIONS(27),
    [sym__real_d] = ACTIONS(29),
    [aux_sym_hexadecimal_number_token1] = ACTIONS(31),
    [aux_sym_hexadecimal_number_token2] = ACTIONS(33),
  },
  [4] = {
    [sym__token] = STATE(47),
    [sym_primitives] = STATE(47),
    [sym_expression] = STATE(47),
    [sym_variable] = STATE(28),
    [sym_symbol] = STATE(28),
    [sym_lambda] = STATE(25),
    [sym_procedure_call] = STATE(25),
    [sym_string] = STATE(28),
    [sym_number] = STATE(28),
    [sym_binary_number] = STATE(26),
    [sym_octal_number] = STATE(26),
    [sym_decimal_number] = STATE(26),
    [sym_hexadecimal_number] = STATE(26),
    [aux_sym_body_repeat1] = STATE(7),
    [anon_sym_LPAREN] = ACTIONS(84),
    [anon_sym_RPAREN] = ACTIONS(86),
    [sym__identifier] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [sym_boolean] = ACTIONS(11),
    [sym_character] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [aux_sym_binary_number_token1] = ACTIONS(15),
    [aux_sym_octal_number_token1] = ACTIONS(17),
    [aux_sym_octal_number_token2] = ACTIONS(19),
    [aux_sym_decimal_number_token1] = ACTIONS(21),
    [aux_sym_decimal_number_token2] = ACTIONS(23),
    [aux_sym_decimal_number_token3] = ACTIONS(25),
    [aux_sym_decimal_number_token4] = ACTIONS(27),
    [sym__real_d] = ACTIONS(29),
    [aux_sym_hexadecimal_number_token1] = ACTIONS(31),
    [aux_sym_hexadecimal_number_token2] = ACTIONS(33),
  },
  [5] = {
    [sym__token] = STATE(47),
    [sym_primitives] = STATE(47),
    [sym_expression] = STATE(47),
    [sym_variable] = STATE(28),
    [sym_symbol] = STATE(28),
    [sym_body] = STATE(92),
    [sym_lambda] = STATE(25),
    [sym_procedure_call] = STATE(25),
    [sym_string] = STATE(28),
    [sym_number] = STATE(28),
    [sym_binary_number] = STATE(26),
    [sym_octal_number] = STATE(26),
    [sym_decimal_number] = STATE(26),
    [sym_hexadecimal_number] = STATE(26),
    [aux_sym_body_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(84),
    [sym__identifier] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [sym_boolean] = ACTIONS(11),
    [sym_character] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [aux_sym_binary_number_token1] = ACTIONS(15),
    [aux_sym_octal_number_token1] = ACTIONS(17),
    [aux_sym_octal_number_token2] = ACTIONS(19),
    [aux_sym_decimal_number_token1] = ACTIONS(21),
    [aux_sym_decimal_number_token2] = ACTIONS(23),
    [aux_sym_decimal_number_token3] = ACTIONS(25),
    [aux_sym_decimal_number_token4] = ACTIONS(27),
    [sym__real_d] = ACTIONS(29),
    [aux_sym_hexadecimal_number_token1] = ACTIONS(31),
    [aux_sym_hexadecimal_number_token2] = ACTIONS(33),
  },
  [6] = {
    [sym__token] = STATE(47),
    [sym_primitives] = STATE(47),
    [sym_expression] = STATE(47),
    [sym_variable] = STATE(28),
    [sym_symbol] = STATE(28),
    [sym_body] = STATE(98),
    [sym_lambda] = STATE(25),
    [sym_procedure_call] = STATE(25),
    [sym_string] = STATE(28),
    [sym_number] = STATE(28),
    [sym_binary_number] = STATE(26),
    [sym_octal_number] = STATE(26),
    [sym_decimal_number] = STATE(26),
    [sym_hexadecimal_number] = STATE(26),
    [aux_sym_body_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(84),
    [sym__identifier] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [sym_boolean] = ACTIONS(11),
    [sym_character] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [aux_sym_binary_number_token1] = ACTIONS(15),
    [aux_sym_octal_number_token1] = ACTIONS(17),
    [aux_sym_octal_number_token2] = ACTIONS(19),
    [aux_sym_decimal_number_token1] = ACTIONS(21),
    [aux_sym_decimal_number_token2] = ACTIONS(23),
    [aux_sym_decimal_number_token3] = ACTIONS(25),
    [aux_sym_decimal_number_token4] = ACTIONS(27),
    [sym__real_d] = ACTIONS(29),
    [aux_sym_hexadecimal_number_token1] = ACTIONS(31),
    [aux_sym_hexadecimal_number_token2] = ACTIONS(33),
  },
  [7] = {
    [sym__token] = STATE(47),
    [sym_primitives] = STATE(47),
    [sym_expression] = STATE(47),
    [sym_variable] = STATE(28),
    [sym_symbol] = STATE(28),
    [sym_lambda] = STATE(25),
    [sym_procedure_call] = STATE(25),
    [sym_string] = STATE(28),
    [sym_number] = STATE(28),
    [sym_binary_number] = STATE(26),
    [sym_octal_number] = STATE(26),
    [sym_decimal_number] = STATE(26),
    [sym_hexadecimal_number] = STATE(26),
    [aux_sym_body_repeat1] = STATE(7),
    [anon_sym_LPAREN] = ACTIONS(88),
    [anon_sym_RPAREN] = ACTIONS(91),
    [sym__identifier] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(96),
    [sym_boolean] = ACTIONS(99),
    [sym_character] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(102),
    [aux_sym_binary_number_token1] = ACTIONS(105),
    [aux_sym_octal_number_token1] = ACTIONS(108),
    [aux_sym_octal_number_token2] = ACTIONS(111),
    [aux_sym_decimal_number_token1] = ACTIONS(114),
    [aux_sym_decimal_number_token2] = ACTIONS(117),
    [aux_sym_decimal_number_token3] = ACTIONS(120),
    [aux_sym_decimal_number_token4] = ACTIONS(123),
    [sym__real_d] = ACTIONS(126),
    [aux_sym_hexadecimal_number_token1] = ACTIONS(129),
    [aux_sym_hexadecimal_number_token2] = ACTIONS(132),
  },
  [8] = {
    [sym__token] = STATE(47),
    [sym_primitives] = STATE(47),
    [sym_expression] = STATE(47),
    [sym_variable] = STATE(28),
    [sym_symbol] = STATE(28),
    [sym_lambda] = STATE(25),
    [sym_procedure_call] = STATE(25),
    [sym_string] = STATE(28),
    [sym_number] = STATE(28),
    [sym_binary_number] = STATE(26),
    [sym_octal_number] = STATE(26),
    [sym_decimal_number] = STATE(26),
    [sym_hexadecimal_number] = STATE(26),
    [aux_sym_body_repeat1] = STATE(7),
    [anon_sym_LPAREN] = ACTIONS(84),
    [anon_sym_RPAREN] = ACTIONS(135),
    [sym__identifier] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [sym_boolean] = ACTIONS(11),
    [sym_character] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [aux_sym_binary_number_token1] = ACTIONS(15),
    [aux_sym_octal_number_token1] = ACTIONS(17),
    [aux_sym_octal_number_token2] = ACTIONS(19),
    [aux_sym_decimal_number_token1] = ACTIONS(21),
    [aux_sym_decimal_number_token2] = ACTIONS(23),
    [aux_sym_decimal_number_token3] = ACTIONS(25),
    [aux_sym_decimal_number_token4] = ACTIONS(27),
    [sym__real_d] = ACTIONS(29),
    [aux_sym_hexadecimal_number_token1] = ACTIONS(31),
    [aux_sym_hexadecimal_number_token2] = ACTIONS(33),
  },
  [9] = {
    [sym__token] = STATE(47),
    [sym_primitives] = STATE(47),
    [sym_expression] = STATE(47),
    [sym_variable] = STATE(28),
    [sym_symbol] = STATE(28),
    [sym_lambda] = STATE(25),
    [sym_procedure_call] = STATE(25),
    [sym_string] = STATE(28),
    [sym_number] = STATE(28),
    [sym_binary_number] = STATE(26),
    [sym_octal_number] = STATE(26),
    [sym_decimal_number] = STATE(26),
    [sym_hexadecimal_number] = STATE(26),
    [aux_sym_body_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(84),
    [anon_sym_RPAREN] = ACTIONS(137),
    [sym__identifier] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [sym_boolean] = ACTIONS(11),
    [sym_character] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [aux_sym_binary_number_token1] = ACTIONS(15),
    [aux_sym_octal_number_token1] = ACTIONS(17),
    [aux_sym_octal_number_token2] = ACTIONS(19),
    [aux_sym_decimal_number_token1] = ACTIONS(21),
    [aux_sym_decimal_number_token2] = ACTIONS(23),
    [aux_sym_decimal_number_token3] = ACTIONS(25),
    [aux_sym_decimal_number_token4] = ACTIONS(27),
    [sym__real_d] = ACTIONS(29),
    [aux_sym_hexadecimal_number_token1] = ACTIONS(31),
    [aux_sym_hexadecimal_number_token2] = ACTIONS(33),
  },
  [10] = {
    [sym__token] = STATE(47),
    [sym_primitives] = STATE(47),
    [sym_expression] = STATE(47),
    [sym_variable] = STATE(28),
    [sym_symbol] = STATE(28),
    [sym_body] = STATE(105),
    [sym_lambda] = STATE(25),
    [sym_procedure_call] = STATE(25),
    [sym_string] = STATE(28),
    [sym_number] = STATE(28),
    [sym_binary_number] = STATE(26),
    [sym_octal_number] = STATE(26),
    [sym_decimal_number] = STATE(26),
    [sym_hexadecimal_number] = STATE(26),
    [aux_sym_body_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(84),
    [sym__identifier] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [sym_boolean] = ACTIONS(11),
    [sym_character] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [aux_sym_binary_number_token1] = ACTIONS(15),
    [aux_sym_octal_number_token1] = ACTIONS(17),
    [aux_sym_octal_number_token2] = ACTIONS(19),
    [aux_sym_decimal_number_token1] = ACTIONS(21),
    [aux_sym_decimal_number_token2] = ACTIONS(23),
    [aux_sym_decimal_number_token3] = ACTIONS(25),
    [aux_sym_decimal_number_token4] = ACTIONS(27),
    [sym__real_d] = ACTIONS(29),
    [aux_sym_hexadecimal_number_token1] = ACTIONS(31),
    [aux_sym_hexadecimal_number_token2] = ACTIONS(33),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      aux_sym_decimal_number_token1,
    ACTIONS(27), 1,
      aux_sym_decimal_number_token4,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      aux_sym_binary_number_token1,
    ACTIONS(141), 1,
      aux_sym_octal_number_token1,
    ACTIONS(143), 1,
      aux_sym_octal_number_token2,
    ACTIONS(145), 1,
      aux_sym_decimal_number_token2,
    ACTIONS(147), 1,
      aux_sym_decimal_number_token3,
    ACTIONS(149), 1,
      sym__real_d,
    ACTIONS(151), 1,
      aux_sym_hexadecimal_number_token1,
    ACTIONS(153), 1,
      aux_sym_hexadecimal_number_token2,
    STATE(102), 1,
      sym_lambda,
    ACTIONS(11), 2,
      sym_boolean,
      sym_character,
    STATE(101), 2,
      sym_primitives,
      sym_procedure_call,
    STATE(26), 4,
      sym_binary_number,
      sym_octal_number,
      sym_decimal_number,
      sym_hexadecimal_number,
    STATE(28), 4,
      sym_variable,
      sym_symbol,
      sym_string,
      sym_number,
  [66] = 5,
    ACTIONS(159), 1,
      aux_sym_binary_number_token2,
    ACTIONS(161), 1,
      aux_sym_binary_number_token4,
    ACTIONS(163), 1,
      sym__real_x,
    ACTIONS(157), 7,
      sym__identifier,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      aux_sym_decimal_number_token4,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(155), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_hexadecimal_number_token1,
  [98] = 5,
    ACTIONS(167), 1,
      aux_sym_binary_number_token2,
    ACTIONS(169), 1,
      aux_sym_binary_number_token4,
    ACTIONS(171), 1,
      sym__real_b,
    ACTIONS(173), 6,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      aux_sym_decimal_number_token4,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(165), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_hexadecimal_number_token1,
  [130] = 5,
    ACTIONS(177), 1,
      aux_sym_binary_number_token2,
    ACTIONS(179), 1,
      aux_sym_binary_number_token4,
    ACTIONS(183), 1,
      sym__real_o,
    ACTIONS(181), 6,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      aux_sym_decimal_number_token4,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(175), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_hexadecimal_number_token1,
  [162] = 5,
    ACTIONS(187), 1,
      aux_sym_binary_number_token2,
    ACTIONS(189), 1,
      aux_sym_binary_number_token4,
    ACTIONS(193), 1,
      sym__real_d,
    ACTIONS(191), 5,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(185), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_hexadecimal_number_token1,
  [193] = 5,
    ACTIONS(198), 1,
      aux_sym_binary_number_token2,
    ACTIONS(200), 1,
      aux_sym_binary_number_token4,
    ACTIONS(204), 1,
      sym__real_d,
    ACTIONS(202), 5,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(196), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_hexadecimal_number_token1,
  [224] = 3,
    ACTIONS(200), 1,
      aux_sym_binary_number_token3,
    ACTIONS(202), 5,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(196), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token1,
  [250] = 3,
    ACTIONS(209), 1,
      aux_sym_binary_number_token3,
    ACTIONS(211), 5,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(207), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token1,
  [276] = 3,
    ACTIONS(215), 1,
      aux_sym_binary_number_token3,
    ACTIONS(217), 5,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(213), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token1,
  [302] = 3,
    ACTIONS(221), 1,
      aux_sym_binary_number_token3,
    ACTIONS(223), 5,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(219), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token1,
  [328] = 3,
    ACTIONS(227), 1,
      aux_sym_binary_number_token3,
    ACTIONS(229), 5,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(225), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token1,
  [354] = 2,
    ACTIONS(229), 5,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(225), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token1,
  [377] = 2,
    ACTIONS(211), 5,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(207), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token1,
  [400] = 2,
    ACTIONS(233), 5,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(231), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token1,
  [423] = 2,
    ACTIONS(237), 5,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(235), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token1,
  [446] = 2,
    ACTIONS(241), 5,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(239), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token1,
  [469] = 2,
    ACTIONS(245), 5,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(243), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token1,
  [492] = 2,
    ACTIONS(249), 5,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(247), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token1,
  [515] = 2,
    ACTIONS(253), 5,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(251), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token1,
  [538] = 2,
    ACTIONS(257), 5,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(255), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token1,
  [561] = 2,
    ACTIONS(173), 5,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(165), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token1,
  [584] = 2,
    ACTIONS(181), 5,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(175), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token1,
  [607] = 2,
    ACTIONS(202), 5,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(196), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token1,
  [630] = 2,
    ACTIONS(261), 5,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(259), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token1,
  [653] = 2,
    ACTIONS(157), 5,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(155), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token1,
  [676] = 2,
    ACTIONS(265), 5,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(263), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token1,
  [699] = 2,
    ACTIONS(269), 6,
      anon_sym_DOT,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(267), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token1,
  [722] = 2,
    ACTIONS(191), 5,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(185), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token1,
  [745] = 2,
    ACTIONS(273), 5,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(271), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token1,
  [768] = 2,
    ACTIONS(223), 5,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(219), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token1,
  [791] = 2,
    ACTIONS(277), 5,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(275), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token1,
  [814] = 2,
    ACTIONS(281), 5,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(279), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token1,
  [837] = 2,
    ACTIONS(217), 5,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(213), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token1,
  [860] = 2,
    ACTIONS(285), 5,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(283), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token1,
  [883] = 2,
    ACTIONS(289), 5,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(287), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token1,
  [905] = 2,
    ACTIONS(293), 5,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(291), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token1,
  [927] = 2,
    ACTIONS(297), 5,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(295), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token1,
  [949] = 2,
    ACTIONS(301), 5,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(299), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token1,
  [971] = 2,
    ACTIONS(305), 5,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(303), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token1,
  [993] = 2,
    ACTIONS(309), 5,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(307), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token1,
  [1015] = 2,
    ACTIONS(313), 5,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(311), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token1,
  [1037] = 2,
    ACTIONS(317), 5,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(315), 11,
      anon_sym_LPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token1,
  [1058] = 2,
    ACTIONS(321), 5,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(319), 11,
      anon_sym_LPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token1,
  [1079] = 2,
    ACTIONS(325), 5,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(323), 11,
      anon_sym_LPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token1,
  [1100] = 2,
    ACTIONS(329), 5,
      aux_sym_octal_number_token2,
      aux_sym_decimal_number_token1,
      aux_sym_decimal_number_token3,
      sym__real_d,
      aux_sym_hexadecimal_number_token2,
    ACTIONS(327), 11,
      anon_sym_LPAREN,
      sym__identifier,
      anon_sym_SQUOTE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      aux_sym_binary_number_token1,
      aux_sym_octal_number_token1,
      aux_sym_decimal_number_token2,
      aux_sym_decimal_number_token4,
      aux_sym_hexadecimal_number_token1,
  [1121] = 6,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    ACTIONS(333), 1,
      sym__identifier,
    ACTIONS(335), 1,
      anon_sym_DOT,
    STATE(58), 1,
      aux_sym_binding_procedure_repeat1,
    STATE(67), 1,
      sym_identifier,
    STATE(103), 1,
      sym__rest_arguments,
  [1140] = 5,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    ACTIONS(339), 1,
      sym__identifier,
    ACTIONS(342), 1,
      anon_sym_DOT,
    STATE(57), 1,
      aux_sym_binding_procedure_repeat1,
    STATE(67), 1,
      sym_identifier,
  [1156] = 5,
    ACTIONS(333), 1,
      sym__identifier,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
    ACTIONS(346), 1,
      anon_sym_DOT,
    STATE(57), 1,
      aux_sym_binding_procedure_repeat1,
    STATE(67), 1,
      sym_identifier,
  [1172] = 5,
    ACTIONS(333), 1,
      sym__identifier,
    ACTIONS(348), 1,
      anon_sym_RPAREN,
    ACTIONS(350), 1,
      anon_sym_DOT,
    STATE(57), 1,
      aux_sym_binding_procedure_repeat1,
    STATE(67), 1,
      sym_identifier,
  [1188] = 4,
    ACTIONS(333), 1,
      sym__identifier,
    ACTIONS(352), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_binding_procedure_repeat1,
    STATE(67), 1,
      sym_identifier,
  [1201] = 4,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 1,
      aux_sym_binary_number_token2,
    ACTIONS(354), 1,
      aux_sym_binary_number_token4,
    ACTIONS(356), 1,
      sym__real_b,
  [1214] = 4,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    ACTIONS(177), 1,
      aux_sym_binary_number_token2,
    ACTIONS(358), 1,
      aux_sym_binary_number_token4,
    ACTIONS(360), 1,
      sym__real_o,
  [1227] = 4,
    ACTIONS(196), 1,
      anon_sym_RPAREN,
    ACTIONS(198), 1,
      aux_sym_binary_number_token2,
    ACTIONS(362), 1,
      aux_sym_binary_number_token4,
    ACTIONS(364), 1,
      sym__real_d,
  [1240] = 4,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(368), 1,
      sym__identifier,
    STATE(10), 1,
      sym_arguments,
    STATE(52), 1,
      sym_vararg_identifier,
  [1253] = 4,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 1,
      aux_sym_binary_number_token2,
    ACTIONS(370), 1,
      aux_sym_binary_number_token4,
    ACTIONS(372), 1,
      sym__real_x,
  [1266] = 4,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    ACTIONS(187), 1,
      aux_sym_binary_number_token2,
    ACTIONS(374), 1,
      aux_sym_binary_number_token4,
    ACTIONS(376), 1,
      sym__real_d,
  [1279] = 2,
    ACTIONS(380), 1,
      anon_sym_DOT,
    ACTIONS(378), 2,
      anon_sym_RPAREN,
      sym__identifier,
  [1287] = 3,
    ACTIONS(382), 1,
      anon_sym_define,
    ACTIONS(384), 1,
      anon_sym_lambda,
    ACTIONS(386), 1,
      aux_sym_procedure_call_token1,
  [1297] = 2,
    ACTIONS(390), 1,
      sym__real_x,
    ACTIONS(388), 2,
      aux_sym_binary_number_token5,
      aux_sym_binary_number_token6,
  [1305] = 3,
    ACTIONS(333), 1,
      sym__identifier,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_identifier,
  [1315] = 2,
    ACTIONS(396), 1,
      sym__real_o,
    ACTIONS(394), 2,
      aux_sym_binary_number_token5,
      aux_sym_binary_number_token6,
  [1323] = 2,
    ACTIONS(400), 1,
      sym__real_b,
    ACTIONS(398), 2,
      aux_sym_binary_number_token5,
      aux_sym_binary_number_token6,
  [1331] = 2,
    ACTIONS(402), 1,
      sym__real_b,
    ACTIONS(398), 2,
      aux_sym_binary_number_token5,
      aux_sym_binary_number_token6,
  [1339] = 2,
    ACTIONS(404), 1,
      sym__real_o,
    ACTIONS(394), 2,
      aux_sym_binary_number_token5,
      aux_sym_binary_number_token6,
  [1347] = 2,
    ACTIONS(406), 1,
      sym__real_x,
    ACTIONS(388), 2,
      aux_sym_binary_number_token5,
      aux_sym_binary_number_token6,
  [1355] = 2,
    ACTIONS(374), 1,
      aux_sym_decimal_number_token4,
    ACTIONS(408), 1,
      sym__real_d,
  [1362] = 2,
    ACTIONS(368), 1,
      sym__identifier,
    STATE(96), 1,
      sym_vararg_identifier,
  [1369] = 2,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    ACTIONS(410), 1,
      aux_sym_binary_number_token3,
  [1376] = 2,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    ACTIONS(412), 1,
      aux_sym_binary_number_token3,
  [1383] = 2,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    ACTIONS(414), 1,
      aux_sym_binary_number_token3,
  [1390] = 2,
    ACTIONS(368), 1,
      sym__identifier,
    STATE(88), 1,
      sym_vararg_identifier,
  [1397] = 2,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    ACTIONS(416), 1,
      aux_sym_binary_number_token3,
  [1404] = 2,
    ACTIONS(196), 1,
      anon_sym_RPAREN,
    ACTIONS(362), 1,
      aux_sym_binary_number_token3,
  [1411] = 2,
    ACTIONS(333), 1,
      sym__identifier,
    STATE(56), 1,
      sym_identifier,
  [1418] = 2,
    ACTIONS(374), 1,
      aux_sym_decimal_number_token4,
    ACTIONS(418), 1,
      sym__real_d,
  [1425] = 2,
    ACTIONS(368), 1,
      sym__identifier,
    STATE(89), 1,
      sym_vararg_identifier,
  [1432] = 2,
    ACTIONS(384), 1,
      anon_sym_lambda,
    ACTIONS(386), 1,
      aux_sym_procedure_call_token1,
  [1439] = 1,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
  [1443] = 1,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
  [1447] = 1,
    ACTIONS(414), 1,
      sym__real_o,
  [1451] = 1,
    ACTIONS(416), 1,
      sym__real_b,
  [1455] = 1,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
  [1459] = 1,
    ACTIONS(426), 1,
      ts_builtin_sym_end,
  [1463] = 1,
    ACTIONS(428), 1,
      sym_character,
  [1467] = 1,
    ACTIONS(362), 1,
      sym__real_d,
  [1471] = 1,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
  [1475] = 1,
    ACTIONS(432), 1,
      anon_sym_DQUOTE,
  [1479] = 1,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
  [1483] = 1,
    ACTIONS(412), 1,
      sym__real_d,
  [1487] = 1,
    ACTIONS(410), 1,
      sym__real_x,
  [1491] = 1,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
  [1495] = 1,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
  [1499] = 1,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
  [1503] = 1,
    ACTIONS(440), 1,
      sym__identifier,
  [1507] = 1,
    ACTIONS(442), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 66,
  [SMALL_STATE(13)] = 98,
  [SMALL_STATE(14)] = 130,
  [SMALL_STATE(15)] = 162,
  [SMALL_STATE(16)] = 193,
  [SMALL_STATE(17)] = 224,
  [SMALL_STATE(18)] = 250,
  [SMALL_STATE(19)] = 276,
  [SMALL_STATE(20)] = 302,
  [SMALL_STATE(21)] = 328,
  [SMALL_STATE(22)] = 354,
  [SMALL_STATE(23)] = 377,
  [SMALL_STATE(24)] = 400,
  [SMALL_STATE(25)] = 423,
  [SMALL_STATE(26)] = 446,
  [SMALL_STATE(27)] = 469,
  [SMALL_STATE(28)] = 492,
  [SMALL_STATE(29)] = 515,
  [SMALL_STATE(30)] = 538,
  [SMALL_STATE(31)] = 561,
  [SMALL_STATE(32)] = 584,
  [SMALL_STATE(33)] = 607,
  [SMALL_STATE(34)] = 630,
  [SMALL_STATE(35)] = 653,
  [SMALL_STATE(36)] = 676,
  [SMALL_STATE(37)] = 699,
  [SMALL_STATE(38)] = 722,
  [SMALL_STATE(39)] = 745,
  [SMALL_STATE(40)] = 768,
  [SMALL_STATE(41)] = 791,
  [SMALL_STATE(42)] = 814,
  [SMALL_STATE(43)] = 837,
  [SMALL_STATE(44)] = 860,
  [SMALL_STATE(45)] = 883,
  [SMALL_STATE(46)] = 905,
  [SMALL_STATE(47)] = 927,
  [SMALL_STATE(48)] = 949,
  [SMALL_STATE(49)] = 971,
  [SMALL_STATE(50)] = 993,
  [SMALL_STATE(51)] = 1015,
  [SMALL_STATE(52)] = 1037,
  [SMALL_STATE(53)] = 1058,
  [SMALL_STATE(54)] = 1079,
  [SMALL_STATE(55)] = 1100,
  [SMALL_STATE(56)] = 1121,
  [SMALL_STATE(57)] = 1140,
  [SMALL_STATE(58)] = 1156,
  [SMALL_STATE(59)] = 1172,
  [SMALL_STATE(60)] = 1188,
  [SMALL_STATE(61)] = 1201,
  [SMALL_STATE(62)] = 1214,
  [SMALL_STATE(63)] = 1227,
  [SMALL_STATE(64)] = 1240,
  [SMALL_STATE(65)] = 1253,
  [SMALL_STATE(66)] = 1266,
  [SMALL_STATE(67)] = 1279,
  [SMALL_STATE(68)] = 1287,
  [SMALL_STATE(69)] = 1297,
  [SMALL_STATE(70)] = 1305,
  [SMALL_STATE(71)] = 1315,
  [SMALL_STATE(72)] = 1323,
  [SMALL_STATE(73)] = 1331,
  [SMALL_STATE(74)] = 1339,
  [SMALL_STATE(75)] = 1347,
  [SMALL_STATE(76)] = 1355,
  [SMALL_STATE(77)] = 1362,
  [SMALL_STATE(78)] = 1369,
  [SMALL_STATE(79)] = 1376,
  [SMALL_STATE(80)] = 1383,
  [SMALL_STATE(81)] = 1390,
  [SMALL_STATE(82)] = 1397,
  [SMALL_STATE(83)] = 1404,
  [SMALL_STATE(84)] = 1411,
  [SMALL_STATE(85)] = 1418,
  [SMALL_STATE(86)] = 1425,
  [SMALL_STATE(87)] = 1432,
  [SMALL_STATE(88)] = 1439,
  [SMALL_STATE(89)] = 1443,
  [SMALL_STATE(90)] = 1447,
  [SMALL_STATE(91)] = 1451,
  [SMALL_STATE(92)] = 1455,
  [SMALL_STATE(93)] = 1459,
  [SMALL_STATE(94)] = 1463,
  [SMALL_STATE(95)] = 1467,
  [SMALL_STATE(96)] = 1471,
  [SMALL_STATE(97)] = 1475,
  [SMALL_STATE(98)] = 1479,
  [SMALL_STATE(99)] = 1483,
  [SMALL_STATE(100)] = 1487,
  [SMALL_STATE(101)] = 1491,
  [SMALL_STATE(102)] = 1495,
  [SMALL_STATE(103)] = 1499,
  [SMALL_STATE(104)] = 1503,
  [SMALL_STATE(105)] = 1507,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(68),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(41),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(104),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(28),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(94),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(73),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(74),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(74),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(38),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(85),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(85),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(38),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(75),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(75),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(87),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(41),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(104),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(28),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(94),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(73),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(74),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(74),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(38),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(85),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(85),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(38),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(15),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(75),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(75),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexadecimal_number, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hexadecimal_number, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_number, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_number, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal_number, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_octal_number, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_number, 1),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_decimal_number, 1), SHIFT(17),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_number, 2),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_decimal_number, 2), SHIFT(21),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexadecimal_number, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hexadecimal_number, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_number, 3),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_number, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal_number, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_octal_number, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_number, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal_number, 4),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_octal_number, 4),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_number, 4),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_number, 4),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitives, 1),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitives, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_call, 4, .production_id = 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_call, 4, .production_id = 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexadecimal_number, 4),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hexadecimal_number, 4),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 4),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_number, 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 5),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 5),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_call, 3, .production_id = 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_call, 3, .production_id = 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_procedure, 5, .production_id = 4),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binding_procedure, 5, .production_id = 4),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 1),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_procedure, 7, .production_id = 5),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binding_procedure, 7, .production_id = 5),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_variable, 5, .production_id = 3),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binding_variable, 5, .production_id = 3),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_procedure, 8, .production_id = 6),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binding_procedure, 8, .production_id = 6),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vararg_identifier, 1),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vararg_identifier, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 5),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 5),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_procedure_repeat1, 2),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binding_procedure_repeat1, 2), SHIFT_REPEAT(37),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_binding_procedure_repeat1, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_procedure_repeat1, 1),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_binding_procedure_repeat1, 1),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rest_arguments, 3),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [426] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rest_arguments, 2),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
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
