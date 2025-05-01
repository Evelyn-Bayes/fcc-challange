# Obfuscated C Coding Challenge

## Goal
Write a C program that passes the provided unit tests — but make your implementation as unreadable and confusing as possible.

## What you can edit
- `challenge.h`: function signature(s)
- `challenge.c`: where you write your code

## What you cannot / shouldn't edit
- `test_challenge.c`: unit tests
- `Makefile`: build system
- `README.md`: ...I mean you can, but why?

Run the tests with:

```bash
make test

Sample submission challange.c file:
```c
#include "challange.h"

void challange_fill(char *buffer, int length) {
    buffer[0]  = 0x1F948 & 0xFF;
    buffer[1]  = 202 - 101;
    buffer[2]  = (108 | 0);
    buffer[3]  = (0b01101100);
    buffer[4]  = 0x6F;
    buffer[5]  = ',';
    buffer[6]  = 0x20;
    buffer[7]  = 0x1F957 & 0xFF;
    buffer[8]  = 111;
    buffer[9]  = 0x72;
    buffer[10] = 0154;
    buffer[11] = 'd';
    buffer[12] = 33;
    buffer[13] = 0;
}
