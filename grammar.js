const PREC = {
    STATEMENT: 1, // Units of code (func_call()) should be given precedence over i.e member access (func_call().member)
    COMMENT: 2,
    STRING: 3,
    NUMBER: 4,
    FUNCTION_CALL: 5,
    IDENTIFIER: 6,
};

module.exports = grammar({
    name: 'nextflow',

    rules: {
        source_file: $ => repeat($._top_level_item),

        _top_level_item: $ => choice(
            $.comment,
            $._statement,
            $._expression,
        ),

        // Generic tokens
        comment: $ => token(prec(PREC.COMMENT, /\/\/.*/)),
        // string should match anything between quotes, including escaped quotes, and should be single or double quotes
        string: $ => token(prec(PREC.STRING, /["']([^["']\\]|\\.)*["']/)),
        // string: $ => token(prec(PREC.STRING, /"([^"\\]|\\.)*"/)),
        number: $ => token(prec(PREC.NUMBER, /\d+(\.\d+)?/)),
        identifier: $ => /[a-zA-Z_]\w*/,
        _line_terminator: $ => ";",

        _expression: $ => choice(
            $.string,
            $.number,
            $.identifier,
            $.function_call,
            $.list,
            $._arithmetic_expression,
            $._logical_expression,
            $._grouped_expression,
            $._comparison_expression,
            $._member_access,
        ),

        // function
        function_call: $ => prec(1,seq(
            field("name", seq($.identifier)),
            $.parameter_list,
        )),
        parameter_list: $ => seq("(", optional(comma_sep(
            choice($.named_parameter, $.identifier)
        )), ")"),
        named_parameter: $ => seq(
            field("name", $.identifier), ":", field("value", $._expression)),
        _member_access: $ => prec.right(seq(".", $._expression)), // Repeat to allow for nested members

        block: $ => seq("{", repeat($._statement), "}"),
        list: $ => seq("[", comma_sep($._expression), "]"),

        _grouped_expression: $ => seq("(", $._expression, ")"), // Could make these not hidden i.e group: $ => seq("(", $._expression, ")"),

        // Operators
        operator: $ => choice($._comparison_operator, $._arithmetic_operator, $._logical_operator),
        _comparison_operator: $ => alias(choice("==", "!=", "<", ">", "<=", ">="), $.operator),
        _arithmetic_operator: $ => alias(choice("+", "-", "*", "/", "%"), $.operator),
        _logical_operator: $ => alias(choice("&&", "||", "!"), $.operator),
        _arithmetic_expression: $ => prec.left(seq($._expression, $._arithmetic_operator, $._expression)),
        _logical_expression: $ => prec.left(seq($._expression, $._logical_operator, $._expression)),
        _comparison_expression: $ => prec.left(seq(
            field("left", $._expression),
            seq(field("operator", $._comparison_operator),
                         field("right", $._expression)))),


        // Statements =  any complete unit of code that performs an action or a sequence of actions
        _statement: $ => prec(PREC.STATEMENT,choice(
            // TODO more statements i.e if, for, while, assignment, etc
            $.if_definition,
            $.function_definition,
            $.comment,
            // $.assignment,
            // $.for_definition,
            // $.while_definition,
        )),
        // Could change condition to be group, and then just alias internal groups to _groups to make it hidden
        if_definition: $ => seq(
            "if",
            field("condition", $._expression),
            field("body", $.block),
            optional(seq("else if", field("condition", $._comparison_expression), field("body", $.block))),
            optional(seq("else", field("body", $.block))),
        ),
        function_definition: $ => seq(
            "def", field("name", $.identifier), field("parameters", $.parameter_list), field("body", $.block)),
}})


function comma_sep(rule) {
    /// Helper fn to create a comma separated list of a rule i.e (ident, ident, ident)
    return seq( rule, optional(repeat(seq(",", rule))));
}

