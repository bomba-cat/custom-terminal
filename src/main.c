#include <stdio.h>
#include "terminal.h"

int main() {
    initialize_terminal();

    printf("Starting Terminal..\n");

    cleanup_terminal();

    return 0;
}
