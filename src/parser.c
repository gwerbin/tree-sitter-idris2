#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 6
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 13
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
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
  sym_string = 7,
  sym_module = 8,
  sym_integer = 9,
  sym__number = 10,
  sym__text = 11,
  aux_sym_module_repeat1 = 12,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__integerDecimal] = "_integerDecimal",
  [sym__integerHexadecimal] = "_integerHexadecimal",
  [sym__integerOctal] = "_integerOctal",
  [sym__integerBinary] = "_integerBinary",
  [sym_double] = "double",
  [sym_char] = "char",
  [sym_string] = "string",
  [sym_module] = "module",
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
  [sym_string] = sym_string,
  [sym_module] = sym_module,
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
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
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
      if (eof) ADVANCE(39);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '0') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(47);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == 'A') ADVANCE(22);
      if (lookahead == 'U') ADVANCE(23);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == 'A') ADVANCE(24);
      if (lookahead == 'R') ADVANCE(2);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == 'C') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == 'C') ADVANCE(33);
      if (lookahead == 'E') ADVANCE(23);
      if (lookahead == 'L') ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == 'E') ADVANCE(23);
      if (lookahead == 'S') ADVANCE(2);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == 'F') ADVANCE(2);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == 'H') ADVANCE(2);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == 'M') ADVANCE(2);
      if (lookahead == 'N') ADVANCE(25);
      if (lookahead == 'O') ADVANCE(26);
      if (lookahead == 'S') ADVANCE(20);
      if (lookahead == 'T') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == 'S') ADVANCE(2);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == 'T') ADVANCE(2);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == 'F' ||
          lookahead == 'S') ADVANCE(2);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'P') ADVANCE(2);
      if (lookahead == 'O') ADVANCE(9);
      if (lookahead == 'T') ADVANCE(27);
      if (lookahead == 'U') ADVANCE(19);
      if (lookahead == 'Y') ADVANCE(24);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(5);
      if (lookahead == 'B') ADVANCE(7);
      if (lookahead == 'C') ADVANCE(4);
      if (lookahead == 'D') ADVANCE(6);
      if (lookahead == 'E') ADVANCE(10);
      if (lookahead == 'F') ADVANCE(13);
      if (lookahead == 'G') ADVANCE(11);
      if (lookahead == 'H') ADVANCE(12);
      if (lookahead == 'L') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(3);
      if (lookahead == 'R') ADVANCE(11);
      if (lookahead == 'S') ADVANCE(14);
      if (lookahead == 'U') ADVANCE(11);
      if (lookahead == 'V') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(15);
      if (lookahead == 'x') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 19:
      if (lookahead == 'B') ADVANCE(2);
      END_STATE();
    case 20:
      if (lookahead == 'C') ADVANCE(2);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(2);
      END_STATE();
    case 22:
      if (lookahead == 'K') ADVANCE(2);
      END_STATE();
    case 23:
      if (lookahead == 'L') ADVANCE(2);
      END_STATE();
    case 24:
      if (lookahead == 'N') ADVANCE(2);
      END_STATE();
    case 25:
      if (lookahead == 'Q') ADVANCE(2);
      END_STATE();
    case 26:
      if (lookahead == 'T') ADVANCE(2);
      END_STATE();
    case 27:
      if (lookahead == 'X') ADVANCE(2);
      END_STATE();
    case 28:
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(2);
      END_STATE();
    case 29:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 30:
      if (lookahead == 'B' ||
          lookahead == 'X') ADVANCE(2);
      END_STATE();
    case 31:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(45);
      END_STATE();
    case 33:
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(2);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(44);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__integerDecimal);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'b') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(34);
      if (lookahead == 'x') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__integerDecimal);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '_') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__integerDecimal);
      if (lookahead == '_') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__integerHexadecimal);
      if (lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__integerOctal);
      if (lookahead == '_') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__integerBinary);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_double);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_string);
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
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_module] = STATE(5),
    [sym_integer] = STATE(2),
    [sym__number] = STATE(2),
    [sym__text] = STATE(2),
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
    [sym_integer] = STATE(3),
    [sym__number] = STATE(3),
    [sym__text] = STATE(3),
    [aux_sym_module_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym__integerDecimal] = ACTIONS(5),
    [sym__integerHexadecimal] = ACTIONS(7),
    [sym__integerOctal] = ACTIONS(7),
    [sym__integerBinary] = ACTIONS(7),
    [sym_double] = ACTIONS(13),
    [sym_char] = ACTIONS(13),
    [sym_string] = ACTIONS(13),
  },
  [3] = {
    [sym_integer] = STATE(3),
    [sym__number] = STATE(3),
    [sym__text] = STATE(3),
    [aux_sym_module_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym__integerDecimal] = ACTIONS(17),
    [sym__integerHexadecimal] = ACTIONS(20),
    [sym__integerOctal] = ACTIONS(20),
    [sym__integerBinary] = ACTIONS(20),
    [sym_double] = ACTIONS(23),
    [sym_char] = ACTIONS(23),
    [sym_string] = ACTIONS(23),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(26),
    [sym__integerDecimal] = ACTIONS(28),
    [sym__integerHexadecimal] = ACTIONS(26),
    [sym__integerOctal] = ACTIONS(26),
    [sym__integerBinary] = ACTIONS(26),
    [sym_double] = ACTIONS(26),
    [sym_char] = ACTIONS(26),
    [sym_string] = ACTIONS(26),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(4),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(4),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(3),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [30] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
