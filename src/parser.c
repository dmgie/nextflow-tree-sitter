#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 26
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 5

enum {
  sym_comment = 1,
  sym_string = 2,
  sym_number = 3,
  sym_identifier = 4,
  sym__line_terminator = 5,
  anon_sym_LPAREN = 6,
  anon_sym_COMMA = 7,
  anon_sym_RPAREN = 8,
  anon_sym_COLON = 9,
  anon_sym_DOT = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  anon_sym_EQ_EQ = 13,
  anon_sym_BANG_EQ = 14,
  anon_sym_LT = 15,
  anon_sym_GT = 16,
  anon_sym_LT_EQ = 17,
  anon_sym_GT_EQ = 18,
  anon_sym_PLUS = 19,
  anon_sym_DASH = 20,
  anon_sym_STAR = 21,
  anon_sym_SLASH = 22,
  anon_sym_AMP_AMP = 23,
  anon_sym_PIPE_PIPE = 24,
  anon_sym_if = 25,
  anon_sym_else = 26,
  sym_source_file = 27,
  sym__top_level_item = 28,
  sym__expression = 29,
  sym_function_call = 30,
  sym_parameter_list = 31,
  sym_named_parameter = 32,
  sym_member_access = 33,
  sym__member_value = 34,
  sym__statement = 35,
  aux_sym_source_file_repeat1 = 36,
  aux_sym_parameter_list_repeat1 = 37,
  aux_sym_member_access_repeat1 = 38,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_identifier] = "identifier",
  [sym__line_terminator] = "_line_terminator",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [sym_source_file] = "source_file",
  [sym__top_level_item] = "_top_level_item",
  [sym__expression] = "_expression",
  [sym_function_call] = "function_call",
  [sym_parameter_list] = "parameter_list",
  [sym_named_parameter] = "named_parameter",
  [sym_member_access] = "member_access",
  [sym__member_value] = "_member_value",
  [sym__statement] = "_statement",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_member_access_repeat1] = "member_access_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_identifier] = sym_identifier,
  [sym__line_terminator] = sym__line_terminator,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [sym_source_file] = sym_source_file,
  [sym__top_level_item] = sym__top_level_item,
  [sym__expression] = sym__expression,
  [sym_function_call] = sym_function_call,
  [sym_parameter_list] = sym_parameter_list,
  [sym_named_parameter] = sym_named_parameter,
  [sym_member_access] = sym_member_access,
  [sym__member_value] = sym__member_value,
  [sym__statement] = sym__statement,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_member_access_repeat1] = aux_sym_member_access_repeat1,
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
  [sym__line_terminator] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
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
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
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
  [sym__expression] = {
    .visible = false,
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
  [sym_named_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_member_access] = {
    .visible = true,
    .named = true,
  },
  [sym__member_value] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
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
  [aux_sym_member_access_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_member = 1,
  field_name = 2,
  field_object = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_member] = "member",
  [field_name] = "name",
  [field_object] = "object",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_object, 0},
  [1] =
    {field_name, 0},
  [2] =
    {field_member, 1},
    {field_object, 0},
  [4] =
    {field_name, 0},
    {field_value, 2},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == ')') ADVANCE(23);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '+') ADVANCE(34);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '<') ADVANCE(30);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '>') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == '{') ADVANCE(26);
      if (lookahead == '|') ADVANCE(6);
      if (lookahead == '}') ADVANCE(27);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 1:
      if (lookahead == '&') ADVANCE(38);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(29);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(28);
      END_STATE();
    case 5:
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(12);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '|') ADVANCE(39);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 8:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == ')') ADVANCE(23);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__line_terminator);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(32);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(33);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(11);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym__line_terminator] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(25),
    [sym__top_level_item] = STATE(2),
    [sym_function_call] = STATE(2),
    [sym_member_access] = STATE(2),
    [sym__member_value] = STATE(6),
    [sym__statement] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym_comment,
    STATE(6), 1,
      sym__member_value,
    STATE(3), 5,
      sym__top_level_item,
      sym_function_call,
      sym_member_access,
      sym__statement,
      aux_sym_source_file_repeat1,
  [20] = 5,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(18), 1,
      sym_identifier,
    STATE(6), 1,
      sym__member_value,
    STATE(3), 5,
      sym__top_level_item,
      sym_function_call,
      sym_member_access,
      sym__statement,
      aux_sym_source_file_repeat1,
  [40] = 3,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_parameter_list,
    ACTIONS(21), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
      anon_sym_DOT,
  [53] = 3,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(25), 2,
      sym_string,
      sym_number,
    STATE(24), 2,
      sym__expression,
      sym_function_call,
  [65] = 3,
    ACTIONS(31), 1,
      anon_sym_DOT,
    STATE(8), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [77] = 1,
    ACTIONS(33), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [85] = 3,
    ACTIONS(31), 1,
      anon_sym_DOT,
    STATE(10), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [97] = 1,
    ACTIONS(37), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [105] = 3,
    ACTIONS(41), 1,
      anon_sym_DOT,
    STATE(10), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(39), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [117] = 1,
    ACTIONS(44), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [125] = 1,
    ACTIONS(46), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [133] = 4,
    ACTIONS(48), 1,
      anon_sym_COMMA,
    ACTIONS(50), 1,
      anon_sym_RPAREN,
    ACTIONS(52), 1,
      anon_sym_COLON,
    STATE(18), 1,
      aux_sym_parameter_list_repeat1,
  [146] = 1,
    ACTIONS(39), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
      anon_sym_DOT,
  [153] = 3,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_parameter_list,
    ACTIONS(54), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [164] = 3,
    ACTIONS(56), 1,
      sym_identifier,
    ACTIONS(58), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      sym_named_parameter,
  [174] = 3,
    ACTIONS(48), 1,
      anon_sym_COMMA,
    ACTIONS(50), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      aux_sym_parameter_list_repeat1,
  [184] = 3,
    ACTIONS(48), 1,
      anon_sym_COMMA,
    ACTIONS(60), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      aux_sym_parameter_list_repeat1,
  [194] = 2,
    ACTIONS(52), 1,
      anon_sym_COLON,
    ACTIONS(62), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [202] = 3,
    ACTIONS(62), 1,
      anon_sym_RPAREN,
    ACTIONS(64), 1,
      anon_sym_COMMA,
    STATE(20), 1,
      aux_sym_parameter_list_repeat1,
  [212] = 2,
    ACTIONS(67), 1,
      sym_identifier,
    STATE(14), 1,
      sym__member_value,
  [219] = 2,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(23), 1,
      sym_named_parameter,
  [226] = 1,
    ACTIONS(62), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [231] = 1,
    ACTIONS(71), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [236] = 1,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 53,
  [SMALL_STATE(6)] = 65,
  [SMALL_STATE(7)] = 77,
  [SMALL_STATE(8)] = 85,
  [SMALL_STATE(9)] = 97,
  [SMALL_STATE(10)] = 105,
  [SMALL_STATE(11)] = 117,
  [SMALL_STATE(12)] = 125,
  [SMALL_STATE(13)] = 133,
  [SMALL_STATE(14)] = 146,
  [SMALL_STATE(15)] = 153,
  [SMALL_STATE(16)] = 164,
  [SMALL_STATE(17)] = 174,
  [SMALL_STATE(18)] = 184,
  [SMALL_STATE(19)] = 194,
  [SMALL_STATE(20)] = 202,
  [SMALL_STATE(21)] = 212,
  [SMALL_STATE(22)] = 219,
  [SMALL_STATE(23)] = 226,
  [SMALL_STATE(24)] = 231,
  [SMALL_STATE(25)] = 236,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__member_value, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_access, 1, .production_id = 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_access, 2, .production_id = 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_member_access_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_member_access_repeat1, 2), SHIFT_REPEAT(21),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(22),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_parameter, 3, .production_id = 4),
  [73] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
