const PREC = {
    COMMENT: 1,
    STRING: 2,
    NUMBER: 3,
    KEYWORD: 4,
};

module.exports = grammar({
    name: 'nextflow',

    rules: {
        source_file: $ => repeat($._top_level_item),

        _top_level_item: $ => choice(
            $.comment,
            $.process,
            $.workflow,
        ),


        // Generic tokens
        comment: $ => token(prec(PREC.COMMENT, /\/\/.*/)),
        string: $ => token(prec(PREC.STRING, /"([^"\\]|\\.)*"/)),
        _empty_line: $ => /\s*\n/,
        number: $ => token(prec(PREC.NUMBER, /\d+(\.\d+)?/)),
        identifier: $ => /[a-zA-Z_]\w*/,
        triple_quoted_string: $ => seq(/""".*\n/, /.*/, /"""/),

        // ------------------- Process stuff -------------------
        process: $ => seq(
            "process",
            $.identifier,
            "{",
                repeat($.process_level_item),
            "}",
        ),

        // Things that could appear within a process declaration
        process_level_item: $ => choice(
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
            $.triple_quoted_string,
        ),

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
            $.identifier,
            optional(")"),
        ),



        // ------------------- Workflow stuff -------------------
        workflow: $ => seq(
            "workflow",
            optional($.identifier),
            "{",
                repeat(choice(
                    $.comment, 
                    $.workflow_item)),
            "}",
        ),

        // This can just be normal expressions
        workflow_item: $ => seq(
            choice($.wf_take, $.wf_emit, $.wf_main),
        ),
        wf_take: $ => seq(
            "take",
            ":",
            repeat($.identifier),
        ),
        wf_main: $ => seq(
            "main",
            ":",
            repeat(choice($.identifier, $.assignment, $.function_call)), // can have non-assigned function calls
        ),
        wf_emit: $ => seq(
            "emit",
            ":",
            repeat($.identifier),
        ),

        workflow_io_type: $ => choice("take", "emit", "main"),

        // ------------------- General -------------------
        // Function call is just an identifier followed by a list of arguments, separated by commas
        function_call: $ => seq(
            alias($.identifier, $.function_name),
            $.parameter_list,
        ),
        parameter_list: $ => seq(
            "(",
            comma_sep($.identifier),
            ")",
        ),

        // x = 1 sort of thing
        assignment: $ => seq(
            optional("def"),
            $.identifier,
            "=",
            $.expression,
        ),

        expression: $ => choice(
            $.identifier,
            $.number,
            $.string,
            $.function_call,
        )


}})


function comma_sep(rule) {
    /// Helper function to create a comma separated list of a rule i.e (ident, ident, ident)
    return seq(rule, repeat(seq(",", rule)));
}
