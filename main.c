#include <stdio.h>

int global = 10;

int main() {
    extern void foo();
    foo();
}