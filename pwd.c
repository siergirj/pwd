#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <error.h>

int main(int argc, char** argv) {

    // print PWD
    if (fputs(getenv("PWD"), stdout) == EOF || putchar('\n') == EOF) {
        error(EXIT_FAILURE, errno, ("Output error"));
    }

    return EXIT_SUCCESS;
}

