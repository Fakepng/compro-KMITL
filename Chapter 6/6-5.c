#include <stdio.h>
#include <stdlib.h>

int main() {
  int num;
  int sum = 0;
  printf("Enter a number (100-995) : ");
  scanf("%d", &num);

  if (num < 100 || num > 995) {
    printf("Out of range : %d", num);
    return 0;
  }

  for (int row = 0; row < 5; row++) {
    int reverse = 0;
    int remainder;
    int normal = num + row;
    int toReverse = normal;

    while (toReverse != 0) {
      remainder = toReverse % 10;
      reverse = reverse * 10 + remainder;
      toReverse /= 10;
    }

    int total = abs(normal - reverse);
    sum += total;

    printf("| %3d - %-3d | = %3d\n", normal, reverse, total);
  }

  printf("summation : %d", sum);
}