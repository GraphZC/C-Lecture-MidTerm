#include <stdio.h>
#include <stdlib.h>

int **generateMatrix(int m, int n) {
    int **matrix = (int **)malloc(sizeof(int *) * m);

    for (int i = 0; i < m; i++) {
        matrix[i] = (int *)malloc(sizeof(int) * n);
        for (int j = 0; j < n; j++) {
            matrix[i][j] = i + j;
        }
    }
    return matrix;
}

void printMatrix(int **matrix, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    // x <- x_ptr <- x_ptr_ptr

    int x = 5;
    int *x_ptr = &x;
    int **x_ptr_ptr = &x_ptr;

    printf("x: %d\n", x);
    printf("*x_ptr: %d\n", *x_ptr);
    printf("**x_ptr_ptr: %d\n", **x_ptr_ptr); // * => *x_ptr -> * => x

    int **matrix = generateMatrix(3, 4);
    printMatrix(matrix, 3, 4);
    
}

/*
{{0, 1, 2}, {3, 4, 5}, {6, 7, 8}}

[0] => [0, 1, 2]
[1] => [3, 4, 5]
[2] => [6, 7, 8]
*/