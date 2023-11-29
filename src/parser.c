#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 14
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_symbol = 1,
  anon_sym_COMMA = 2,
  sym_parameter = 3,
  anon_sym_BC = 4,
  anon_sym_BD = 5,
  anon_sym_BQ = 6,
  anon_sym_BY = 7,
  anon_sym_CF = 8,
  anon_sym_CI = 9,
  anon_sym_CT = 10,
  anon_sym_CV = 11,
  anon_sym_FB = 12,
  anon_sym_FC = 13,
  anon_sym_FD = 14,
  anon_sym_FO = 15,
  anon_sym_FS = 16,
  anon_sym_FV = 17,
  anon_sym_FW = 18,
  anon_sym_FX = 19,
  anon_sym_GB = 20,
  anon_sym_GF = 21,
  anon_sym_LL = 22,
  anon_sym_LH = 23,
  anon_sym_LS = 24,
  anon_sym_PQ = 25,
  anon_sym_PO = 26,
  anon_sym_PW = 27,
  anon_sym_XA = 28,
  anon_sym_XZ = 29,
  anon_sym_A = 30,
  sym_source_file = 31,
  sym__definition = 32,
  sym_function_definition = 33,
  sym_parameter_list = 34,
  sym_command = 35,
  aux_sym_source_file_repeat1 = 36,
  aux_sym_parameter_list_repeat1 = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_symbol] = "symbol",
  [anon_sym_COMMA] = ",",
  [sym_parameter] = "parameter",
  [anon_sym_BC] = "BC",
  [anon_sym_BD] = "BD",
  [anon_sym_BQ] = "BQ",
  [anon_sym_BY] = "BY",
  [anon_sym_CF] = "CF",
  [anon_sym_CI] = "CI",
  [anon_sym_CT] = "CT",
  [anon_sym_CV] = "CV",
  [anon_sym_FB] = "FB",
  [anon_sym_FC] = "FC",
  [anon_sym_FD] = "FD",
  [anon_sym_FO] = "FO",
  [anon_sym_FS] = "FS",
  [anon_sym_FV] = "FV",
  [anon_sym_FW] = "FW",
  [anon_sym_FX] = "FX",
  [anon_sym_GB] = "GB",
  [anon_sym_GF] = "GF",
  [anon_sym_LL] = "LL",
  [anon_sym_LH] = "LH",
  [anon_sym_LS] = "LS",
  [anon_sym_PQ] = "PQ",
  [anon_sym_PO] = "PO",
  [anon_sym_PW] = "PW",
  [anon_sym_XA] = "XA",
  [anon_sym_XZ] = "XZ",
  [anon_sym_A] = "A",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_function_definition] = "function_definition",
  [sym_parameter_list] = "parameter_list",
  [sym_command] = "command",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_symbol] = sym_symbol,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_parameter] = sym_parameter,
  [anon_sym_BC] = anon_sym_BC,
  [anon_sym_BD] = anon_sym_BD,
  [anon_sym_BQ] = anon_sym_BQ,
  [anon_sym_BY] = anon_sym_BY,
  [anon_sym_CF] = anon_sym_CF,
  [anon_sym_CI] = anon_sym_CI,
  [anon_sym_CT] = anon_sym_CT,
  [anon_sym_CV] = anon_sym_CV,
  [anon_sym_FB] = anon_sym_FB,
  [anon_sym_FC] = anon_sym_FC,
  [anon_sym_FD] = anon_sym_FD,
  [anon_sym_FO] = anon_sym_FO,
  [anon_sym_FS] = anon_sym_FS,
  [anon_sym_FV] = anon_sym_FV,
  [anon_sym_FW] = anon_sym_FW,
  [anon_sym_FX] = anon_sym_FX,
  [anon_sym_GB] = anon_sym_GB,
  [anon_sym_GF] = anon_sym_GF,
  [anon_sym_LL] = anon_sym_LL,
  [anon_sym_LH] = anon_sym_LH,
  [anon_sym_LS] = anon_sym_LS,
  [anon_sym_PQ] = anon_sym_PQ,
  [anon_sym_PO] = anon_sym_PO,
  [anon_sym_PW] = anon_sym_PW,
  [anon_sym_XA] = anon_sym_XA,
  [anon_sym_XZ] = anon_sym_XZ,
  [anon_sym_A] = anon_sym_A,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter_list] = sym_parameter_list,
  [sym_command] = sym_command,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CV] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FV] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FW] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PW] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XZ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_A] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == ',') ADVANCE(11);
      if (lookahead == 'A') ADVANCE(40);
      if (lookahead == 'B') ADVANCE(4);
      if (lookahead == 'C') ADVANCE(5);
      if (lookahead == 'F') ADVANCE(2);
      if (lookahead == 'G') ADVANCE(3);
      if (lookahead == 'L') ADVANCE(6);
      if (lookahead == 'P') ADVANCE(7);
      if (lookahead == 'X') ADVANCE(1);
      if (lookahead == '^') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'A') ADVANCE(38);
      if (lookahead == 'Z') ADVANCE(39);
      END_STATE();
    case 2:
      if (lookahead == 'B') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(23);
      if (lookahead == 'D') ADVANCE(24);
      if (lookahead == 'O') ADVANCE(25);
      if (lookahead == 'S') ADVANCE(26);
      if (lookahead == 'V') ADVANCE(27);
      if (lookahead == 'W') ADVANCE(28);
      if (lookahead == 'X') ADVANCE(29);
      END_STATE();
    case 3:
      if (lookahead == 'B') ADVANCE(30);
      if (lookahead == 'F') ADVANCE(31);
      END_STATE();
    case 4:
      if (lookahead == 'C') ADVANCE(14);
      if (lookahead == 'D') ADVANCE(15);
      if (lookahead == 'Q') ADVANCE(16);
      if (lookahead == 'Y') ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == 'F') ADVANCE(18);
      if (lookahead == 'I') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(20);
      if (lookahead == 'V') ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == 'H') ADVANCE(33);
      if (lookahead == 'L') ADVANCE(32);
      if (lookahead == 'S') ADVANCE(34);
      END_STATE();
    case 7:
      if (lookahead == 'O') ADVANCE(36);
      if (lookahead == 'Q') ADVANCE(35);
      if (lookahead == 'W') ADVANCE(37);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == '^') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_symbol);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_parameter);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '^') ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_parameter);
      if (lookahead != 0 &&
          lookahead != '^') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_BC);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_BD);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_BQ);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_BY);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_CF);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_CI);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_CT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_CV);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_FB);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_FC);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_FD);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_FO);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_FV);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_FW);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_FX);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_GB);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_GF);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LL);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LH);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LS);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_PQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_PO);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_PW);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_XA);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_XZ);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_A);
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
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 8},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_BC] = ACTIONS(1),
    [anon_sym_BD] = ACTIONS(1),
    [anon_sym_BQ] = ACTIONS(1),
    [anon_sym_BY] = ACTIONS(1),
    [anon_sym_CF] = ACTIONS(1),
    [anon_sym_CI] = ACTIONS(1),
    [anon_sym_CT] = ACTIONS(1),
    [anon_sym_CV] = ACTIONS(1),
    [anon_sym_FB] = ACTIONS(1),
    [anon_sym_FC] = ACTIONS(1),
    [anon_sym_FD] = ACTIONS(1),
    [anon_sym_FO] = ACTIONS(1),
    [anon_sym_FS] = ACTIONS(1),
    [anon_sym_FV] = ACTIONS(1),
    [anon_sym_FW] = ACTIONS(1),
    [anon_sym_FX] = ACTIONS(1),
    [anon_sym_GB] = ACTIONS(1),
    [anon_sym_GF] = ACTIONS(1),
    [anon_sym_LL] = ACTIONS(1),
    [anon_sym_LH] = ACTIONS(1),
    [anon_sym_LS] = ACTIONS(1),
    [anon_sym_PQ] = ACTIONS(1),
    [anon_sym_PO] = ACTIONS(1),
    [anon_sym_PW] = ACTIONS(1),
    [anon_sym_XA] = ACTIONS(1),
    [anon_sym_XZ] = ACTIONS(1),
    [anon_sym_A] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(12),
    [sym__definition] = STATE(3),
    [sym_function_definition] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_symbol] = ACTIONS(5),
  },
  [2] = {
    [sym_command] = STATE(5),
    [anon_sym_BC] = ACTIONS(7),
    [anon_sym_BD] = ACTIONS(7),
    [anon_sym_BQ] = ACTIONS(7),
    [anon_sym_BY] = ACTIONS(7),
    [anon_sym_CF] = ACTIONS(7),
    [anon_sym_CI] = ACTIONS(7),
    [anon_sym_CT] = ACTIONS(7),
    [anon_sym_CV] = ACTIONS(7),
    [anon_sym_FB] = ACTIONS(7),
    [anon_sym_FC] = ACTIONS(7),
    [anon_sym_FD] = ACTIONS(7),
    [anon_sym_FO] = ACTIONS(7),
    [anon_sym_FS] = ACTIONS(7),
    [anon_sym_FV] = ACTIONS(7),
    [anon_sym_FW] = ACTIONS(7),
    [anon_sym_FX] = ACTIONS(7),
    [anon_sym_GB] = ACTIONS(7),
    [anon_sym_GF] = ACTIONS(7),
    [anon_sym_LL] = ACTIONS(7),
    [anon_sym_LH] = ACTIONS(7),
    [anon_sym_LS] = ACTIONS(7),
    [anon_sym_PQ] = ACTIONS(7),
    [anon_sym_PO] = ACTIONS(7),
    [anon_sym_PW] = ACTIONS(7),
    [anon_sym_XA] = ACTIONS(7),
    [anon_sym_XZ] = ACTIONS(7),
    [anon_sym_A] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(5), 1,
      sym_symbol,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(4), 3,
      sym__definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [12] = 3,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      sym_symbol,
    STATE(4), 3,
      sym__definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [24] = 4,
    ACTIONS(16), 1,
      ts_builtin_sym_end,
    ACTIONS(18), 1,
      sym_symbol,
    ACTIONS(20), 1,
      sym_parameter,
    STATE(11), 1,
      sym_parameter_list,
  [37] = 3,
    ACTIONS(24), 1,
      anon_sym_COMMA,
    STATE(7), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(22), 2,
      ts_builtin_sym_end,
      sym_symbol,
  [48] = 3,
    ACTIONS(24), 1,
      anon_sym_COMMA,
    STATE(8), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(26), 2,
      ts_builtin_sym_end,
      sym_symbol,
  [59] = 3,
    ACTIONS(30), 1,
      anon_sym_COMMA,
    STATE(8), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(28), 2,
      ts_builtin_sym_end,
      sym_symbol,
  [70] = 2,
    ACTIONS(35), 1,
      sym_symbol,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      sym_parameter,
  [78] = 1,
    ACTIONS(28), 3,
      ts_builtin_sym_end,
      sym_symbol,
      anon_sym_COMMA,
  [84] = 1,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      sym_symbol,
  [89] = 1,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
  [93] = 1,
    ACTIONS(41), 1,
      sym_parameter,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 12,
  [SMALL_STATE(5)] = 24,
  [SMALL_STATE(6)] = 37,
  [SMALL_STATE(7)] = 48,
  [SMALL_STATE(8)] = 59,
  [SMALL_STATE(9)] = 70,
  [SMALL_STATE(10)] = 78,
  [SMALL_STATE(11)] = 84,
  [SMALL_STATE(12)] = 89,
  [SMALL_STATE(13)] = 93,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2),
  [18] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 2),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(13),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [39] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_zpl(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
