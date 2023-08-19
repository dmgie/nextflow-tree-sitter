// Simple Nextflow example

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

process processExample {
  input:
    path inputFile

  output:
    path outputFile

  script:
    """
    cat ${inputFile} > ${outputFile}
    """
}
