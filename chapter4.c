#include <stdio.h>

// return_type function_name(argument) { // function header
//     function body
// }

// function prototype => รับค่าประเภทอะไร กี่ตัว และ คืนค่าอะไรออกไ
int foo(int);
void bar();
void increaseBy10(int);

int x; // equal 0

long factorial(long n)
{
    if (n == 0)
        return 1;
    return n * factorial(n-1);
}

int main() {
    // printf("foo(5) = %d\n", foo(5));
    // int x = foo(5);
    // bar();
    int x = 10;
    // increaseBy10(x); // pass by value
    // printf("x = %d", x);
    printf("%ld\n", factorial(3));
}

int foo(int x) {
    return x + 1;
}

void bar() {
    printf("HelloWorld\n");
}

void increaseBy10(int x) {
    x = x + 10;
}

