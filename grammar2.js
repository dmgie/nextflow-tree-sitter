const PREC = {
    COMMENT: 1,
    STRING: 2,
    NUMBER: 3,
    KEYWORD: 4,
    VARIABLE: 5,
    IDENTIFIER: 6,
};

module.exports = grammar({
    name: 'nextflow',

    rules: {
        source_file: $ => repeat($._top_level_item),

        _top_level_item: $ => choice(
            $.comment,
            $.assignment,
            $._top_level_keyword,
        ),

        _top_level_keyword: $ => choice($.include, $.process, $.workflow, $.fn_definition,), // TODO: is this better?
        // Generic tokens
        comment: $ => token(prec(PREC.COMMENT, /\/\/.*/)),
        // string should match anything between quotes, including escaped quotes, and should be single or double quotes
        string: $ => token(prec(PREC.STRING, /["']([^["']\\]|\\.)*["']/)),
        // non-empty string
        non_empty_string: $ => token(prec(PREC.STRING, /["']([^["']\\]|\\.)*["']/)),
        // string: $ => token(prec(PREC.STRING, /"([^"\\]|\\.)*"/)),
        number: $ => token(prec(PREC.NUMBER, /\d+(\.\d+)?/)),
        variable: $ => seq($._identifier, optional(repeat(seq(".", $._identifier)))),
        _identifier: $ => /[a-zA-Z_]\w*/,
        _line_terminator: $ => ";",


        // ------------------- Top-level stuff -------------------

        include: $ => seq(
            "include",
            "{",
                    choice($._identifier, comma_sep($._identifier)),
            "}",
            "from",
            $.string,
            $._line_terminator,
        ),


        // ------------------- Process stuff -------------------
        process: $ => seq(
            "process",
            $._identifier,
            "{",
                repeat($.process_body),
            "}",
        ),

        // Things that could appear within a process declaration
        process_body: $ => choice(
            $.comment,
            $.process_item,
        ),

        // Either input, output, or script, script always last
        process_item: $ => seq(
            $.input_declaration, // Can these be switched around?
            $.output_declaration, // Can these be switched around?
            $.script_declaration,
        ),

        // Either input or output, same syntax
        input_declaration: $ => seq(
            choice("input"),
            ":",
            repeat($.io_item),
        ),
        output_declaration: $ => seq(
            choice("output"),
            ":",
            repeat($.io_item),
        ),
        script_declaration: $ => seq(
            optional("script:"), // Can be omitted
            optional(repeat($.assignment)), 
            $.script_block,
        ),
        script_block: $ => seq(/""".*\n/, /.*/, /"""/),


        // ------------------- IO stuff -------------------
        io_item: $ => choice(
            $.comment,
            $.io_type,
        ),

        io_type: $ => choice(
            $.tuple_io_type,
            $.standard_io_type, 
        ),

        tuple_io_type: $ => seq(
            "tuple",
            comma_sep($.standard_io_type),
        ),
        standard_io_type: $ => seq(
            choice("env", "stdin", "path", "val"),
            optional("("),
            $._identifier,
            optional(")"),
        ),



        // ------------------- Workflow stuff -------------------
        workflow: $ => seq(
            "workflow",
            optional(field("name", $._identifier)),
            "{",
                    choice($.wf_named_body, 
                        repeat(alias($.body_item, $.wf_unnamed_body))),
            "}",
        ),

        // If a wf has a name, it has "take", "main" and "emit" block
        wf_named_body: $ => choice(
            $.take_block,
            $.main_block,
            $.emit_block,
        ),
        wf_unnamed_body: $ => alias($.body_item, $.wf_unnamed_body),

        take_block: $ => seq(
            "take:",
            repeat($.body_item),
        ),
        main_block: $ => seq(
            "main:",
            repeat($.body_item),
        ),
        emit_block: $ => seq(
            "emit:",
            repeat($.body_item),
        ),

        // ------------------- Function-Definition -------------------
        fn_definition: $ => seq(
            "def", alias($._identifier, $.fn_name), "(", optional($.parameters), ")", "{", 
                    repeat($.fn_body_item), 
            "}",
        ),

        fn_body_item: $ => alias($.body_item, $.fn_body_item),

        // Function call => fn_name(parameters)
        fn_call: $ => seq(
            alias($.variable, $.fn_name),
            "(", optional($.parameters), ")",
        ),
        _builtin_fn_name: $ => choice( "println", "error",),
        _builtin_fn_call: $ => seq(
            alias($._builtin_fn_name, $.fn_name),
            $.expression,
        ),


        // ------------------- Other -------------------

        // $variable or ${variable}
        nf_variable: $ => seq("$", choice(
            $._identifier,
            seq("{", $._identifier, "}"),
        )),

        // ------------------- General -------------------

        // This can be in fns, workflows or processes
        body_item: $ => choice(
            $.if_block,     // if (x == 1) { ... }
            $.comment, 
            $.assignment, // (def) x = 1
            $.fn_call, // func_name()
            $._builtin_fn_call, // Something like println
        ),

        // Parameter list = (variable, name: variable, variable)
        parameters: $ => seq(
            comma_sep(
                seq(
                    optional(seq(alias($._identifier, $.parameter_name), ":")), // Optional "param_name: "
                    $.expression
                )
            )
        ),

        operator: $ => choice($._comparison_operator, $._arithmetic_operator, $._logical_operator, $._assignment_operator),
        _logical_operator: $ => choice("&&", "||", "!"),
        _arithmetic_operator: $ => choice("+", "-", "*", "/", "%"),
        _comparison_operator: $ => choice("==", "!=", "<", ">", "<=", ">="),
        _assignment_operator: $ => choice("=", "+=", "-=", "*=", "/=", "%=", "->"),



        // x = 1 sort of thing
        assignment: $ => seq(
            optional("def"),
            $._assignment_lhs, "=", $._assignment_rhs, $._line_terminator,
        ),

        // x.y.z or x
        _assignment_lhs: $ => seq(
            $.variable, // Not expression, cause that would be like doing 1="string"
        ),
        _assignment_rhs: $ => seq(
            $.expression,
        ),


        if_block: $ => seq(
            field("if", $.if_statement),
            field("else_if", optional(repeat($.else_if_statement))),
            field("else", optional($.else_statement)),
        ),
        if_statement: $ => seq(
            "if", "(", choice($.comparison_expression, $.variable), ")", "{", repeat($.body_item), "}",
        ),
        else_if_statement: $ => seq(
            "else if", "(", $.comparison_expression, ")", "{", repeat($.body_item), "}",
        ),
        else_statement: $ => seq(
            "else", "{", repeat($.body_item), "}",
        ),


        // Comparison expression
        comparison_expression: $ => seq(
            choice($.expression),
            $._comparison_operator,
            choice($.expression),
        ),


        expression: $ => choice(
            $.variable,
            $.number,
            $.string,
            $.fn_call,
        )


}})


function comma_sep(rule) {
    /// Helper fn to create a comma separated list of a rule i.e (ident, ident, ident)
    return seq( rule, optional(repeat(seq(",", rule))));
}

