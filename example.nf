// Simple Nextflow example

process exampleWorkflow {
  // This process takes a file as input
  input:
    path input_file
    val input_file
    tuple val(input_file), val(input_file)

  output:
    path output_file

  script:
    """
    echo "Hello, Nextflow!"
    """
}

process processExample {
  input:
    path inputFile

  output:
    path outputFile

  script:
      def wow = "1"
    """
    cat ${inputFile} > ${outputFile}
    """
}

