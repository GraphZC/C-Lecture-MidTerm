#include <stdio.h>
#define SIZE 25

void printArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // char str[20] = "HelloWorld";
    // int arr[SIZE] = {0};
    // arr[5] = 10;
    // printArr(arr, SIZE);
    // printf("%d\n", arr[1000]);

    // int arr2d[3][2] = {{0, 1}, {2, 3}, {4, 5}};
    // arr2d[1][0] = 10;
    // printf("%d\n", arr2d[1][0]);

    /*
    int arr[5];
    
    &arr[0] = 1000
    &arr[1] = 1004
    &arr[2] = 1008
    &arr[3] = 1012
    &arr[4] = 1016
    */

}