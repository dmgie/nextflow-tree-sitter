#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 117
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 1
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum {
  sym_comment = 1,
  sym_string = 2,
  sym_number = 3,
  sym_identifier = 4,
  aux_sym_triple_quoted_string_token1 = 5,
  aux_sym_triple_quoted_string_token2 = 6,
  aux_sym_triple_quoted_string_token3 = 7,
  anon_sym_process = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_input = 11,
  anon_sym_COLON = 12,
  anon_sym_output = 13,
  anon_sym_script_COLON = 14,
  anon_sym_tuple = 15,
  anon_sym_COMMA = 16,
  anon_sym_env = 17,
  anon_sym_stdin = 18,
  anon_sym_path = 19,
  anon_sym_val = 20,
  anon_sym_LPAREN = 21,
  anon_sym_RPAREN = 22,
  anon_sym_workflow = 23,
  anon_sym_take = 24,
  anon_sym_main = 25,
  anon_sym_emit = 26,
  anon_sym_def = 27,
  anon_sym_EQ = 28,
  sym_source_file = 29,
  sym__top_level_item = 30,
  sym_triple_quoted_string = 31,
  sym_process = 32,
  sym_process_level_item = 33,
  sym_process_item = 34,
  sym_input_declaration = 35,
  sym_output_declaration = 36,
  sym_script_declaration = 37,
  sym_io_item = 38,
  sym_io_type = 39,
  sym_tuple_io_type = 40,
  sym_standard_io_type = 41,
  sym_workflow = 42,
  sym_workflow_item = 43,
  sym_wf_take = 44,
  sym_wf_main = 45,
  sym_wf_emit = 46,
  sym_function_call = 47,
  sym_parameter_list = 48,
  sym_assignment = 49,
  sym_expression = 50,
  aux_sym_source_file_repeat1 = 51,
  aux_sym_process_repeat1 = 52,
  aux_sym_input_declaration_repeat1 = 53,
  aux_sym_script_declaration_repeat1 = 54,
  aux_sym_tuple_io_type_repeat1 = 55,
  aux_sym_workflow_repeat1 = 56,
  aux_sym_wf_take_repeat1 = 57,
  aux_sym_wf_main_repeat1 = 58,
  aux_sym_parameter_list_repeat1 = 59,
  alias_sym_function_name = 60,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_identifier] = "identifier",
  [aux_sym_triple_quoted_string_token1] = "triple_quoted_string_token1",
  [aux_sym_triple_quoted_string_token2] = "triple_quoted_string_token2",
  [aux_sym_triple_quoted_string_token3] = "triple_quoted_string_token3",
  [anon_sym_process] = "process",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_input] = "input",
  [anon_sym_COLON] = ":",
  [anon_sym_output] = "output",
  [anon_sym_script_COLON] = "script:",
  [anon_sym_tuple] = "tuple",
  [anon_sym_COMMA] = ",",
  [anon_sym_env] = "env",
  [anon_sym_stdin] = "stdin",
  [anon_sym_path] = "path",
  [anon_sym_val] = "val",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_workflow] = "workflow",
  [anon_sym_take] = "take",
  [anon_sym_main] = "main",
  [anon_sym_emit] = "emit",
  [anon_sym_def] = "def",
  [anon_sym_EQ] = "=",
  [sym_source_file] = "source_file",
  [sym__top_level_item] = "_top_level_item",
  [sym_triple_quoted_string] = "triple_quoted_string",
  [sym_process] = "process",
  [sym_process_level_item] = "process_level_item",
  [sym_process_item] = "process_item",
  [sym_input_declaration] = "input_declaration",
  [sym_output_declaration] = "output_declaration",
  [sym_script_declaration] = "script_declaration",
  [sym_io_item] = "io_item",
  [sym_io_type] = "io_type",
  [sym_tuple_io_type] = "tuple_io_type",
  [sym_standard_io_type] = "standard_io_type",
  [sym_workflow] = "workflow",
  [sym_workflow_item] = "workflow_item",
  [sym_wf_take] = "wf_take",
  [sym_wf_main] = "wf_main",
  [sym_wf_emit] = "wf_emit",
  [sym_function_call] = "function_call",
  [sym_parameter_list] = "parameter_list",
  [sym_assignment] = "assignment",
  [sym_expression] = "expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_process_repeat1] = "process_repeat1",
  [aux_sym_input_declaration_repeat1] = "input_declaration_repeat1",
  [aux_sym_script_declaration_repeat1] = "script_declaration_repeat1",
  [aux_sym_tuple_io_type_repeat1] = "tuple_io_type_repeat1",
  [aux_sym_workflow_repeat1] = "workflow_repeat1",
  [aux_sym_wf_take_repeat1] = "wf_take_repeat1",
  [aux_sym_wf_main_repeat1] = "wf_main_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [alias_sym_function_name] = "function_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_identifier] = sym_identifier,
  [aux_sym_triple_quoted_string_token1] = aux_sym_triple_quoted_string_token1,
  [aux_sym_triple_quoted_string_token2] = aux_sym_triple_quoted_string_token2,
  [aux_sym_triple_quoted_string_token3] = aux_sym_triple_quoted_string_token3,
  [anon_sym_process] = anon_sym_process,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_script_COLON] = anon_sym_script_COLON,
  [anon_sym_tuple] = anon_sym_tuple,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_env] = anon_sym_env,
  [anon_sym_stdin] = anon_sym_stdin,
  [anon_sym_path] = anon_sym_path,
  [anon_sym_val] = anon_sym_val,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_workflow] = anon_sym_workflow,
  [anon_sym_take] = anon_sym_take,
  [anon_sym_main] = anon_sym_main,
  [anon_sym_emit] = anon_sym_emit,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_source_file] = sym_source_file,
  [sym__top_level_item] = sym__top_level_item,
  [sym_triple_quoted_string] = sym_triple_quoted_string,
  [sym_process] = sym_process,
  [sym_process_level_item] = sym_process_level_item,
  [sym_process_item] = sym_process_item,
  [sym_input_declaration] = sym_input_declaration,
  [sym_output_declaration] = sym_output_declaration,
  [sym_script_declaration] = sym_script_declaration,
  [sym_io_item] = sym_io_item,
  [sym_io_type] = sym_io_type,
  [sym_tuple_io_type] = sym_tuple_io_type,
  [sym_standard_io_type] = sym_standard_io_type,
  [sym_workflow] = sym_workflow,
  [sym_workflow_item] = sym_workflow_item,
  [sym_wf_take] = sym_wf_take,
  [sym_wf_main] = sym_wf_main,
  [sym_wf_emit] = sym_wf_emit,
  [sym_function_call] = sym_function_call,
  [sym_parameter_list] = sym_parameter_list,
  [sym_assignment] = sym_assignment,
  [sym_expression] = sym_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_process_repeat1] = aux_sym_process_repeat1,
  [aux_sym_input_declaration_repeat1] = aux_sym_input_declaration_repeat1,
  [aux_sym_script_declaration_repeat1] = aux_sym_script_declaration_repeat1,
  [aux_sym_tuple_io_type_repeat1] = aux_sym_tuple_io_type_repeat1,
  [aux_sym_workflow_repeat1] = aux_sym_workflow_repeat1,
  [aux_sym_wf_take_repeat1] = aux_sym_wf_take_repeat1,
  [aux_sym_wf_main_repeat1] = aux_sym_wf_main_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [alias_sym_function_name] = alias_sym_function_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_triple_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_triple_quoted_string_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_triple_quoted_string_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_process] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_script_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tuple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_env] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stdin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_path] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_val] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_workflow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_take] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_main] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_emit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level_item] = {
    .visible = false,
    .named = true,
  },
  [sym_triple_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_process] = {
    .visible = true,
    .named = true,
  },
  [sym_process_level_item] = {
    .visible = true,
    .named = true,
  },
  [sym_process_item] = {
    .visible = true,
    .named = true,
  },
  [sym_input_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_output_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_script_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_io_item] = {
    .visible = true,
    .named = true,
  },
  [sym_io_type] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_io_type] = {
    .visible = true,
    .named = true,
  },
  [sym_standard_io_type] = {
    .visible = true,
    .named = true,
  },
  [sym_workflow] = {
    .visible = true,
    .named = true,
  },
  [sym_workflow_item] = {
    .visible = true,
    .named = true,
  },
  [sym_wf_take] = {
    .visible = true,
    .named = true,
  },
  [sym_wf_main] = {
    .visible = true,
    .named = true,
  },
  [sym_wf_emit] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_process_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_input_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_script_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_io_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_workflow_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_wf_take_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_wf_main_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_function_name] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_function_name,
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
  [11] = 2,
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
  [27] = 5,
  [28] = 7,
  [29] = 10,
  [30] = 30,
  [31] = 8,
  [32] = 9,
  [33] = 15,
  [34] = 13,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 14,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 17,
  [44] = 44,
  [45] = 16,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 30,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 60,
  [66] = 64,
  [67] = 59,
  [68] = 62,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 52,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 80,
  [83] = 83,
  [84] = 53,
  [85] = 39,
  [86] = 44,
  [87] = 87,
  [88] = 51,
  [89] = 83,
  [90] = 50,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 93,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 102,
  [111] = 103,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 96,
  [116] = 112,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(65);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(125);
      if (lookahead == ')') ADVANCE(126);
      if (lookahead == ',') ADVANCE(116);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == '=') ADVANCE(136);
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 'm') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(58);
      if (lookahead == 'p') ADVANCE(17);
      if (lookahead == 's') ADVANCE(18);
      if (lookahead == 't') ADVANCE(14);
      if (lookahead == 'v') ADVANCE(15);
      if (lookahead == 'w') ADVANCE(43);
      if (lookahead == '{') ADVANCE(108);
      if (lookahead == '}') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(103);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(125);
      if (lookahead == '{') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(64);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '(') ADVANCE(125);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == 's') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == ')') ADVANCE(126);
      if (lookahead == ',') ADVANCE(116);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'p') ADVANCE(71);
      if (lookahead == 's') ADVANCE(75);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead == 'v') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(1);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(106);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '(') ADVANCE(125);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '=') ADVANCE(136);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'm') ADVANCE(74);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead == '}') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'm') ADVANCE(74);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead == '}') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(66);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(113);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(49);
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(134);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 27:
      if (lookahead == 'h') ADVANCE(121);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 32:
      if (lookahead == 'k') ADVANCE(22);
      END_STATE();
    case 33:
      if (lookahead == 'k') ADVANCE(26);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 44:
      if (lookahead == 'p') ADVANCE(36);
      END_STATE();
    case 45:
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 46:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 47:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 58:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 61:
      if (lookahead == 'v') ADVANCE(117);
      END_STATE();
    case 62:
      if (lookahead == 'w') ADVANCE(127);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 64:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(96);
      if (lookahead == 't') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_triple_quoted_string_token1);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_triple_quoted_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_triple_quoted_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_triple_quoted_string_token3);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_process);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_script_COLON);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_tuple);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_tuple);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_env);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_env);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_stdin);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_stdin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_path);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_path);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_val);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_val);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_workflow);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_take);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_take);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_main);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_main);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_emit);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_emit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_def);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 10},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 104},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [aux_sym_triple_quoted_string_token3] = ACTIONS(1),
    [anon_sym_process] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_script_COLON] = ACTIONS(1),
    [anon_sym_tuple] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_env] = ACTIONS(1),
    [anon_sym_stdin] = ACTIONS(1),
    [anon_sym_path] = ACTIONS(1),
    [anon_sym_val] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_workflow] = ACTIONS(1),
    [anon_sym_take] = ACTIONS(1),
    [anon_sym_main] = ACTIONS(1),
    [anon_sym_emit] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(104),
    [sym__top_level_item] = STATE(37),
    [sym_process] = STATE(37),
    [sym_workflow] = STATE(37),
    [aux_sym_source_file_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_process] = ACTIONS(7),
    [anon_sym_workflow] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(18), 1,
      anon_sym_tuple,
    STATE(17), 1,
      sym_io_type,
    ACTIONS(14), 2,
      sym_identifier,
      anon_sym_def,
    ACTIONS(16), 2,
      aux_sym_triple_quoted_string_token1,
      anon_sym_script_COLON,
    STATE(2), 2,
      sym_io_item,
      aux_sym_input_declaration_repeat1,
    STATE(16), 2,
      sym_tuple_io_type,
      sym_standard_io_type,
    ACTIONS(21), 4,
      anon_sym_env,
      anon_sym_stdin,
      anon_sym_path,
      anon_sym_val,
  [32] = 8,
    ACTIONS(24), 1,
      sym_comment,
    ACTIONS(30), 1,
      anon_sym_tuple,
    STATE(17), 1,
      sym_io_type,
    ACTIONS(26), 2,
      sym_identifier,
      anon_sym_def,
    ACTIONS(28), 2,
      aux_sym_triple_quoted_string_token1,
      anon_sym_script_COLON,
    STATE(4), 2,
      sym_io_item,
      aux_sym_input_declaration_repeat1,
    STATE(16), 2,
      sym_tuple_io_type,
      sym_standard_io_type,
    ACTIONS(32), 4,
      anon_sym_env,
      anon_sym_stdin,
      anon_sym_path,
      anon_sym_val,
  [64] = 8,
    ACTIONS(24), 1,
      sym_comment,
    ACTIONS(30), 1,
      anon_sym_tuple,
    STATE(17), 1,
      sym_io_type,
    ACTIONS(34), 2,
      sym_identifier,
      anon_sym_def,
    ACTIONS(36), 2,
      aux_sym_triple_quoted_string_token1,
      anon_sym_script_COLON,
    STATE(2), 2,
      sym_io_item,
      aux_sym_input_declaration_repeat1,
    STATE(16), 2,
      sym_tuple_io_type,
      sym_standard_io_type,
    ACTIONS(32), 4,
      anon_sym_env,
      anon_sym_stdin,
      anon_sym_path,
      anon_sym_val,
  [96] = 4,
    ACTIONS(42), 1,
      anon_sym_COMMA,
    STATE(8), 1,
      aux_sym_tuple_io_type_repeat1,
    ACTIONS(38), 3,
      sym_comment,
      aux_sym_triple_quoted_string_token1,
      anon_sym_script_COLON,
    ACTIONS(40), 7,
      sym_identifier,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdin,
      anon_sym_path,
      anon_sym_val,
      anon_sym_def,
  [117] = 7,
    ACTIONS(44), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_output,
    ACTIONS(48), 1,
      anon_sym_tuple,
    STATE(43), 1,
      sym_io_type,
    STATE(12), 2,
      sym_io_item,
      aux_sym_input_declaration_repeat1,
    STATE(45), 2,
      sym_tuple_io_type,
      sym_standard_io_type,
    ACTIONS(50), 4,
      anon_sym_env,
      anon_sym_stdin,
      anon_sym_path,
      anon_sym_val,
  [144] = 4,
    ACTIONS(56), 1,
      anon_sym_COMMA,
    STATE(7), 1,
      aux_sym_tuple_io_type_repeat1,
    ACTIONS(52), 3,
      sym_comment,
      aux_sym_triple_quoted_string_token1,
      anon_sym_script_COLON,
    ACTIONS(54), 7,
      sym_identifier,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdin,
      anon_sym_path,
      anon_sym_val,
      anon_sym_def,
  [165] = 4,
    ACTIONS(42), 1,
      anon_sym_COMMA,
    STATE(7), 1,
      aux_sym_tuple_io_type_repeat1,
    ACTIONS(59), 3,
      sym_comment,
      aux_sym_triple_quoted_string_token1,
      anon_sym_script_COLON,
    ACTIONS(61), 7,
      sym_identifier,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdin,
      anon_sym_path,
      anon_sym_val,
      anon_sym_def,
  [186] = 3,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(63), 4,
      sym_comment,
      aux_sym_triple_quoted_string_token1,
      anon_sym_script_COLON,
      anon_sym_COMMA,
    ACTIONS(65), 7,
      sym_identifier,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdin,
      anon_sym_path,
      anon_sym_val,
      anon_sym_def,
  [205] = 3,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(69), 4,
      sym_comment,
      aux_sym_triple_quoted_string_token1,
      anon_sym_script_COLON,
      anon_sym_COMMA,
    ACTIONS(71), 7,
      sym_identifier,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdin,
      anon_sym_path,
      anon_sym_val,
      anon_sym_def,
  [224] = 7,
    ACTIONS(16), 1,
      anon_sym_output,
    ACTIONS(75), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_tuple,
    STATE(43), 1,
      sym_io_type,
    STATE(11), 2,
      sym_io_item,
      aux_sym_input_declaration_repeat1,
    STATE(45), 2,
      sym_tuple_io_type,
      sym_standard_io_type,
    ACTIONS(81), 4,
      anon_sym_env,
      anon_sym_stdin,
      anon_sym_path,
      anon_sym_val,
  [251] = 7,
    ACTIONS(44), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_tuple,
    ACTIONS(84), 1,
      anon_sym_output,
    STATE(43), 1,
      sym_io_type,
    STATE(11), 2,
      sym_io_item,
      aux_sym_input_declaration_repeat1,
    STATE(45), 2,
      sym_tuple_io_type,
      sym_standard_io_type,
    ACTIONS(50), 4,
      anon_sym_env,
      anon_sym_stdin,
      anon_sym_path,
      anon_sym_val,
  [278] = 2,
    ACTIONS(86), 4,
      sym_comment,
      aux_sym_triple_quoted_string_token1,
      anon_sym_script_COLON,
      anon_sym_COMMA,
    ACTIONS(88), 7,
      sym_identifier,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdin,
      anon_sym_path,
      anon_sym_val,
      anon_sym_def,
  [294] = 2,
    ACTIONS(52), 4,
      sym_comment,
      aux_sym_triple_quoted_string_token1,
      anon_sym_script_COLON,
      anon_sym_COMMA,
    ACTIONS(54), 7,
      sym_identifier,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdin,
      anon_sym_path,
      anon_sym_val,
      anon_sym_def,
  [310] = 2,
    ACTIONS(63), 4,
      sym_comment,
      aux_sym_triple_quoted_string_token1,
      anon_sym_script_COLON,
      anon_sym_COMMA,
    ACTIONS(65), 7,
      sym_identifier,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdin,
      anon_sym_path,
      anon_sym_val,
      anon_sym_def,
  [326] = 2,
    ACTIONS(90), 3,
      sym_comment,
      aux_sym_triple_quoted_string_token1,
      anon_sym_script_COLON,
    ACTIONS(92), 7,
      sym_identifier,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdin,
      anon_sym_path,
      anon_sym_val,
      anon_sym_def,
  [341] = 2,
    ACTIONS(94), 3,
      sym_comment,
      aux_sym_triple_quoted_string_token1,
      anon_sym_script_COLON,
    ACTIONS(96), 7,
      sym_identifier,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdin,
      anon_sym_path,
      anon_sym_val,
      anon_sym_def,
  [356] = 7,
    ACTIONS(98), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    ACTIONS(102), 1,
      anon_sym_take,
    ACTIONS(104), 1,
      anon_sym_main,
    ACTIONS(106), 1,
      anon_sym_emit,
    STATE(24), 2,
      sym_workflow_item,
      aux_sym_workflow_repeat1,
    STATE(61), 3,
      sym_wf_take,
      sym_wf_main,
      sym_wf_emit,
  [381] = 7,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    ACTIONS(102), 1,
      anon_sym_take,
    ACTIONS(104), 1,
      anon_sym_main,
    ACTIONS(106), 1,
      anon_sym_emit,
    ACTIONS(108), 1,
      sym_comment,
    STATE(21), 2,
      sym_workflow_item,
      aux_sym_workflow_repeat1,
    STATE(61), 3,
      sym_wf_take,
      sym_wf_main,
      sym_wf_emit,
  [406] = 5,
    ACTIONS(112), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_def,
    ACTIONS(110), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(115), 3,
      anon_sym_take,
      anon_sym_main,
      anon_sym_emit,
    STATE(20), 3,
      sym_function_call,
      sym_assignment,
      aux_sym_wf_main_repeat1,
  [427] = 7,
    ACTIONS(120), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_RBRACE,
    ACTIONS(125), 1,
      anon_sym_take,
    ACTIONS(128), 1,
      anon_sym_main,
    ACTIONS(131), 1,
      anon_sym_emit,
    STATE(21), 2,
      sym_workflow_item,
      aux_sym_workflow_repeat1,
    STATE(61), 3,
      sym_wf_take,
      sym_wf_main,
      sym_wf_emit,
  [452] = 7,
    ACTIONS(102), 1,
      anon_sym_take,
    ACTIONS(104), 1,
      anon_sym_main,
    ACTIONS(106), 1,
      anon_sym_emit,
    ACTIONS(134), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    STATE(19), 2,
      sym_workflow_item,
      aux_sym_workflow_repeat1,
    STATE(61), 3,
      sym_wf_take,
      sym_wf_main,
      sym_wf_emit,
  [477] = 5,
    ACTIONS(140), 1,
      sym_identifier,
    ACTIONS(144), 1,
      anon_sym_def,
    ACTIONS(138), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(142), 3,
      anon_sym_take,
      anon_sym_main,
      anon_sym_emit,
    STATE(20), 3,
      sym_function_call,
      sym_assignment,
      aux_sym_wf_main_repeat1,
  [498] = 7,
    ACTIONS(102), 1,
      anon_sym_take,
    ACTIONS(104), 1,
      anon_sym_main,
    ACTIONS(106), 1,
      anon_sym_emit,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    STATE(21), 2,
      sym_workflow_item,
      aux_sym_workflow_repeat1,
    STATE(61), 3,
      sym_wf_take,
      sym_wf_main,
      sym_wf_emit,
  [523] = 5,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(154), 1,
      anon_sym_EQ,
    STATE(52), 1,
      sym_parameter_list,
    ACTIONS(148), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(150), 5,
      sym_identifier,
      anon_sym_take,
      anon_sym_main,
      anon_sym_emit,
      anon_sym_def,
  [544] = 5,
    ACTIONS(140), 1,
      sym_identifier,
    ACTIONS(144), 1,
      anon_sym_def,
    ACTIONS(156), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(158), 3,
      anon_sym_take,
      anon_sym_main,
      anon_sym_emit,
    STATE(23), 3,
      sym_function_call,
      sym_assignment,
      aux_sym_wf_main_repeat1,
  [565] = 3,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym_tuple_io_type_repeat1,
    ACTIONS(38), 7,
      sym_comment,
      anon_sym_output,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdin,
      anon_sym_path,
      anon_sym_val,
  [581] = 3,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_tuple_io_type_repeat1,
    ACTIONS(52), 7,
      sym_comment,
      anon_sym_output,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdin,
      anon_sym_path,
      anon_sym_val,
  [597] = 2,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    ACTIONS(69), 8,
      sym_comment,
      anon_sym_output,
      anon_sym_tuple,
      anon_sym_COMMA,
      anon_sym_env,
      anon_sym_stdin,
      anon_sym_path,
      anon_sym_val,
  [611] = 4,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    STATE(52), 1,
      sym_parameter_list,
    ACTIONS(167), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(169), 5,
      sym_identifier,
      anon_sym_take,
      anon_sym_main,
      anon_sym_emit,
      anon_sym_def,
  [629] = 3,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_tuple_io_type_repeat1,
    ACTIONS(59), 7,
      sym_comment,
      anon_sym_output,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdin,
      anon_sym_path,
      anon_sym_val,
  [645] = 2,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    ACTIONS(63), 8,
      sym_comment,
      anon_sym_output,
      anon_sym_tuple,
      anon_sym_COMMA,
      anon_sym_env,
      anon_sym_stdin,
      anon_sym_path,
      anon_sym_val,
  [659] = 1,
    ACTIONS(63), 8,
      sym_comment,
      anon_sym_output,
      anon_sym_tuple,
      anon_sym_COMMA,
      anon_sym_env,
      anon_sym_stdin,
      anon_sym_path,
      anon_sym_val,
  [670] = 1,
    ACTIONS(86), 8,
      sym_comment,
      anon_sym_output,
      anon_sym_tuple,
      anon_sym_COMMA,
      anon_sym_env,
      anon_sym_stdin,
      anon_sym_path,
      anon_sym_val,
  [681] = 5,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(175), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_process,
    ACTIONS(181), 1,
      anon_sym_workflow,
    STATE(35), 4,
      sym__top_level_item,
      sym_process,
      sym_workflow,
      aux_sym_source_file_repeat1,
  [700] = 7,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(186), 1,
      aux_sym_triple_quoted_string_token1,
    ACTIONS(188), 1,
      anon_sym_script_COLON,
    ACTIONS(190), 1,
      anon_sym_def,
    STATE(76), 1,
      sym_script_declaration,
    STATE(77), 1,
      sym_triple_quoted_string,
    STATE(57), 2,
      sym_assignment,
      aux_sym_script_declaration_repeat1,
  [723] = 5,
    ACTIONS(7), 1,
      anon_sym_process,
    ACTIONS(9), 1,
      anon_sym_workflow,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    ACTIONS(194), 1,
      sym_comment,
    STATE(35), 4,
      sym__top_level_item,
      sym_process,
      sym_workflow,
      aux_sym_source_file_repeat1,
  [742] = 1,
    ACTIONS(52), 8,
      sym_comment,
      anon_sym_output,
      anon_sym_tuple,
      anon_sym_COMMA,
      anon_sym_env,
      anon_sym_stdin,
      anon_sym_path,
      anon_sym_val,
  [753] = 2,
    ACTIONS(196), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(198), 5,
      sym_identifier,
      anon_sym_take,
      anon_sym_main,
      anon_sym_emit,
      anon_sym_def,
  [765] = 6,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    ACTIONS(205), 1,
      anon_sym_input,
    STATE(81), 1,
      sym_process_item,
    STATE(95), 1,
      sym_input_declaration,
    STATE(40), 2,
      sym_process_level_item,
      aux_sym_process_repeat1,
  [785] = 4,
    ACTIONS(210), 1,
      sym_identifier,
    STATE(49), 1,
      aux_sym_wf_take_repeat1,
    ACTIONS(208), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(212), 3,
      anon_sym_take,
      anon_sym_main,
      anon_sym_emit,
  [801] = 4,
    ACTIONS(210), 1,
      sym_identifier,
    STATE(49), 1,
      aux_sym_wf_take_repeat1,
    ACTIONS(214), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(216), 3,
      anon_sym_take,
      anon_sym_main,
      anon_sym_emit,
  [817] = 1,
    ACTIONS(94), 7,
      sym_comment,
      anon_sym_output,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdin,
      anon_sym_path,
      anon_sym_val,
  [827] = 2,
    ACTIONS(218), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(220), 5,
      sym_identifier,
      anon_sym_take,
      anon_sym_main,
      anon_sym_emit,
      anon_sym_def,
  [839] = 1,
    ACTIONS(90), 7,
      sym_comment,
      anon_sym_output,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdin,
      anon_sym_path,
      anon_sym_val,
  [849] = 4,
    ACTIONS(224), 1,
      sym_identifier,
    STATE(42), 1,
      aux_sym_wf_take_repeat1,
    ACTIONS(222), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(226), 3,
      anon_sym_take,
      anon_sym_main,
      anon_sym_emit,
  [865] = 6,
    ACTIONS(228), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
    ACTIONS(232), 1,
      anon_sym_input,
    STATE(81), 1,
      sym_process_item,
    STATE(95), 1,
      sym_input_declaration,
    STATE(54), 2,
      sym_process_level_item,
      aux_sym_process_repeat1,
  [885] = 4,
    ACTIONS(236), 1,
      sym_identifier,
    STATE(41), 1,
      aux_sym_wf_take_repeat1,
    ACTIONS(234), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(238), 3,
      anon_sym_take,
      anon_sym_main,
      anon_sym_emit,
  [901] = 4,
    ACTIONS(242), 1,
      sym_identifier,
    STATE(49), 1,
      aux_sym_wf_take_repeat1,
    ACTIONS(240), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(245), 3,
      anon_sym_take,
      anon_sym_main,
      anon_sym_emit,
  [917] = 2,
    ACTIONS(247), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(249), 5,
      sym_identifier,
      anon_sym_take,
      anon_sym_main,
      anon_sym_emit,
      anon_sym_def,
  [929] = 2,
    ACTIONS(251), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(253), 5,
      sym_identifier,
      anon_sym_take,
      anon_sym_main,
      anon_sym_emit,
      anon_sym_def,
  [941] = 2,
    ACTIONS(255), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(257), 5,
      sym_identifier,
      anon_sym_take,
      anon_sym_main,
      anon_sym_emit,
      anon_sym_def,
  [953] = 2,
    ACTIONS(167), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(169), 5,
      sym_identifier,
      anon_sym_take,
      anon_sym_main,
      anon_sym_emit,
      anon_sym_def,
  [965] = 6,
    ACTIONS(228), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_input,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      sym_process_item,
    STATE(95), 1,
      sym_input_declaration,
    STATE(40), 2,
      sym_process_level_item,
      aux_sym_process_repeat1,
  [985] = 5,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(186), 1,
      aux_sym_triple_quoted_string_token1,
    ACTIONS(190), 1,
      anon_sym_def,
    STATE(87), 1,
      sym_triple_quoted_string,
    STATE(56), 2,
      sym_assignment,
      aux_sym_script_declaration_repeat1,
  [1002] = 5,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(186), 1,
      aux_sym_triple_quoted_string_token1,
    ACTIONS(190), 1,
      anon_sym_def,
    STATE(79), 1,
      sym_triple_quoted_string,
    STATE(63), 2,
      sym_assignment,
      aux_sym_script_declaration_repeat1,
  [1019] = 5,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(186), 1,
      aux_sym_triple_quoted_string_token1,
    ACTIONS(190), 1,
      anon_sym_def,
    STATE(87), 1,
      sym_triple_quoted_string,
    STATE(63), 2,
      sym_assignment,
      aux_sym_script_declaration_repeat1,
  [1036] = 4,
    ACTIONS(167), 1,
      aux_sym_triple_quoted_string_token1,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    STATE(75), 1,
      sym_parameter_list,
    ACTIONS(169), 2,
      sym_identifier,
      anon_sym_def,
  [1050] = 2,
    STATE(14), 1,
      sym_standard_io_type,
    ACTIONS(263), 4,
      anon_sym_env,
      anon_sym_stdin,
      anon_sym_path,
      anon_sym_val,
  [1060] = 4,
    ACTIONS(267), 1,
      sym_identifier,
    STATE(84), 1,
      sym_function_call,
    STATE(90), 1,
      sym_expression,
    ACTIONS(265), 2,
      sym_string,
      sym_number,
  [1074] = 1,
    ACTIONS(269), 5,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_take,
      anon_sym_main,
      anon_sym_emit,
  [1082] = 2,
    STATE(5), 1,
      sym_standard_io_type,
    ACTIONS(263), 4,
      anon_sym_env,
      anon_sym_stdin,
      anon_sym_path,
      anon_sym_val,
  [1092] = 4,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(274), 1,
      aux_sym_triple_quoted_string_token1,
    ACTIONS(276), 1,
      anon_sym_def,
    STATE(63), 2,
      sym_assignment,
      aux_sym_script_declaration_repeat1,
  [1106] = 4,
    ACTIONS(267), 1,
      sym_identifier,
    STATE(84), 1,
      sym_function_call,
    STATE(86), 1,
      sym_expression,
    ACTIONS(265), 2,
      sym_string,
      sym_number,
  [1120] = 4,
    ACTIONS(281), 1,
      sym_identifier,
    STATE(50), 1,
      sym_expression,
    STATE(53), 1,
      sym_function_call,
    ACTIONS(279), 2,
      sym_string,
      sym_number,
  [1134] = 4,
    ACTIONS(281), 1,
      sym_identifier,
    STATE(44), 1,
      sym_expression,
    STATE(53), 1,
      sym_function_call,
    ACTIONS(279), 2,
      sym_string,
      sym_number,
  [1148] = 2,
    STATE(38), 1,
      sym_standard_io_type,
    ACTIONS(50), 4,
      anon_sym_env,
      anon_sym_stdin,
      anon_sym_path,
      anon_sym_val,
  [1158] = 2,
    STATE(27), 1,
      sym_standard_io_type,
    ACTIONS(50), 4,
      anon_sym_env,
      anon_sym_stdin,
      anon_sym_path,
      anon_sym_val,
  [1168] = 1,
    ACTIONS(283), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_process,
      anon_sym_workflow,
  [1175] = 1,
    ACTIONS(285), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_process,
      anon_sym_workflow,
  [1182] = 1,
    ACTIONS(287), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_process,
      anon_sym_workflow,
  [1189] = 1,
    ACTIONS(289), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_process,
      anon_sym_workflow,
  [1196] = 1,
    ACTIONS(291), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_process,
      anon_sym_workflow,
  [1203] = 3,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(296), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      aux_sym_parameter_list_repeat1,
  [1213] = 2,
    ACTIONS(255), 1,
      aux_sym_triple_quoted_string_token1,
    ACTIONS(257), 2,
      sym_identifier,
      anon_sym_def,
  [1221] = 1,
    ACTIONS(298), 3,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_input,
  [1227] = 1,
    ACTIONS(300), 3,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_input,
  [1233] = 1,
    ACTIONS(302), 3,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_input,
  [1239] = 1,
    ACTIONS(304), 3,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_input,
  [1245] = 3,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      aux_sym_parameter_list_repeat1,
  [1255] = 1,
    ACTIONS(310), 3,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_input,
  [1261] = 3,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      aux_sym_parameter_list_repeat1,
  [1271] = 3,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(314), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      aux_sym_parameter_list_repeat1,
  [1281] = 2,
    ACTIONS(167), 1,
      aux_sym_triple_quoted_string_token1,
    ACTIONS(169), 2,
      sym_identifier,
      anon_sym_def,
  [1289] = 2,
    ACTIONS(196), 1,
      aux_sym_triple_quoted_string_token1,
    ACTIONS(198), 2,
      sym_identifier,
      anon_sym_def,
  [1297] = 2,
    ACTIONS(218), 1,
      aux_sym_triple_quoted_string_token1,
    ACTIONS(220), 2,
      sym_identifier,
      anon_sym_def,
  [1305] = 1,
    ACTIONS(316), 3,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_input,
  [1311] = 2,
    ACTIONS(251), 1,
      aux_sym_triple_quoted_string_token1,
    ACTIONS(253), 2,
      sym_identifier,
      anon_sym_def,
  [1319] = 3,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym_parameter_list_repeat1,
  [1329] = 2,
    ACTIONS(247), 1,
      aux_sym_triple_quoted_string_token1,
    ACTIONS(249), 2,
      sym_identifier,
      anon_sym_def,
  [1337] = 2,
    ACTIONS(320), 1,
      sym_identifier,
    ACTIONS(322), 1,
      anon_sym_LBRACE,
  [1344] = 1,
    ACTIONS(296), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1349] = 2,
    ACTIONS(324), 1,
      sym_identifier,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
  [1356] = 2,
    ACTIONS(328), 1,
      sym_identifier,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
  [1363] = 2,
    ACTIONS(332), 1,
      anon_sym_output,
    STATE(36), 1,
      sym_output_declaration,
  [1370] = 1,
    ACTIONS(334), 1,
      sym_identifier,
  [1374] = 1,
    ACTIONS(336), 1,
      sym_identifier,
  [1378] = 1,
    ACTIONS(338), 1,
      anon_sym_COLON,
  [1382] = 1,
    ACTIONS(340), 1,
      anon_sym_LBRACE,
  [1386] = 1,
    ACTIONS(342), 1,
      anon_sym_LBRACE,
  [1390] = 1,
    ACTIONS(344), 1,
      anon_sym_COLON,
  [1394] = 1,
    ACTIONS(346), 1,
      anon_sym_EQ,
  [1398] = 1,
    ACTIONS(348), 1,
      sym_identifier,
  [1402] = 1,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
  [1406] = 1,
    ACTIONS(352), 1,
      anon_sym_COLON,
  [1410] = 1,
    ACTIONS(354), 1,
      anon_sym_COLON,
  [1414] = 1,
    ACTIONS(356), 1,
      anon_sym_COLON,
  [1418] = 1,
    ACTIONS(358), 1,
      sym_identifier,
  [1422] = 1,
    ACTIONS(360), 1,
      aux_sym_triple_quoted_string_token3,
  [1426] = 1,
    ACTIONS(362), 1,
      anon_sym_EQ,
  [1430] = 1,
    ACTIONS(364), 1,
      sym_identifier,
  [1434] = 1,
    ACTIONS(366), 1,
      sym_identifier,
  [1438] = 1,
    ACTIONS(368), 1,
      anon_sym_EQ,
  [1442] = 1,
    ACTIONS(370), 1,
      aux_sym_triple_quoted_string_token2,
  [1446] = 1,
    ACTIONS(372), 1,
      sym_identifier,
  [1450] = 1,
    ACTIONS(374), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 96,
  [SMALL_STATE(6)] = 117,
  [SMALL_STATE(7)] = 144,
  [SMALL_STATE(8)] = 165,
  [SMALL_STATE(9)] = 186,
  [SMALL_STATE(10)] = 205,
  [SMALL_STATE(11)] = 224,
  [SMALL_STATE(12)] = 251,
  [SMALL_STATE(13)] = 278,
  [SMALL_STATE(14)] = 294,
  [SMALL_STATE(15)] = 310,
  [SMALL_STATE(16)] = 326,
  [SMALL_STATE(17)] = 341,
  [SMALL_STATE(18)] = 356,
  [SMALL_STATE(19)] = 381,
  [SMALL_STATE(20)] = 406,
  [SMALL_STATE(21)] = 427,
  [SMALL_STATE(22)] = 452,
  [SMALL_STATE(23)] = 477,
  [SMALL_STATE(24)] = 498,
  [SMALL_STATE(25)] = 523,
  [SMALL_STATE(26)] = 544,
  [SMALL_STATE(27)] = 565,
  [SMALL_STATE(28)] = 581,
  [SMALL_STATE(29)] = 597,
  [SMALL_STATE(30)] = 611,
  [SMALL_STATE(31)] = 629,
  [SMALL_STATE(32)] = 645,
  [SMALL_STATE(33)] = 659,
  [SMALL_STATE(34)] = 670,
  [SMALL_STATE(35)] = 681,
  [SMALL_STATE(36)] = 700,
  [SMALL_STATE(37)] = 723,
  [SMALL_STATE(38)] = 742,
  [SMALL_STATE(39)] = 753,
  [SMALL_STATE(40)] = 765,
  [SMALL_STATE(41)] = 785,
  [SMALL_STATE(42)] = 801,
  [SMALL_STATE(43)] = 817,
  [SMALL_STATE(44)] = 827,
  [SMALL_STATE(45)] = 839,
  [SMALL_STATE(46)] = 849,
  [SMALL_STATE(47)] = 865,
  [SMALL_STATE(48)] = 885,
  [SMALL_STATE(49)] = 901,
  [SMALL_STATE(50)] = 917,
  [SMALL_STATE(51)] = 929,
  [SMALL_STATE(52)] = 941,
  [SMALL_STATE(53)] = 953,
  [SMALL_STATE(54)] = 965,
  [SMALL_STATE(55)] = 985,
  [SMALL_STATE(56)] = 1002,
  [SMALL_STATE(57)] = 1019,
  [SMALL_STATE(58)] = 1036,
  [SMALL_STATE(59)] = 1050,
  [SMALL_STATE(60)] = 1060,
  [SMALL_STATE(61)] = 1074,
  [SMALL_STATE(62)] = 1082,
  [SMALL_STATE(63)] = 1092,
  [SMALL_STATE(64)] = 1106,
  [SMALL_STATE(65)] = 1120,
  [SMALL_STATE(66)] = 1134,
  [SMALL_STATE(67)] = 1148,
  [SMALL_STATE(68)] = 1158,
  [SMALL_STATE(69)] = 1168,
  [SMALL_STATE(70)] = 1175,
  [SMALL_STATE(71)] = 1182,
  [SMALL_STATE(72)] = 1189,
  [SMALL_STATE(73)] = 1196,
  [SMALL_STATE(74)] = 1203,
  [SMALL_STATE(75)] = 1213,
  [SMALL_STATE(76)] = 1221,
  [SMALL_STATE(77)] = 1227,
  [SMALL_STATE(78)] = 1233,
  [SMALL_STATE(79)] = 1239,
  [SMALL_STATE(80)] = 1245,
  [SMALL_STATE(81)] = 1255,
  [SMALL_STATE(82)] = 1261,
  [SMALL_STATE(83)] = 1271,
  [SMALL_STATE(84)] = 1281,
  [SMALL_STATE(85)] = 1289,
  [SMALL_STATE(86)] = 1297,
  [SMALL_STATE(87)] = 1305,
  [SMALL_STATE(88)] = 1311,
  [SMALL_STATE(89)] = 1319,
  [SMALL_STATE(90)] = 1329,
  [SMALL_STATE(91)] = 1337,
  [SMALL_STATE(92)] = 1344,
  [SMALL_STATE(93)] = 1349,
  [SMALL_STATE(94)] = 1356,
  [SMALL_STATE(95)] = 1363,
  [SMALL_STATE(96)] = 1370,
  [SMALL_STATE(97)] = 1374,
  [SMALL_STATE(98)] = 1378,
  [SMALL_STATE(99)] = 1382,
  [SMALL_STATE(100)] = 1386,
  [SMALL_STATE(101)] = 1390,
  [SMALL_STATE(102)] = 1394,
  [SMALL_STATE(103)] = 1398,
  [SMALL_STATE(104)] = 1402,
  [SMALL_STATE(105)] = 1406,
  [SMALL_STATE(106)] = 1410,
  [SMALL_STATE(107)] = 1414,
  [SMALL_STATE(108)] = 1418,
  [SMALL_STATE(109)] = 1422,
  [SMALL_STATE(110)] = 1426,
  [SMALL_STATE(111)] = 1430,
  [SMALL_STATE(112)] = 1434,
  [SMALL_STATE(113)] = 1438,
  [SMALL_STATE(114)] = 1442,
  [SMALL_STATE(115)] = 1446,
  [SMALL_STATE(116)] = 1450,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_declaration_repeat1, 2), SHIFT_REPEAT(17),
  [14] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_input_declaration_repeat1, 2),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_input_declaration_repeat1, 2),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_input_declaration_repeat1, 2), SHIFT_REPEAT(62),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_input_declaration_repeat1, 2), SHIFT_REPEAT(93),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_declaration, 2),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_declaration, 2),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_declaration, 3),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_declaration, 3),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_io_type, 2),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_io_type, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_declaration, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_io_type_repeat1, 2),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tuple_io_type_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_io_type_repeat1, 2), SHIFT_REPEAT(59),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_io_type, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_io_type, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standard_io_type, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_standard_io_type, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standard_io_type, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_standard_io_type, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_declaration_repeat1, 2), SHIFT_REPEAT(43),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_declaration_repeat1, 2), SHIFT_REPEAT(68),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_declaration_repeat1, 2), SHIFT_REPEAT(94),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_declaration, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standard_io_type, 4),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_standard_io_type, 4),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_io_type, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_io_type, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_io_item, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_io_item, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_wf_main_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_wf_main_repeat1, 2), SHIFT_REPEAT(25),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_wf_main_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_wf_main_repeat1, 2), SHIFT_REPEAT(96),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workflow_repeat1, 2), SHIFT_REPEAT(21),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workflow_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workflow_repeat1, 2), SHIFT_REPEAT(105),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workflow_repeat1, 2), SHIFT_REPEAT(106),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workflow_repeat1, 2), SHIFT_REPEAT(107),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wf_main, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wf_main, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_wf_main_repeat1, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_wf_main_repeat1, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wf_main, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wf_main, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_io_type_repeat1, 2), SHIFT_REPEAT(67),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(108),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(91),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_process_repeat1, 2), SHIFT_REPEAT(81),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_process_repeat1, 2),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_process_repeat1, 2), SHIFT_REPEAT(101),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wf_take, 3),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wf_take, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wf_emit, 3),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wf_emit, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wf_emit, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wf_emit, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wf_take, 2),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wf_take, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_wf_take_repeat1, 2),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_wf_take_repeat1, 2), SHIFT_REPEAT(49),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_wf_take_repeat1, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 4),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 1),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workflow_item, 1),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_declaration_repeat1, 2), SHIFT_REPEAT(113),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_declaration_repeat1, 2),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_declaration_repeat1, 2), SHIFT_REPEAT(115),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workflow, 5),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_process, 4),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workflow, 4),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_process, 5),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workflow, 3),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(97),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_process_item, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_declaration, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_triple_quoted_string, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_declaration, 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_process_level_item, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_declaration, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [350] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_nextflow(void) {
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
