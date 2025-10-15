#include <stdio.h>

int main() {
    char c1, c2;
    int num1, num2, sum;

    printf("Birinci rakami giriniz (0-9): ");
    c1 = getchar();
    getchar();

    printf("Ikinci rakami giriniz (0-9): ");
    c2 = getchar();
    getchar();
    printf("Birinci rakam: %c ve ASCII degeri: %d\n", c1, c1);
    printf("ikinci rakam: %c ve ASCII degeri: %d\n", c2, c2);


    num1 = c1 - '0';
    num2 = c2 - '0';

    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);


    sum = num1 + num2;


    if (sum > 9) {
        printf("\nHATA: Toplam 9'u asiyor! (6-bit sistemde tasma)\n");
    }

    else {
        char result = sum + '0';
        printf("\nSonuc: %c\n", result);
    }

    return 0;
}