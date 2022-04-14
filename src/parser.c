#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 0
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  sym__identifierHeadLower = 1,
  sym__identifierHeadUpper = 2,
  anon_sym__ = 3,
  anon_sym_BSLASH = 4,
  aux_sym__identifierRest_token1 = 5,
  anon_sym_DOT = 6,
  sym__integerDecimal = 7,
  sym__integerHexadecimal = 8,
  sym__integerOctal = 9,
  sym__integerBinary = 10,
  sym_double = 11,
  anon_sym_SQUOTE = 12,
  anon_sym_NUL = 13,
  anon_sym_SOH = 14,
  anon_sym_STX = 15,
  anon_sym_ETX = 16,
  anon_sym_EOT = 17,
  anon_sym_ENQ = 18,
  anon_sym_ACK = 19,
  anon_sym_BEL = 20,
  anon_sym_BS = 21,
  anon_sym_HT = 22,
  anon_sym_LF = 23,
  anon_sym_VT = 24,
  anon_sym_FF = 25,
  anon_sym_CR = 26,
  anon_sym_SO = 27,
  anon_sym_SI = 28,
  anon_sym_DLE = 29,
  anon_sym_DC1 = 30,
  anon_sym_DC2 = 31,
  anon_sym_DC3 = 32,
  anon_sym_DC4 = 33,
  anon_sym_NAK = 34,
  anon_sym_SYN = 35,
  anon_sym_ETB = 36,
  anon_sym_CAN = 37,
  anon_sym_EM = 38,
  anon_sym_SUB = 39,
  anon_sym_ESC = 40,
  anon_sym_FS = 41,
  anon_sym_GS = 42,
  anon_sym_RS = 43,
  anon_sym_US = 44,
  anon_sym_SP = 45,
  anon_sym_DEL = 46,
  aux_sym_char_token1 = 47,
  aux_sym_char_token2 = 48,
  aux_sym_char_token3 = 49,
  aux_sym_char_token4 = 50,
  aux_sym_char_token5 = 51,
  anon_sym_DQUOTE = 52,
  anon_sym_BSLASH_LBRACE = 53,
  aux_sym_string_token1 = 54,
  anon_sym_RBRACE = 55,
  anon_sym_BSLASH_BSLASH = 56,
  aux_sym_string_token2 = 57,
  aux_sym_string_token3 = 58,
  sym_module = 59,
  sym_statement = 60,
  sym_expression = 61,
  sym_integer = 62,
  sym__number = 63,
  sym_char = 64,
  sym_string = 65,
  sym__text = 66,
  aux_sym_module_repeat1 = 67,
  aux_sym_string_repeat1 = 68,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__identifierHeadLower] = "_identifierHeadLower",
  [sym__identifierHeadUpper] = "_identifierHeadUpper",
  [anon_sym__] = "_",
  [anon_sym_BSLASH] = "\\",
  [aux_sym__identifierRest_token1] = "_identifierRest_token1",
  [anon_sym_DOT] = ".",
  [sym__integerDecimal] = "_integerDecimal",
  [sym__integerHexadecimal] = "_integerHexadecimal",
  [sym__integerOctal] = "_integerOctal",
  [sym__integerBinary] = "_integerBinary",
  [sym_double] = "double",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_NUL] = "NUL",
  [anon_sym_SOH] = "SOH",
  [anon_sym_STX] = "STX",
  [anon_sym_ETX] = "ETX",
  [anon_sym_EOT] = "EOT",
  [anon_sym_ENQ] = "ENQ",
  [anon_sym_ACK] = "ACK",
  [anon_sym_BEL] = "BEL",
  [anon_sym_BS] = "BS",
  [anon_sym_HT] = "HT",
  [anon_sym_LF] = "LF",
  [anon_sym_VT] = "VT",
  [anon_sym_FF] = "FF",
  [anon_sym_CR] = "CR",
  [anon_sym_SO] = "SO",
  [anon_sym_SI] = "SI",
  [anon_sym_DLE] = "DLE",
  [anon_sym_DC1] = "DC1",
  [anon_sym_DC2] = "DC2",
  [anon_sym_DC3] = "DC3",
  [anon_sym_DC4] = "DC4",
  [anon_sym_NAK] = "NAK",
  [anon_sym_SYN] = "SYN",
  [anon_sym_ETB] = "ETB",
  [anon_sym_CAN] = "CAN",
  [anon_sym_EM] = "EM",
  [anon_sym_SUB] = "SUB",
  [anon_sym_ESC] = "ESC",
  [anon_sym_FS] = "FS",
  [anon_sym_GS] = "GS",
  [anon_sym_RS] = "RS",
  [anon_sym_US] = "US",
  [anon_sym_SP] = "SP",
  [anon_sym_DEL] = "DEL",
  [aux_sym_char_token1] = "char_token1",
  [aux_sym_char_token2] = "char_token2",
  [aux_sym_char_token3] = "char_token3",
  [aux_sym_char_token4] = "char_token4",
  [aux_sym_char_token5] = "char_token5",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_BSLASH_LBRACE] = "\\{",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_RBRACE] = "}",
  [anon_sym_BSLASH_BSLASH] = "\\\\",
  [aux_sym_string_token2] = "string_token2",
  [aux_sym_string_token3] = "string_token3",
  [sym_module] = "module",
  [sym_statement] = "statement",
  [sym_expression] = "expression",
  [sym_integer] = "integer",
  [sym__number] = "_number",
  [sym_char] = "char",
  [sym_string] = "string",
  [sym__text] = "_text",
  [aux_sym_module_repeat1] = "module_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__identifierHeadLower] = sym__identifierHeadLower,
  [sym__identifierHeadUpper] = sym__identifierHeadUpper,
  [anon_sym__] = anon_sym__,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym__identifierRest_token1] = aux_sym__identifierRest_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym__integerDecimal] = sym__integerDecimal,
  [sym__integerHexadecimal] = sym__integerHexadecimal,
  [sym__integerOctal] = sym__integerOctal,
  [sym__integerBinary] = sym__integerBinary,
  [sym_double] = sym_double,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_NUL] = anon_sym_NUL,
  [anon_sym_SOH] = anon_sym_SOH,
  [anon_sym_STX] = anon_sym_STX,
  [anon_sym_ETX] = anon_sym_ETX,
  [anon_sym_EOT] = anon_sym_EOT,
  [anon_sym_ENQ] = anon_sym_ENQ,
  [anon_sym_ACK] = anon_sym_ACK,
  [anon_sym_BEL] = anon_sym_BEL,
  [anon_sym_BS] = anon_sym_BS,
  [anon_sym_HT] = anon_sym_HT,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_VT] = anon_sym_VT,
  [anon_sym_FF] = anon_sym_FF,
  [anon_sym_CR] = anon_sym_CR,
  [anon_sym_SO] = anon_sym_SO,
  [anon_sym_SI] = anon_sym_SI,
  [anon_sym_DLE] = anon_sym_DLE,
  [anon_sym_DC1] = anon_sym_DC1,
  [anon_sym_DC2] = anon_sym_DC2,
  [anon_sym_DC3] = anon_sym_DC3,
  [anon_sym_DC4] = anon_sym_DC4,
  [anon_sym_NAK] = anon_sym_NAK,
  [anon_sym_SYN] = anon_sym_SYN,
  [anon_sym_ETB] = anon_sym_ETB,
  [anon_sym_CAN] = anon_sym_CAN,
  [anon_sym_EM] = anon_sym_EM,
  [anon_sym_SUB] = anon_sym_SUB,
  [anon_sym_ESC] = anon_sym_ESC,
  [anon_sym_FS] = anon_sym_FS,
  [anon_sym_GS] = anon_sym_GS,
  [anon_sym_RS] = anon_sym_RS,
  [anon_sym_US] = anon_sym_US,
  [anon_sym_SP] = anon_sym_SP,
  [anon_sym_DEL] = anon_sym_DEL,
  [aux_sym_char_token1] = aux_sym_char_token1,
  [aux_sym_char_token2] = aux_sym_char_token2,
  [aux_sym_char_token3] = aux_sym_char_token3,
  [aux_sym_char_token4] = aux_sym_char_token4,
  [aux_sym_char_token5] = aux_sym_char_token5,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_BSLASH_LBRACE] = anon_sym_BSLASH_LBRACE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_BSLASH_BSLASH] = anon_sym_BSLASH_BSLASH,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [aux_sym_string_token3] = aux_sym_string_token3,
  [sym_module] = sym_module,
  [sym_statement] = sym_statement,
  [sym_expression] = sym_expression,
  [sym_integer] = sym_integer,
  [sym__number] = sym__number,
  [sym_char] = sym_char,
  [sym_string] = sym_string,
  [sym__text] = sym__text,
  [aux_sym_module_repeat1] = aux_sym_module_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__identifierHeadLower] = {
    .visible = false,
    .named = true,
  },
  [sym__identifierHeadUpper] = {
    .visible = false,
    .named = true,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__identifierRest_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NUL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SOH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ETX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ENQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BEL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DC1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DC2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DC3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DC4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NAK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SYN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ETB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CAN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SUB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ESC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_US] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEL] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token5] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token3] = {
    .visible = false,
    .named = false,
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
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
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
  [aux_sym_string_repeat1] = {
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
      if (eof) ADVANCE(31);
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '\'') ADVANCE(48);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == 'A') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(39);
      if (lookahead == '}') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == 'A') ADVANCE(90);
      if (lookahead == 'B') ADVANCE(92);
      if (lookahead == 'C') ADVANCE(88);
      if (lookahead == 'D') ADVANCE(91);
      if (lookahead == 'E') ADVANCE(96);
      if (lookahead == 'F') ADVANCE(93);
      if (lookahead == 'G') ADVANCE(97);
      if (lookahead == 'H') ADVANCE(100);
      if (lookahead == 'L') ADVANCE(94);
      if (lookahead == 'N') ADVANCE(89);
      if (lookahead == 'R') ADVANCE(98);
      if (lookahead == 'S') ADVANCE(95);
      if (lookahead == 'U') ADVANCE(99);
      if (lookahead == 'V') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(102);
      if (lookahead == 'x') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 3:
      if (lookahead == '1') ADVANCE(66);
      if (lookahead == '2') ADVANCE(67);
      if (lookahead == '3') ADVANCE(68);
      if (lookahead == '4') ADVANCE(69);
      END_STATE();
    case 4:
      if (lookahead == 'B') ADVANCE(72);
      if (lookahead == 'X') ADVANCE(52);
      END_STATE();
    case 5:
      if (lookahead == 'B') ADVANCE(75);
      END_STATE();
    case 6:
      if (lookahead == 'C') ADVANCE(76);
      END_STATE();
    case 7:
      if (lookahead == 'E') ADVANCE(65);
      END_STATE();
    case 8:
      if (lookahead == 'K') ADVANCE(55);
      END_STATE();
    case 9:
      if (lookahead == 'K') ADVANCE(70);
      END_STATE();
    case 10:
      if (lookahead == 'L') ADVANCE(56);
      END_STATE();
    case 11:
      if (lookahead == 'L') ADVANCE(82);
      END_STATE();
    case 12:
      if (lookahead == 'L') ADVANCE(49);
      END_STATE();
    case 13:
      if (lookahead == 'N') ADVANCE(73);
      END_STATE();
    case 14:
      if (lookahead == 'N') ADVANCE(71);
      END_STATE();
    case 15:
      if (lookahead == 'Q') ADVANCE(54);
      END_STATE();
    case 16:
      if (lookahead == 'T') ADVANCE(53);
      END_STATE();
    case 17:
      if (lookahead == 'X') ADVANCE(51);
      END_STATE();
    case 18:
      if (lookahead == 'Z') ADVANCE(33);
      END_STATE();
    case 19:
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(104);
      END_STATE();
    case 20:
      if (lookahead == 'z') ADVANCE(32);
      END_STATE();
    case 21:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 22:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(46);
      END_STATE();
    case 24:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(109);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(45);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 30:
      if (eof) ADVANCE(31);
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '\'') ADVANCE(48);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__identifierHeadLower);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__identifierHeadUpper);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__identifierRest_token1);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__identifierRest_token1);
      if (lookahead == '-') ADVANCE(18);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym__identifierRest_token1);
      if (lookahead == '-') ADVANCE(20);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym__identifierRest_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(83);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__integerDecimal);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(25);
      if (lookahead == 'x') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__integerDecimal);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '_') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__integerDecimal);
      if (lookahead == '_') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__integerHexadecimal);
      if (lookahead == '_') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__integerOctal);
      if (lookahead == '_') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__integerBinary);
      if (lookahead == '_') ADVANCE(23);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_double);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_NUL);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_SOH);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_STX);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_HT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_VT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == 'H') ADVANCE(50);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_SI);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_NAK);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_SYN);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_SUB);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_GS);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RS);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_US);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_SP);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_char_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_char_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_char_token4);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'A') ADVANCE(90);
      if (lookahead == 'B') ADVANCE(92);
      if (lookahead == 'C') ADVANCE(88);
      if (lookahead == 'D') ADVANCE(91);
      if (lookahead == 'E') ADVANCE(96);
      if (lookahead == 'F') ADVANCE(93);
      if (lookahead == 'G') ADVANCE(97);
      if (lookahead == 'H') ADVANCE(100);
      if (lookahead == 'L') ADVANCE(94);
      if (lookahead == 'N') ADVANCE(89);
      if (lookahead == 'R') ADVANCE(98);
      if (lookahead == 'S') ADVANCE(95);
      if (lookahead == 'U') ADVANCE(99);
      if (lookahead == 'V') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(102);
      if (lookahead == 'x') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(86);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'A') ADVANCE(13);
      if (lookahead == 'R') ADVANCE(62);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'A') ADVANCE(9);
      if (lookahead == 'U') ADVANCE(12);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'C') ADVANCE(8);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'C') ADVANCE(3);
      if (lookahead == 'E') ADVANCE(11);
      if (lookahead == 'L') ADVANCE(7);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'E') ADVANCE(10);
      if (lookahead == 'S') ADVANCE(57);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'F') ADVANCE(61);
      if (lookahead == 'S') ADVANCE(77);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'F') ADVANCE(59);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'I') ADVANCE(64);
      if (lookahead == 'O') ADVANCE(63);
      if (lookahead == 'P') ADVANCE(81);
      if (lookahead == 'T') ADVANCE(17);
      if (lookahead == 'U') ADVANCE(5);
      if (lookahead == 'Y') ADVANCE(14);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'M') ADVANCE(74);
      if (lookahead == 'N') ADVANCE(15);
      if (lookahead == 'O') ADVANCE(16);
      if (lookahead == 'S') ADVANCE(6);
      if (lookahead == 'T') ADVANCE(4);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'S') ADVANCE(78);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'S') ADVANCE(79);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'S') ADVANCE(80);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'T') ADVANCE(58);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'T') ADVANCE(60);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(83);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_char_token5);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_char_token5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(104);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_BSLASH_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(116);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(116);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(116);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(116);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '\\') ADVANCE(111);
      if (lookahead == '{') ADVANCE(107);
      if (lookahead == '\r' ||
          lookahead == '"') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(116);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 30},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 30},
  [4] = {.lex_state = 30},
  [5] = {.lex_state = 30},
  [6] = {.lex_state = 30},
  [7] = {.lex_state = 30},
  [8] = {.lex_state = 30},
  [9] = {.lex_state = 30},
  [10] = {.lex_state = 30},
  [11] = {.lex_state = 30},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 19},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 24},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__identifierHeadLower] = ACTIONS(1),
    [sym__identifierHeadUpper] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [aux_sym__identifierRest_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym__integerDecimal] = ACTIONS(1),
    [sym__integerHexadecimal] = ACTIONS(1),
    [sym__integerOctal] = ACTIONS(1),
    [sym__integerBinary] = ACTIONS(1),
    [sym_double] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_char_token1] = ACTIONS(1),
    [aux_sym_char_token3] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_module] = STATE(20),
    [sym_statement] = STATE(3),
    [sym_expression] = STATE(6),
    [sym_integer] = STATE(7),
    [sym__number] = STATE(7),
    [sym_char] = STATE(7),
    [sym_string] = STATE(7),
    [sym__text] = STATE(7),
    [aux_sym_module_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__integerDecimal] = ACTIONS(5),
    [sym__integerHexadecimal] = ACTIONS(7),
    [sym__integerOctal] = ACTIONS(7),
    [sym__integerBinary] = ACTIONS(7),
    [sym_double] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
  },
  [2] = {
    [anon_sym_NUL] = ACTIONS(15),
    [anon_sym_SOH] = ACTIONS(15),
    [anon_sym_STX] = ACTIONS(15),
    [anon_sym_ETX] = ACTIONS(15),
    [anon_sym_EOT] = ACTIONS(15),
    [anon_sym_ENQ] = ACTIONS(15),
    [anon_sym_ACK] = ACTIONS(15),
    [anon_sym_BEL] = ACTIONS(15),
    [anon_sym_BS] = ACTIONS(15),
    [anon_sym_HT] = ACTIONS(15),
    [anon_sym_LF] = ACTIONS(15),
    [anon_sym_VT] = ACTIONS(15),
    [anon_sym_FF] = ACTIONS(15),
    [anon_sym_CR] = ACTIONS(15),
    [anon_sym_SO] = ACTIONS(15),
    [anon_sym_SI] = ACTIONS(15),
    [anon_sym_DLE] = ACTIONS(15),
    [anon_sym_DC1] = ACTIONS(15),
    [anon_sym_DC2] = ACTIONS(15),
    [anon_sym_DC3] = ACTIONS(15),
    [anon_sym_DC4] = ACTIONS(15),
    [anon_sym_NAK] = ACTIONS(15),
    [anon_sym_SYN] = ACTIONS(15),
    [anon_sym_ETB] = ACTIONS(15),
    [anon_sym_CAN] = ACTIONS(15),
    [anon_sym_EM] = ACTIONS(15),
    [anon_sym_SUB] = ACTIONS(15),
    [anon_sym_ESC] = ACTIONS(15),
    [anon_sym_FS] = ACTIONS(15),
    [anon_sym_GS] = ACTIONS(15),
    [anon_sym_RS] = ACTIONS(15),
    [anon_sym_US] = ACTIONS(15),
    [anon_sym_SP] = ACTIONS(15),
    [anon_sym_DEL] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(15),
    [aux_sym_char_token3] = ACTIONS(15),
    [aux_sym_char_token4] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(5), 1,
      sym__integerDecimal,
    ACTIONS(9), 1,
      sym_double,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_expression,
    STATE(4), 2,
      sym_statement,
      aux_sym_module_repeat1,
    ACTIONS(7), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(7), 5,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [35] = 9,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym__integerDecimal,
    ACTIONS(27), 1,
      sym_double,
    ACTIONS(30), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(6), 1,
      sym_expression,
    STATE(4), 2,
      sym_statement,
      aux_sym_module_repeat1,
    ACTIONS(24), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(7), 5,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [70] = 2,
    ACTIONS(38), 1,
      sym__integerDecimal,
    ACTIONS(36), 7,
      ts_builtin_sym_end,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
      sym_double,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [83] = 2,
    ACTIONS(42), 1,
      sym__integerDecimal,
    ACTIONS(40), 7,
      ts_builtin_sym_end,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
      sym_double,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [96] = 2,
    ACTIONS(46), 1,
      sym__integerDecimal,
    ACTIONS(44), 7,
      ts_builtin_sym_end,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
      sym_double,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [109] = 2,
    ACTIONS(50), 1,
      sym__integerDecimal,
    ACTIONS(48), 7,
      ts_builtin_sym_end,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
      sym_double,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [122] = 2,
    ACTIONS(54), 1,
      sym__integerDecimal,
    ACTIONS(52), 7,
      ts_builtin_sym_end,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
      sym_double,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [135] = 2,
    ACTIONS(58), 1,
      sym__integerDecimal,
    ACTIONS(56), 7,
      ts_builtin_sym_end,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
      sym_double,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [148] = 2,
    ACTIONS(62), 1,
      sym__integerDecimal,
    ACTIONS(60), 7,
      ts_builtin_sym_end,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
      sym_double,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [161] = 4,
    ACTIONS(64), 1,
      anon_sym_DQUOTE,
    ACTIONS(66), 1,
      anon_sym_BSLASH_LBRACE,
    STATE(12), 1,
      aux_sym_string_repeat1,
    ACTIONS(69), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [176] = 4,
    ACTIONS(72), 1,
      anon_sym_DQUOTE,
    ACTIONS(74), 1,
      anon_sym_BSLASH_LBRACE,
    STATE(14), 1,
      aux_sym_string_repeat1,
    ACTIONS(76), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [191] = 4,
    ACTIONS(74), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      aux_sym_string_repeat1,
    ACTIONS(80), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [206] = 1,
    ACTIONS(82), 5,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_LBRACE,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [214] = 2,
    ACTIONS(84), 1,
      anon_sym_BSLASH,
    ACTIONS(86), 1,
      aux_sym_char_token5,
  [221] = 1,
    ACTIONS(88), 1,
      anon_sym_SQUOTE,
  [225] = 1,
    ACTIONS(90), 1,
      anon_sym_SQUOTE,
  [229] = 1,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
  [233] = 1,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
  [237] = 1,
    ACTIONS(96), 1,
      aux_sym_string_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 35,
  [SMALL_STATE(5)] = 70,
  [SMALL_STATE(6)] = 83,
  [SMALL_STATE(7)] = 96,
  [SMALL_STATE(8)] = 109,
  [SMALL_STATE(9)] = 122,
  [SMALL_STATE(10)] = 135,
  [SMALL_STATE(11)] = 148,
  [SMALL_STATE(12)] = 161,
  [SMALL_STATE(13)] = 176,
  [SMALL_STATE(14)] = 191,
  [SMALL_STATE(15)] = 206,
  [SMALL_STATE(16)] = 214,
  [SMALL_STATE(17)] = 221,
  [SMALL_STATE(18)] = 225,
  [SMALL_STATE(19)] = 229,
  [SMALL_STATE(20)] = 233,
  [SMALL_STATE(21)] = 237,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(5),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(5),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(7),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(16),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(13),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 4),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 4),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(21),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(12),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [94] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
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
