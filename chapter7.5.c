#include <stdio.h>
#include <stdlib.h>

int *generateArray(int size) {
    int *arr = (int *)malloc(sizeof(int) * size); // arr[size]

    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
        // *(arr + i) = i + 1;
    }
    return arr;
}

void printArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    const int SIZE = 10;
    int *arr = generateArray(SIZE);
    printArr(arr, SIZE);
    free(arr);
    printArr(arr, SIZE);
    // int arr[5] = {0, 1, 2, 3, 4};
    // printf("arr: %p\n", arr);
    // printf("&arr[0]: %p\n", &arr[0]);

    // *(arr + 1) = 10;

    // printf("arr[1]: %d\n", arr[1]);
    // printf("arr[1]: %d\n", *(arr + 1)); // + 1 int (4 bytes)
}