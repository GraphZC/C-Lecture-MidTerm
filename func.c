#include <stdio.h>

void foo() {
    extern int global;
    printf("%d", global);
}