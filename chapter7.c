#include <stdio.h>

void increaseBy10(int *x_ptr) { // Pass by reference (เลียบแบบ)
    *x_ptr += 10;
}

int main() {
    int x = 10;
    int *x_ptr;
    x_ptr = &x;

    printf("Address of x: %p\n", &x);
    printf("x_ptr: %p\n", x_ptr);

    // dereference (*)
    printf("*x_ptr: %d\n", *x_ptr);
    printf("x: %d\n", x);

    // x = 15;
    // *x_ptr = 15; // x = 15;
    increaseBy10(&x);

    printf("====================\n");
    printf("Address of x: %p\n", &x);
    printf("x_ptr: %p\n", x_ptr);

    // dereference (*)
    printf("*x_ptr: %d\n", *x_ptr);
    printf("x: %d\n", x);
}