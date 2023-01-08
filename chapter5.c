#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int global;

void foo() {
    static int x;
    printf("%d\n", x);
    x++;
}

int main() {
    // extern int x_global;
    // printf("%d", x_global);
    // register int x = 5;x`
    
    // for (int i = 0; i < 10; i++) {
    //     static int j = 0;
    //     printf("%d\n", j);
    //     j++;
    // }
    srand(time(0)); // seed random
    printf("%d", rand() % 10 + 1); // 0 -> 9 => + 1 => 1 -> 10
    // printf("%d", RAND_MAX);
}

int x_global = 10;