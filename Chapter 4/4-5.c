#include <stdio.h>

int main() {
  printf("A is +\n");
  printf("B is -\n");
  printf("C is *\n");
  printf("D is /\n");

  int num1, num2, max, min;
  char option;

  printf("Enter number and operator : ");
  scanf("%d %c %d", &num1, &option, &num2);

  if (num1 > num2) {
    max = num1;
    min = num2;
  } else {
    max = num2;
    min = num1;
  }

  if (option == 'A') {
    printf("%d+%d = %.3f", min, max, (min * 1.0) + (max * 1.0));
  } else if (option == 'B') {
    printf("%d-%d = %.3f", min, max, (min * 1.0) - (max * 1.0));
  } else if (option == 'C') {
    printf("%d*%d = %.3f", min, max, (min * 1.0) * (max * 1.0));
  } else if (option == 'D') {
    printf("%d/%d = %.3f", min, max, (min * 1.0) / (max * 1.0));
  }

  return 0;
}