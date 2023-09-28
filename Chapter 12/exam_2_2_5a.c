#include <stdio.h>

int main() {
    printf(" *** Display Summation (skip 2 number)***\n");

    int num1, num2, total = 0;
    printf("Enter 2 whole numbers : ");
    scanf("%d %d", &num1, &num2);

    if (num2 < num1) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("Summation = ");
    for (int i = num1; i <= num2; i += 2) {
        total += i;
        printf("%d", i);
        if (num2 - 1 > i) {
            printf(" + ");
        }
    }
    printf(" = %d", total);

    return 0;
}
