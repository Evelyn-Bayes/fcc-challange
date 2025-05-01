#include "challange.h"

void challange_fill(char *buffer, int length) {
    const char *msg = "Hello, World!";
    int i = 0;
    while (i < length) {
        buffer[i] = msg[i];
        i++;
    }
}
