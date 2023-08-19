const Parser = require("tree-sitter");
const Nextflow = require("./nextflow-tree-sitter");

const parser = new Parser();
parser.setLanguage(Nextflow);

const script = `
workflow exampleWorkflow {
  input:
    path input_file

  output:
    path output_file

  script:
    """
    echo "Hello, Nextflow!"
    """
}
`;

const tree = parser.parse(script);
console.log(tree.rootNode.toString());
