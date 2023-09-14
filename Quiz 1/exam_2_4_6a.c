#include <stdio.h>

int main() {
    int num;
    printf(" *** Com Pro 57 ***\n");
    printf("Enter a number : ");
    scanf("%d", &num);

    int deviByFive = 0, deviBySeven = 0;

    if (num % 5 == 0) {
        deviByFive = 1;
    }

    if (num % 7 == 0) {
        deviBySeven = 1;
    }

    printf("Result         : ");

    if (deviByFive) {
        printf("Com");
    }

    if (deviBySeven) {
        printf("Pro");
    }

    if (!deviByFive && !deviBySeven) {
        printf("%d", num);
    }

    return 0;
}