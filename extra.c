#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0 ; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void println(char str[]) {
    for (int i = 0; str[i]; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
}

void toUpperCase(char str[]) {
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 'a' - 'A';
        }
    }
}

void toLowerCase(char str[]) {
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 'a' - 'A';
        }
    }
}

int main() {
    const int SIZE_1 = 5;
    const int SIZE_2 = 20;
    int arr1[SIZE_1] = {1, 2, 3, 4, 5};
    printArray(arr1, SIZE_1);


    char arr2[SIZE_2] = "&(q3u4890Hello";
    toLowerCase(arr2);
    println(arr2);

    // char arr2[SIZE_2] = {'H', 'e', 'l', 'l', 'o', '\0'};
}