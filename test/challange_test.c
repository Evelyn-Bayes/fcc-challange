#include "challange.h"

#include <stdio.h>
#include <string.h>
#include <assert.h>

int main() {
    char buffer[14];
    challange_fill(buffer, sizeof(buffer));

    assert(strcmp(buffer, "Hello, World!") == 0);
    printf("Test passed: \"%s\"\n", buffer);
    return 0;
}
