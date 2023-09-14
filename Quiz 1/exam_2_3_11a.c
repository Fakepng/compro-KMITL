#include <stdio.h>

int main() {
    int num;
    printf("input : ");
    scanf("%d", &num);

    printf("\n");

    for (int col = 0; col < num; col++) {
        for (int row = 0; row < col + 1; row++) {
            printf("%d", row + 1);
        }
        printf("\n");
    }

    return 0;
}