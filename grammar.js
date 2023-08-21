const PREC = {
    COMMENT: 1,
    STRING: 2,
    NUMBER: 3,
    FUNCTION_CALL: 4,
    IDENTIFIER: 5,
    STATEMENT: 6, // Units of code (func_call()) should be given precedence over i.e member access (func_call().member)
};

module.exports = grammar({
    name: 'nextflow',

    rules: {
        source_file: $ => repeat($._top_level_item),

        _top_level_item: $ => choice(
            $.comment,
            $._statement,
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
        member_access: $ => seq(
            field("object", $._member_value),
            field("member", repeat(seq(".", $._member_value)))), // Repeat to allow for nested members
        _member_value: $ => seq($.identifier), // Only identifier+function_call can have members?

        block: $ => seq("{", repeat($._statement), "}"),


        // Statements =  any complete unit of code that performs an action or a sequence of actions
        _statement: $ => prec(PREC.STATEMENT,choice(
            $.function_call,
            $.member_access,
            // TODO more statements i.e if, for, while, assignment, etc
        )),

        operator: $ => choice($._comparison_operator, $._arithmatic_operator, $._logical_operator),
        _comparison_operator: $ => choice("==", "!=", "<", ">", "<=", ">="),
        _arithmatic_operator: $ => choice("+", "-", "*", "/"),
        _logical_operator: $ => choice("&&", "||"),
        

        if_definition: $ => seq(
            "if",
            "(", field("condition", $._expression), ")",
            field("body", $.block),
            optional(seq("else if", field("condition", $._expression), field("body", $.block))),
            optional(seq("else", field("body", $.block))),
        ),
        _condition: $ => seq(
            field("left", $._expression),
            optional(seq(field("operator", $.operator), field("right", $._expression))),
        ),
}})


function comma_sep(rule) {
    /// Helper fn to create a comma separated list of a rule i.e (ident, ident, ident)
    return seq( rule, optional(repeat(seq(",", rule))));
}

