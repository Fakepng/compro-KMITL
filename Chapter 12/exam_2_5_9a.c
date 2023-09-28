#include <stdio.h>

int main() {
    int num1, num2, length, width;
    printf("Enter rectangle length and width: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        length = num1;
        width = num2;
    } else {
        length = num2;
        width = num1;
    }

    printf("length= %d, width= %d\n", length, width);
    printf("Perimeter of rectangle is %d", (length * 2) + (width * 2));

    return 0;
}
