#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 100
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 3
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 6

enum {
  aux_sym__block_item_token1 = 1,
  anon_sym_EQ = 2,
  anon_sym_LF = 3,
  anon_sym_GT = 4,
  anon_sym_LT = 5,
  aux_sym_reference_line_token1 = 6,
  anon_sym_COLON_EQ = 7,
  anon_sym_LBRACK = 8,
  aux_sym_condition_token1 = 9,
  anon_sym_RBRACK = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  anon_sym_LBRACE_DOLLAR = 13,
  aux_sym_constant_token1 = 14,
  aux_sym_value_token1 = 15,
  anon_sym_LPAREN = 16,
  aux_sym_multiline_value_token1 = 17,
  anon_sym_RPAREN = 18,
  sym_identifier = 19,
  sym_modifier_function = 20,
  anon_sym_COMMA = 21,
  aux_sym_modifier_parameter_token1 = 22,
  sym_comment = 23,
  sym_single_line_comment = 24,
  anon_sym_DQUOTE = 25,
  aux_sym_string_token1 = 26,
  anon_sym_SQUOTE = 27,
  aux_sym_string_token2 = 28,
  anon_sym_INCLUDE_TYPOSCRIPT = 29,
  anon_sym_COLON = 30,
  aux_sym_import_legacy_token1 = 31,
  anon_sym_source_EQ = 32,
  aux_sym_import_legacy_token2 = 33,
  anon_sym_ATimport = 34,
  sym_typoscript = 35,
  sym__block_item = 36,
  sym_assignment_line = 37,
  sym_deletion_line = 38,
  sym_copy_line = 39,
  sym_reference_line = 40,
  sym_modification_line = 41,
  sym_configuration_block = 42,
  sym_condition = 43,
  sym_block = 44,
  sym_constant = 45,
  sym_value = 46,
  sym_multiline_value = 47,
  sym_modifier_parameters = 48,
  sym_modifier_parameter = 49,
  sym__comments = 50,
  sym_string = 51,
  sym__imports = 52,
  sym_import_legacy = 53,
  sym_import = 54,
  aux_sym_typoscript_repeat1 = 55,
  aux_sym_block_repeat1 = 56,
  aux_sym_value_repeat1 = 57,
  aux_sym_multiline_value_repeat1 = 58,
  aux_sym_modifier_parameters_repeat1 = 59,
  aux_sym_modifier_parameter_repeat1 = 60,
  aux_sym_string_repeat1 = 61,
  aux_sym_string_repeat2 = 62,
  alias_sym_condition_attribute = 63,
  alias_sym_copy_identifier = 64,
  alias_sym_reference_identifier = 65,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__block_item_token1] = "_block_item_token1",
  [anon_sym_EQ] = "=",
  [anon_sym_LF] = "\n",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [aux_sym_reference_line_token1] = "reference_line_token1",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_LBRACK] = "[",
  [aux_sym_condition_token1] = "condition_token1",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "block_punctuation",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE_DOLLAR] = "{$",
  [aux_sym_constant_token1] = "constant_token1",
  [aux_sym_value_token1] = "value_token1",
  [anon_sym_LPAREN] = "(",
  [aux_sym_multiline_value_token1] = "multiline_value_token1",
  [anon_sym_RPAREN] = ")",
  [sym_identifier] = "identifier",
  [sym_modifier_function] = "modifier_function",
  [anon_sym_COMMA] = ",",
  [aux_sym_modifier_parameter_token1] = "modifier_parameter_token1",
  [sym_comment] = "comment",
  [sym_single_line_comment] = "single_line_comment",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_INCLUDE_TYPOSCRIPT] = "INCLUDE_TYPOSCRIPT",
  [anon_sym_COLON] = ":",
  [aux_sym_import_legacy_token1] = "import_legacy_token1",
  [anon_sym_source_EQ] = "source=",
  [aux_sym_import_legacy_token2] = "import_legacy_token2",
  [anon_sym_ATimport] = "@import",
  [sym_typoscript] = "typoscript",
  [sym__block_item] = "_block_item",
  [sym_assignment_line] = "assignment_line",
  [sym_deletion_line] = "deletion_line",
  [sym_copy_line] = "copy_line",
  [sym_reference_line] = "reference_line",
  [sym_modification_line] = "modification_line",
  [sym_configuration_block] = "configuration_block",
  [sym_condition] = "condition",
  [sym_block] = "block",
  [sym_constant] = "constant",
  [sym_value] = "value",
  [sym_multiline_value] = "multiline_value",
  [sym_modifier_parameters] = "modifier_parameters",
  [sym_modifier_parameter] = "modifier_parameter",
  [sym__comments] = "_comments",
  [sym_string] = "string",
  [sym__imports] = "_imports",
  [sym_import_legacy] = "import_legacy",
  [sym_import] = "import",
  [aux_sym_typoscript_repeat1] = "typoscript_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
  [aux_sym_multiline_value_repeat1] = "multiline_value_repeat1",
  [aux_sym_modifier_parameters_repeat1] = "modifier_parameters_repeat1",
  [aux_sym_modifier_parameter_repeat1] = "modifier_parameter_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [alias_sym_condition_attribute] = "condition_attribute",
  [alias_sym_copy_identifier] = "copy_identifier",
  [alias_sym_reference_identifier] = "reference_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__block_item_token1] = aux_sym__block_item_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_reference_line_token1] = aux_sym_reference_line_token1,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_condition_token1] = aux_sym_condition_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACE_DOLLAR] = anon_sym_LBRACE_DOLLAR,
  [aux_sym_constant_token1] = aux_sym_constant_token1,
  [aux_sym_value_token1] = aux_sym_value_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_multiline_value_token1] = aux_sym_multiline_value_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_identifier] = sym_identifier,
  [sym_modifier_function] = sym_modifier_function,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_modifier_parameter_token1] = aux_sym_modifier_parameter_token1,
  [sym_comment] = sym_comment,
  [sym_single_line_comment] = sym_single_line_comment,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_INCLUDE_TYPOSCRIPT] = anon_sym_INCLUDE_TYPOSCRIPT,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_import_legacy_token1] = aux_sym_import_legacy_token1,
  [anon_sym_source_EQ] = anon_sym_source_EQ,
  [aux_sym_import_legacy_token2] = aux_sym_import_legacy_token2,
  [anon_sym_ATimport] = anon_sym_ATimport,
  [sym_typoscript] = sym_typoscript,
  [sym__block_item] = sym__block_item,
  [sym_assignment_line] = sym_assignment_line,
  [sym_deletion_line] = sym_deletion_line,
  [sym_copy_line] = sym_copy_line,
  [sym_reference_line] = sym_reference_line,
  [sym_modification_line] = sym_modification_line,
  [sym_configuration_block] = sym_configuration_block,
  [sym_condition] = sym_condition,
  [sym_block] = sym_block,
  [sym_constant] = sym_constant,
  [sym_value] = sym_value,
  [sym_multiline_value] = sym_multiline_value,
  [sym_modifier_parameters] = sym_modifier_parameters,
  [sym_modifier_parameter] = sym_modifier_parameter,
  [sym__comments] = sym__comments,
  [sym_string] = sym_string,
  [sym__imports] = sym__imports,
  [sym_import_legacy] = sym_import_legacy,
  [sym_import] = sym_import,
  [aux_sym_typoscript_repeat1] = aux_sym_typoscript_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_value_repeat1] = aux_sym_value_repeat1,
  [aux_sym_multiline_value_repeat1] = aux_sym_multiline_value_repeat1,
  [aux_sym_modifier_parameters_repeat1] = aux_sym_modifier_parameters_repeat1,
  [aux_sym_modifier_parameter_repeat1] = aux_sym_modifier_parameter_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [alias_sym_condition_attribute] = alias_sym_condition_attribute,
  [alias_sym_copy_identifier] = alias_sym_copy_identifier,
  [alias_sym_reference_identifier] = alias_sym_reference_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__block_item_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_reference_line_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_condition_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_constant_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_multiline_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier_function] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_modifier_parameter_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_single_line_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_INCLUDE_TYPOSCRIPT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_import_legacy_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_source_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_import_legacy_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_ATimport] = {
    .visible = true,
    .named = false,
  },
  [sym_typoscript] = {
    .visible = true,
    .named = true,
  },
  [sym__block_item] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment_line] = {
    .visible = true,
    .named = true,
  },
  [sym_deletion_line] = {
    .visible = true,
    .named = true,
  },
  [sym_copy_line] = {
    .visible = true,
    .named = true,
  },
  [sym_reference_line] = {
    .visible = true,
    .named = true,
  },
  [sym_modification_line] = {
    .visible = true,
    .named = true,
  },
  [sym_configuration_block] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_value] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__comments] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__imports] = {
    .visible = false,
    .named = true,
  },
  [sym_import_legacy] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_typoscript_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiline_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_modifier_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_modifier_parameter_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_condition_attribute] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_copy_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_reference_identifier] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = anon_sym_LBRACE,
  },
  [2] = {
    [2] = alias_sym_copy_identifier,
  },
  [3] = {
    [2] = alias_sym_reference_identifier,
  },
  [4] = {
    [2] = anon_sym_LBRACE,
  },
  [5] = {
    [7] = alias_sym_condition_attribute,
  },
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
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 33,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 37,
  [43] = 43,
  [44] = 44,
  [45] = 31,
  [46] = 35,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 47,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 47,
  [59] = 59,
  [60] = 47,
  [61] = 47,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 7,
  [69] = 8,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 73,
  [93] = 73,
  [94] = 73,
  [95] = 73,
  [96] = 81,
  [97] = 81,
  [98] = 81,
  [99] = 81,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(48);
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == ',') ADVANCE(96);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(53);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == 'I') ADVANCE(71);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(53);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '{') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '{') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 7:
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == ',') ADVANCE(96);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 8:
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '{') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(101);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 13:
      if (lookahead == '<') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(116);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(118);
      END_STATE();
    case 17:
      if (lookahead == 'C') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'C') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 'D') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(34);
      END_STATE();
    case 21:
      if (lookahead == 'I') ADVANCE(24);
      if (lookahead == 's') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == 'I') ADVANCE(27);
      END_STATE();
    case 23:
      if (lookahead == 'L') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == 'N') ADVANCE(17);
      END_STATE();
    case 25:
      if (lookahead == 'O') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == 'P') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == 'P') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == 'R') ADVANCE(22);
      END_STATE();
    case 29:
      if (lookahead == 'S') ADVANCE(18);
      END_STATE();
    case 30:
      if (lookahead == 'T') ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == 'T') ADVANCE(110);
      END_STATE();
    case 32:
      if (lookahead == 'U') ADVANCE(19);
      END_STATE();
    case 33:
      if (lookahead == 'Y') ADVANCE(26);
      END_STATE();
    case 34:
      if (lookahead == '_') ADVANCE(30);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 41:
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 46:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(46)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 47:
      if (eof) ADVANCE(48);
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(53);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym__block_item_token1);
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '<') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_reference_line_token1);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '$') ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LBRACE_DOLLAR);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == 'C') ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == 'C') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == 'D') ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == 'E') ADVANCE(81);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == 'I') ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == 'L') ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == 'N') ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == 'O') ADVANCE(76);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == 'P') ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == 'P') ADVANCE(78);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == 'R') ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == 'S') ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == 'T') ADVANCE(80);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == 'T') ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == 'U') ADVANCE(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == 'Y') ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == '_') ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_value_token1);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '$') ADVANCE(64);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(84);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(84);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_multiline_value_token1);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_multiline_value_token1);
      if (lookahead == '$') ADVANCE(64);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_multiline_value_token1);
      if (lookahead == '{') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(89);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_modifier_parameter_token1);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_modifier_parameter_token1);
      if (lookahead == '$') ADVANCE(64);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_modifier_parameter_token1);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(97);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '$') ADVANCE(64);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(103);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(64);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '{') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(107);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_INCLUDE_TYPOSCRIPT);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_INCLUDE_TYPOSCRIPT);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_import_legacy_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_import_legacy_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_source_EQ);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_import_legacy_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_import_legacy_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_ATimport);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 47},
  [2] = {.lex_state = 47},
  [3] = {.lex_state = 47},
  [4] = {.lex_state = 47},
  [5] = {.lex_state = 47},
  [6] = {.lex_state = 47},
  [7] = {.lex_state = 47},
  [8] = {.lex_state = 47},
  [9] = {.lex_state = 47},
  [10] = {.lex_state = 47},
  [11] = {.lex_state = 47},
  [12] = {.lex_state = 47},
  [13] = {.lex_state = 47},
  [14] = {.lex_state = 47},
  [15] = {.lex_state = 47},
  [16] = {.lex_state = 47},
  [17] = {.lex_state = 47},
  [18] = {.lex_state = 47},
  [19] = {.lex_state = 47},
  [20] = {.lex_state = 47},
  [21] = {.lex_state = 47},
  [22] = {.lex_state = 47},
  [23] = {.lex_state = 47},
  [24] = {.lex_state = 47},
  [25] = {.lex_state = 47},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 47},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 16},
  [69] = {.lex_state = 16},
  [70] = {.lex_state = 12},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 21},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 12},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 46},
  [82] = {.lex_state = 21},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 114},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 47},
  [87] = {.lex_state = 47},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 12},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 58},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 46},
  [97] = {.lex_state = 46},
  [98] = {.lex_state = 46},
  [99] = {.lex_state = 46},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [aux_sym_reference_line_token1] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_DOLLAR] = ACTIONS(1),
    [aux_sym_constant_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_modifier_function] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_single_line_comment] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_INCLUDE_TYPOSCRIPT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_ATimport] = ACTIONS(1),
  },
  [1] = {
    [sym_typoscript] = STATE(90),
    [sym__block_item] = STATE(5),
    [sym_assignment_line] = STATE(5),
    [sym_deletion_line] = STATE(5),
    [sym_copy_line] = STATE(5),
    [sym_reference_line] = STATE(5),
    [sym_modification_line] = STATE(5),
    [sym_configuration_block] = STATE(5),
    [sym_condition] = STATE(5),
    [sym__imports] = STATE(5),
    [sym_import_legacy] = STATE(5),
    [sym_import] = STATE(5),
    [aux_sym_typoscript_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__block_item_token1] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym_comment] = ACTIONS(5),
    [sym_single_line_comment] = ACTIONS(5),
    [anon_sym_ATimport] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_ATimport,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 3,
      aux_sym__block_item_token1,
      sym_comment,
      sym_single_line_comment,
    STATE(4), 12,
      sym__block_item,
      sym_assignment_line,
      sym_deletion_line,
      sym_copy_line,
      sym_reference_line,
      sym_modification_line,
      sym_configuration_block,
      sym_condition,
      sym__imports,
      sym_import_legacy,
      sym_import,
      aux_sym_block_repeat1,
  [35] = 7,
    ACTIONS(22), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(28), 1,
      anon_sym_RBRACE,
    ACTIONS(30), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_ATimport,
    ACTIONS(19), 3,
      aux_sym__block_item_token1,
      sym_comment,
      sym_single_line_comment,
    STATE(3), 12,
      sym__block_item,
      sym_assignment_line,
      sym_deletion_line,
      sym_copy_line,
      sym_reference_line,
      sym_modification_line,
      sym_configuration_block,
      sym_condition,
      sym__imports,
      sym_import_legacy,
      sym_import,
      aux_sym_block_repeat1,
  [70] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_ATimport,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    ACTIONS(36), 3,
      aux_sym__block_item_token1,
      sym_comment,
      sym_single_line_comment,
    STATE(3), 12,
      sym__block_item,
      sym_assignment_line,
      sym_deletion_line,
      sym_copy_line,
      sym_reference_line,
      sym_modification_line,
      sym_configuration_block,
      sym_condition,
      sym__imports,
      sym_import_legacy,
      sym_import,
      aux_sym_block_repeat1,
  [105] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_ATimport,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 3,
      aux_sym__block_item_token1,
      sym_comment,
      sym_single_line_comment,
    STATE(6), 12,
      sym__block_item,
      sym_assignment_line,
      sym_deletion_line,
      sym_copy_line,
      sym_reference_line,
      sym_modification_line,
      sym_configuration_block,
      sym_condition,
      sym__imports,
      sym_import_legacy,
      sym_import,
      aux_sym_typoscript_repeat1,
  [140] = 7,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      anon_sym_LT,
    ACTIONS(52), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(58), 1,
      anon_sym_ATimport,
    ACTIONS(46), 3,
      aux_sym__block_item_token1,
      sym_comment,
      sym_single_line_comment,
    STATE(6), 12,
      sym__block_item,
      sym_assignment_line,
      sym_deletion_line,
      sym_copy_line,
      sym_reference_line,
      sym_modification_line,
      sym_configuration_block,
      sym_condition,
      sym__imports,
      sym_import_legacy,
      sym_import,
      aux_sym_typoscript_repeat1,
  [175] = 1,
    ACTIONS(61), 10,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [188] = 1,
    ACTIONS(63), 10,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [201] = 1,
    ACTIONS(65), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [213] = 1,
    ACTIONS(67), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [225] = 1,
    ACTIONS(69), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [237] = 1,
    ACTIONS(71), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [249] = 1,
    ACTIONS(73), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [261] = 1,
    ACTIONS(75), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [273] = 1,
    ACTIONS(77), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [285] = 1,
    ACTIONS(79), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [297] = 1,
    ACTIONS(81), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [309] = 1,
    ACTIONS(83), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [321] = 1,
    ACTIONS(85), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [333] = 1,
    ACTIONS(87), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [345] = 1,
    ACTIONS(89), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [357] = 1,
    ACTIONS(91), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [369] = 1,
    ACTIONS(93), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [381] = 1,
    ACTIONS(95), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [393] = 1,
    ACTIONS(97), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [405] = 6,
    ACTIONS(99), 1,
      anon_sym_LF,
    ACTIONS(101), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(103), 1,
      aux_sym_value_token1,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    STATE(40), 2,
      sym_constant,
      aux_sym_value_repeat1,
    STATE(79), 2,
      sym_value,
      sym_multiline_value,
  [426] = 7,
    ACTIONS(107), 1,
      anon_sym_EQ,
    ACTIONS(109), 1,
      anon_sym_GT,
    ACTIONS(111), 1,
      anon_sym_LT,
    ACTIONS(113), 1,
      aux_sym_reference_line_token1,
    ACTIONS(115), 1,
      anon_sym_COLON_EQ,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_block,
  [448] = 5,
    ACTIONS(119), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    ACTIONS(123), 1,
      aux_sym_modifier_parameter_token1,
    STATE(63), 1,
      sym_modifier_parameter,
    STATE(29), 2,
      sym_constant,
      aux_sym_modifier_parameter_repeat1,
  [465] = 4,
    ACTIONS(119), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(127), 1,
      aux_sym_modifier_parameter_token1,
    ACTIONS(125), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(30), 2,
      sym_constant,
      aux_sym_modifier_parameter_repeat1,
  [480] = 4,
    ACTIONS(129), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(134), 1,
      aux_sym_modifier_parameter_token1,
    ACTIONS(132), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(30), 2,
      sym_constant,
      aux_sym_modifier_parameter_repeat1,
  [495] = 4,
    ACTIONS(137), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      aux_sym_string_token1,
    STATE(42), 2,
      sym_constant,
      aux_sym_string_repeat1,
  [509] = 4,
    ACTIONS(143), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(146), 1,
      aux_sym_multiline_value_token1,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    STATE(32), 2,
      sym_constant,
      aux_sym_multiline_value_repeat1,
  [523] = 4,
    ACTIONS(151), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_string_token2,
    STATE(36), 2,
      sym_constant,
      aux_sym_string_repeat2,
  [537] = 4,
    ACTIONS(119), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(123), 1,
      aux_sym_modifier_parameter_token1,
    STATE(65), 1,
      sym_modifier_parameter,
    STATE(29), 2,
      sym_constant,
      aux_sym_modifier_parameter_repeat1,
  [551] = 4,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(151), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(157), 1,
      aux_sym_string_token2,
    STATE(33), 2,
      sym_constant,
      aux_sym_string_repeat2,
  [565] = 4,
    ACTIONS(159), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(162), 1,
      anon_sym_SQUOTE,
    ACTIONS(164), 1,
      aux_sym_string_token2,
    STATE(36), 2,
      sym_constant,
      aux_sym_string_repeat2,
  [579] = 4,
    ACTIONS(137), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      aux_sym_string_token1,
    STATE(39), 2,
      sym_constant,
      aux_sym_string_repeat1,
  [593] = 4,
    ACTIONS(151), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(155), 1,
      aux_sym_string_token2,
    ACTIONS(167), 1,
      anon_sym_SQUOTE,
    STATE(36), 2,
      sym_constant,
      aux_sym_string_repeat2,
  [607] = 4,
    ACTIONS(171), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(176), 1,
      aux_sym_string_token1,
    STATE(39), 2,
      sym_constant,
      aux_sym_string_repeat1,
  [621] = 4,
    ACTIONS(101), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(179), 1,
      anon_sym_LF,
    ACTIONS(181), 1,
      aux_sym_value_token1,
    STATE(43), 2,
      sym_constant,
      aux_sym_value_repeat1,
  [635] = 4,
    ACTIONS(183), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(185), 1,
      aux_sym_multiline_value_token1,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
    STATE(32), 2,
      sym_constant,
      aux_sym_multiline_value_repeat1,
  [649] = 4,
    ACTIONS(137), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      aux_sym_string_token1,
    STATE(39), 2,
      sym_constant,
      aux_sym_string_repeat1,
  [663] = 4,
    ACTIONS(189), 1,
      anon_sym_LF,
    ACTIONS(191), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(194), 1,
      aux_sym_value_token1,
    STATE(43), 2,
      sym_constant,
      aux_sym_value_repeat1,
  [677] = 4,
    ACTIONS(183), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(197), 1,
      aux_sym_multiline_value_token1,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
    STATE(41), 2,
      sym_constant,
      aux_sym_multiline_value_repeat1,
  [691] = 4,
    ACTIONS(137), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    ACTIONS(203), 1,
      aux_sym_string_token1,
    STATE(37), 2,
      sym_constant,
      aux_sym_string_repeat1,
  [705] = 4,
    ACTIONS(151), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      aux_sym_string_token2,
    STATE(38), 2,
      sym_constant,
      aux_sym_string_repeat2,
  [719] = 1,
    ACTIONS(207), 4,
      anon_sym_LBRACE_DOLLAR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_modifier_parameter_token1,
  [726] = 3,
    ACTIONS(209), 1,
      anon_sym_LF,
    STATE(74), 1,
      sym__comments,
    ACTIONS(211), 2,
      sym_comment,
      sym_single_line_comment,
  [737] = 3,
    ACTIONS(213), 1,
      anon_sym_LF,
    STATE(85), 1,
      sym__comments,
    ACTIONS(215), 2,
      sym_comment,
      sym_single_line_comment,
  [748] = 3,
    ACTIONS(217), 1,
      anon_sym_LF,
    STATE(83), 1,
      sym__comments,
    ACTIONS(219), 2,
      sym_comment,
      sym_single_line_comment,
  [759] = 3,
    ACTIONS(221), 1,
      anon_sym_LF,
    STATE(77), 1,
      sym__comments,
    ACTIONS(223), 2,
      sym_comment,
      sym_single_line_comment,
  [770] = 3,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      aux_sym_modifier_parameters_repeat1,
  [780] = 1,
    ACTIONS(207), 3,
      anon_sym_LBRACE_DOLLAR,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
  [786] = 3,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    STATE(80), 1,
      sym_string,
  [796] = 3,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      aux_sym_modifier_parameters_repeat1,
  [806] = 1,
    ACTIONS(238), 3,
      anon_sym_LF,
      sym_comment,
      sym_single_line_comment,
  [812] = 3,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    STATE(67), 1,
      sym_string,
  [822] = 1,
    ACTIONS(207), 3,
      anon_sym_LF,
      anon_sym_LBRACE_DOLLAR,
      aux_sym_value_token1,
  [828] = 3,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    STATE(18), 1,
      sym_string,
  [838] = 1,
    ACTIONS(207), 3,
      anon_sym_LBRACE_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_string_token2,
  [844] = 1,
    ACTIONS(207), 3,
      anon_sym_LBRACE_DOLLAR,
      aux_sym_multiline_value_token1,
      anon_sym_RPAREN,
  [850] = 1,
    ACTIONS(244), 3,
      anon_sym_LF,
      sym_comment,
      sym_single_line_comment,
  [856] = 3,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      aux_sym_modifier_parameters_repeat1,
  [866] = 1,
    ACTIONS(248), 3,
      anon_sym_LF,
      sym_comment,
      sym_single_line_comment,
  [872] = 1,
    ACTIONS(233), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [877] = 2,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym_modifier_parameters,
  [884] = 2,
    ACTIONS(252), 1,
      anon_sym_GT,
    ACTIONS(254), 1,
      aux_sym_import_legacy_token2,
  [891] = 2,
    ACTIONS(61), 1,
      aux_sym_import_legacy_token2,
    ACTIONS(256), 1,
      anon_sym_GT,
  [898] = 2,
    ACTIONS(63), 1,
      aux_sym_import_legacy_token2,
    ACTIONS(258), 1,
      anon_sym_GT,
  [905] = 1,
    ACTIONS(260), 1,
      sym_modifier_function,
  [909] = 1,
    ACTIONS(262), 1,
      sym_modifier_function,
  [913] = 1,
    ACTIONS(264), 1,
      anon_sym_LF,
  [917] = 1,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
  [921] = 1,
    ACTIONS(268), 1,
      anon_sym_LF,
  [925] = 1,
    ACTIONS(270), 1,
      anon_sym_source_EQ,
  [929] = 1,
    ACTIONS(272), 1,
      anon_sym_LF,
  [933] = 1,
    ACTIONS(274), 1,
      anon_sym_LF,
  [937] = 1,
    ACTIONS(276), 1,
      anon_sym_EQ,
  [941] = 1,
    ACTIONS(278), 1,
      anon_sym_LF,
  [945] = 1,
    ACTIONS(280), 1,
      anon_sym_GT,
  [949] = 1,
    ACTIONS(282), 1,
      aux_sym_constant_token1,
  [953] = 1,
    ACTIONS(284), 1,
      anon_sym_INCLUDE_TYPOSCRIPT,
  [957] = 1,
    ACTIONS(286), 1,
      anon_sym_LF,
  [961] = 1,
    ACTIONS(288), 1,
      aux_sym_import_legacy_token1,
  [965] = 1,
    ACTIONS(290), 1,
      anon_sym_LF,
  [969] = 1,
    ACTIONS(292), 1,
      sym_identifier,
  [973] = 1,
    ACTIONS(294), 1,
      sym_identifier,
  [977] = 1,
    ACTIONS(296), 1,
      anon_sym_RBRACK,
  [981] = 1,
    ACTIONS(298), 1,
      anon_sym_COLON,
  [985] = 1,
    ACTIONS(300), 1,
      ts_builtin_sym_end,
  [989] = 1,
    ACTIONS(302), 1,
      aux_sym_condition_token1,
  [993] = 1,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
  [997] = 1,
    ACTIONS(306), 1,
      anon_sym_RBRACE,
  [1001] = 1,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
  [1005] = 1,
    ACTIONS(310), 1,
      anon_sym_RBRACE,
  [1009] = 1,
    ACTIONS(312), 1,
      aux_sym_constant_token1,
  [1013] = 1,
    ACTIONS(314), 1,
      aux_sym_constant_token1,
  [1017] = 1,
    ACTIONS(316), 1,
      aux_sym_constant_token1,
  [1021] = 1,
    ACTIONS(318), 1,
      aux_sym_constant_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 105,
  [SMALL_STATE(6)] = 140,
  [SMALL_STATE(7)] = 175,
  [SMALL_STATE(8)] = 188,
  [SMALL_STATE(9)] = 201,
  [SMALL_STATE(10)] = 213,
  [SMALL_STATE(11)] = 225,
  [SMALL_STATE(12)] = 237,
  [SMALL_STATE(13)] = 249,
  [SMALL_STATE(14)] = 261,
  [SMALL_STATE(15)] = 273,
  [SMALL_STATE(16)] = 285,
  [SMALL_STATE(17)] = 297,
  [SMALL_STATE(18)] = 309,
  [SMALL_STATE(19)] = 321,
  [SMALL_STATE(20)] = 333,
  [SMALL_STATE(21)] = 345,
  [SMALL_STATE(22)] = 357,
  [SMALL_STATE(23)] = 369,
  [SMALL_STATE(24)] = 381,
  [SMALL_STATE(25)] = 393,
  [SMALL_STATE(26)] = 405,
  [SMALL_STATE(27)] = 426,
  [SMALL_STATE(28)] = 448,
  [SMALL_STATE(29)] = 465,
  [SMALL_STATE(30)] = 480,
  [SMALL_STATE(31)] = 495,
  [SMALL_STATE(32)] = 509,
  [SMALL_STATE(33)] = 523,
  [SMALL_STATE(34)] = 537,
  [SMALL_STATE(35)] = 551,
  [SMALL_STATE(36)] = 565,
  [SMALL_STATE(37)] = 579,
  [SMALL_STATE(38)] = 593,
  [SMALL_STATE(39)] = 607,
  [SMALL_STATE(40)] = 621,
  [SMALL_STATE(41)] = 635,
  [SMALL_STATE(42)] = 649,
  [SMALL_STATE(43)] = 663,
  [SMALL_STATE(44)] = 677,
  [SMALL_STATE(45)] = 691,
  [SMALL_STATE(46)] = 705,
  [SMALL_STATE(47)] = 719,
  [SMALL_STATE(48)] = 726,
  [SMALL_STATE(49)] = 737,
  [SMALL_STATE(50)] = 748,
  [SMALL_STATE(51)] = 759,
  [SMALL_STATE(52)] = 770,
  [SMALL_STATE(53)] = 780,
  [SMALL_STATE(54)] = 786,
  [SMALL_STATE(55)] = 796,
  [SMALL_STATE(56)] = 806,
  [SMALL_STATE(57)] = 812,
  [SMALL_STATE(58)] = 822,
  [SMALL_STATE(59)] = 828,
  [SMALL_STATE(60)] = 838,
  [SMALL_STATE(61)] = 844,
  [SMALL_STATE(62)] = 850,
  [SMALL_STATE(63)] = 856,
  [SMALL_STATE(64)] = 866,
  [SMALL_STATE(65)] = 872,
  [SMALL_STATE(66)] = 877,
  [SMALL_STATE(67)] = 884,
  [SMALL_STATE(68)] = 891,
  [SMALL_STATE(69)] = 898,
  [SMALL_STATE(70)] = 905,
  [SMALL_STATE(71)] = 909,
  [SMALL_STATE(72)] = 913,
  [SMALL_STATE(73)] = 917,
  [SMALL_STATE(74)] = 921,
  [SMALL_STATE(75)] = 925,
  [SMALL_STATE(76)] = 929,
  [SMALL_STATE(77)] = 933,
  [SMALL_STATE(78)] = 937,
  [SMALL_STATE(79)] = 941,
  [SMALL_STATE(80)] = 945,
  [SMALL_STATE(81)] = 949,
  [SMALL_STATE(82)] = 953,
  [SMALL_STATE(83)] = 957,
  [SMALL_STATE(84)] = 961,
  [SMALL_STATE(85)] = 965,
  [SMALL_STATE(86)] = 969,
  [SMALL_STATE(87)] = 973,
  [SMALL_STATE(88)] = 977,
  [SMALL_STATE(89)] = 981,
  [SMALL_STATE(90)] = 985,
  [SMALL_STATE(91)] = 989,
  [SMALL_STATE(92)] = 993,
  [SMALL_STATE(93)] = 997,
  [SMALL_STATE(94)] = 1001,
  [SMALL_STATE(95)] = 1005,
  [SMALL_STATE(96)] = 1009,
  [SMALL_STATE(97)] = 1013,
  [SMALL_STATE(98)] = 1017,
  [SMALL_STATE(99)] = 1021,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typoscript, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(3),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(82),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(91),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(27),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(59),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typoscript, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typoscript_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typoscript_repeat1, 2), SHIFT_REPEAT(6),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typoscript_repeat1, 2), SHIFT_REPEAT(82),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typoscript_repeat1, 2), SHIFT_REPEAT(91),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typoscript_repeat1, 2), SHIFT_REPEAT(27),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typoscript_repeat1, 2), SHIFT_REPEAT(59),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, .production_id = 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deletion_line, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modification_line, 5),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_line, 5, .production_id = 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_line, 5, .production_id = 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 4),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_block, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_line, 4, .production_id = 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_line, 4, .production_id = 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_legacy, 11, .production_id = 5),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_line, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deletion_line, 4),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_line, 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modification_line, 6),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_legacy, 7),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier_parameter, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifier_parameter_repeat1, 2), SHIFT_REPEAT(99),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifier_parameter_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifier_parameter_repeat1, 2), SHIFT_REPEAT(30),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_value_repeat1, 2), SHIFT_REPEAT(98),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_value_repeat1, 2), SHIFT_REPEAT(32),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_value_repeat1, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(97),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(36),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(96),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(39),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(81),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(43),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifier_parameters_repeat1, 2),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifier_parameters_repeat1, 2), SHIFT_REPEAT(34),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_parameters, 4),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_parameters, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_parameters, 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_value, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_value, 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [300] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_TypoScript(void) {
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
