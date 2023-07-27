#include <stdio.h>

int main() {
  printf(" *** Find Maximum / Middle ***\n");

  int num1, num2, num3;
  int max, mid;

  printf("Enter 3 integers : ");
  scanf("%d %d %d", &num1, &num2, &num3);

  if (num1 > num2 && num1> num3) {
    max = num1;

    if (num2 > num3) {
      mid = num2;
    } else {
      mid = num3;
    }
  } else if (num2 > num1 && num2 > num3) {
    max = num2;

    if (num1 > num3) {
      mid = num1;
    } else {
      mid = num3;
    }
  } else if (num3 > num1 && num3 > num2) {
    max = num3;

    if (num1 > num2) {
      mid = num1;
    } else {
      mid = num2;
    }
  }

  printf("Max / Mid = %d / %d = %.3f", max, mid, (max * 1.0) / (mid * 1.0));

  return 0;
}