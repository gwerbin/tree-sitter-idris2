#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 8
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum {
  sym__integerDecimal = 1,
  sym__integerHexadecimal = 2,
  sym__integerOctal = 3,
  sym__integerBinary = 4,
  sym_double = 5,
  sym_char = 6,
  anon_sym_BSLASH_LBRACE = 7,
  anon_sym_RBRACE = 8,
  sym_string = 9,
  sym_module = 10,
  sym_statement = 11,
  sym_expression = 12,
  sym_integer = 13,
  sym__number = 14,
  sym__text = 15,
  aux_sym_module_repeat1 = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__integerDecimal] = "_integerDecimal",
  [sym__integerHexadecimal] = "_integerHexadecimal",
  [sym__integerOctal] = "_integerOctal",
  [sym__integerBinary] = "_integerBinary",
  [sym_double] = "double",
  [sym_char] = "char",
  [anon_sym_BSLASH_LBRACE] = "\\{",
  [anon_sym_RBRACE] = "}",
  [sym_string] = "string",
  [sym_module] = "module",
  [sym_statement] = "statement",
  [sym_expression] = "expression",
  [sym_integer] = "integer",
  [sym__number] = "_number",
  [sym__text] = "_text",
  [aux_sym_module_repeat1] = "module_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__integerDecimal] = sym__integerDecimal,
  [sym__integerHexadecimal] = sym__integerHexadecimal,
  [sym__integerOctal] = sym__integerOctal,
  [sym__integerBinary] = sym__integerBinary,
  [sym_double] = sym_double,
  [sym_char] = sym_char,
  [anon_sym_BSLASH_LBRACE] = anon_sym_BSLASH_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_string] = sym_string,
  [sym_module] = sym_module,
  [sym_statement] = sym_statement,
  [sym_expression] = sym_expression,
  [sym_integer] = sym_integer,
  [sym__number] = sym__number,
  [sym__text] = sym__text,
  [aux_sym_module_repeat1] = aux_sym_module_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__integerDecimal] = {
    .visible = false,
    .named = true,
  },
  [sym__integerHexadecimal] = {
    .visible = false,
    .named = true,
  },
  [sym__integerOctal] = {
    .visible = false,
    .named = true,
  },
  [sym__integerBinary] = {
    .visible = false,
    .named = true,
  },
  [sym_double] = {
    .visible = true,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_module_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(43);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 1:
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '}') ADVANCE(2);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(32);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(51);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == 'A') ADVANCE(24);
      if (lookahead == 'U') ADVANCE(25);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == 'A') ADVANCE(26);
      if (lookahead == 'R') ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == 'C') ADVANCE(24);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == 'C') ADVANCE(37);
      if (lookahead == 'E') ADVANCE(25);
      if (lookahead == 'L') ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == 'E') ADVANCE(25);
      if (lookahead == 'S') ADVANCE(4);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == 'F') ADVANCE(4);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == 'H') ADVANCE(4);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == 'M') ADVANCE(4);
      if (lookahead == 'N') ADVANCE(27);
      if (lookahead == 'O') ADVANCE(28);
      if (lookahead == 'S') ADVANCE(22);
      if (lookahead == 'T') ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == 'S') ADVANCE(4);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == 'T') ADVANCE(4);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == 'F' ||
          lookahead == 'S') ADVANCE(4);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'P') ADVANCE(4);
      if (lookahead == 'O') ADVANCE(11);
      if (lookahead == 'T') ADVANCE(29);
      if (lookahead == 'U') ADVANCE(21);
      if (lookahead == 'Y') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '\'') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '\'') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(7);
      if (lookahead == 'B') ADVANCE(9);
      if (lookahead == 'C') ADVANCE(6);
      if (lookahead == 'D') ADVANCE(8);
      if (lookahead == 'E') ADVANCE(12);
      if (lookahead == 'F') ADVANCE(15);
      if (lookahead == 'G') ADVANCE(13);
      if (lookahead == 'H') ADVANCE(14);
      if (lookahead == 'L') ADVANCE(10);
      if (lookahead == 'N') ADVANCE(5);
      if (lookahead == 'R') ADVANCE(13);
      if (lookahead == 'S') ADVANCE(16);
      if (lookahead == 'U') ADVANCE(13);
      if (lookahead == 'V') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(17);
      if (lookahead == 'x') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 21:
      if (lookahead == 'B') ADVANCE(4);
      END_STATE();
    case 22:
      if (lookahead == 'C') ADVANCE(4);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(4);
      END_STATE();
    case 24:
      if (lookahead == 'K') ADVANCE(4);
      END_STATE();
    case 25:
      if (lookahead == 'L') ADVANCE(4);
      END_STATE();
    case 26:
      if (lookahead == 'N') ADVANCE(4);
      END_STATE();
    case 27:
      if (lookahead == 'Q') ADVANCE(4);
      END_STATE();
    case 28:
      if (lookahead == 'T') ADVANCE(4);
      END_STATE();
    case 29:
      if (lookahead == 'X') ADVANCE(4);
      END_STATE();
    case 30:
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(4);
      END_STATE();
    case 31:
      if (lookahead == '{') ADVANCE(52);
      END_STATE();
    case 32:
      if (lookahead == '}') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 34:
      if (lookahead == 'B' ||
          lookahead == 'X') ADVANCE(4);
      END_STATE();
    case 35:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(49);
      END_STATE();
    case 37:
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(4);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(48);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__integerDecimal);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == 'b') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(38);
      if (lookahead == 'x') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__integerDecimal);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__integerDecimal);
      if (lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__integerHexadecimal);
      if (lookahead == '_') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__integerOctal);
      if (lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__integerBinary);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_double);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_BSLASH_LBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(2);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '}') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(32);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__integerDecimal] = ACTIONS(1),
    [sym__integerHexadecimal] = ACTIONS(1),
    [sym__integerOctal] = ACTIONS(1),
    [sym__integerBinary] = ACTIONS(1),
    [sym_double] = ACTIONS(1),
    [sym_char] = ACTIONS(1),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_module] = STATE(7),
    [sym_statement] = STATE(2),
    [sym_expression] = STATE(5),
    [sym_integer] = STATE(6),
    [sym__number] = STATE(6),
    [sym__text] = STATE(6),
    [aux_sym_module_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__integerDecimal] = ACTIONS(5),
    [sym__integerHexadecimal] = ACTIONS(7),
    [sym__integerOctal] = ACTIONS(7),
    [sym__integerBinary] = ACTIONS(7),
    [sym_double] = ACTIONS(9),
    [sym_char] = ACTIONS(9),
    [sym_string] = ACTIONS(9),
  },
  [2] = {
    [sym_statement] = STATE(3),
    [sym_expression] = STATE(5),
    [sym_integer] = STATE(6),
    [sym__number] = STATE(6),
    [sym__text] = STATE(6),
    [aux_sym_module_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym__integerDecimal] = ACTIONS(5),
    [sym__integerHexadecimal] = ACTIONS(7),
    [sym__integerOctal] = ACTIONS(7),
    [sym__integerBinary] = ACTIONS(7),
    [sym_double] = ACTIONS(9),
    [sym_char] = ACTIONS(9),
    [sym_string] = ACTIONS(9),
  },
  [3] = {
    [sym_statement] = STATE(3),
    [sym_expression] = STATE(5),
    [sym_integer] = STATE(6),
    [sym__number] = STATE(6),
    [sym__text] = STATE(6),
    [aux_sym_module_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym__integerDecimal] = ACTIONS(15),
    [sym__integerHexadecimal] = ACTIONS(18),
    [sym__integerOctal] = ACTIONS(18),
    [sym__integerBinary] = ACTIONS(18),
    [sym_double] = ACTIONS(21),
    [sym_char] = ACTIONS(21),
    [sym_string] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(26), 1,
      sym__integerDecimal,
    ACTIONS(24), 7,
      ts_builtin_sym_end,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
      sym_double,
      sym_char,
      sym_string,
  [13] = 2,
    ACTIONS(30), 1,
      sym__integerDecimal,
    ACTIONS(28), 7,
      ts_builtin_sym_end,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
      sym_double,
      sym_char,
      sym_string,
  [26] = 2,
    ACTIONS(34), 1,
      sym__integerDecimal,
    ACTIONS(32), 7,
      ts_builtin_sym_end,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
      sym_double,
      sym_char,
      sym_string,
  [39] = 1,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 13,
  [SMALL_STATE(6)] = 26,
  [SMALL_STATE(7)] = 39,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(4),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(4),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(6),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [36] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_idris2(void) {
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
