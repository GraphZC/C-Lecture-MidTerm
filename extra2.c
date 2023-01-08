// ให้รับจำนวนเต็ม ที่เป็น Ascii Code ที่ละ 1 ตัว แล้วแปลงให่้เป็น String

/*
2 // รับกี่ตัว
65
66
AB
*/

#include <stdio.h>
#include <stdlib.h>

char *intToStr() {
    int n;
    scanf("%d", &n);

    // Allocate memory
    char *str = malloc(sizeof(char) * (n + 1));

    int i;
    for (i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        str[i] = num;
    }
    str[i] = 0;
    return str;
}

int main() {
    printf("%s\n", intToStr());
}
