# Obfuscated C Coding Challenge

## Goal
Write a C program that puts "Hello, World!" into the buffer and passes the unit test — but make your implementation as unreadable and confusing as possible.

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
```

Sample submission challange.c file:
```c
#include "challange.h"

void challange_fill(char *buffer, int length) {
    buffer[0]  = 0x1F948 & 0xFF;     // lowest byte is equal to ascii 'H'
    buffer[1]  = 202 - 101;          // ascii 'e'
    buffer[2]  = (108 | 0);          // ascii 'l', bitwise OR with zero does nothing
    buffer[3]  = 0b01101100;         // binary-coded 'l'
    buffer[4]  = 0x6F;               // hexadecimal 'o'
    buffer[5]  = ',';                // 
    buffer[6]  = 0x20;               // hexadecimal ' '
    buffer[7]  = 0x1F957 & 0xFF;     // lowest byte is equal to ascii 'W'
    buffer[8]  = 111;                // ascii 'o'
    buffer[9]  = 0x72;               // hexadecimal 'r'
    buffer[10] = 0154;               // octal 'l'
    buffer[11] = 'd';                // 
    buffer[12] = 33;                 // ascii '!'
    buffer[13] = 0;                  // null terminator
}
```
