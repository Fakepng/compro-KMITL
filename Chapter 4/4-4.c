#include <stdio.h>

int main() {
  printf(" *** Character Sum Number ***\n");

  char ch1, ch2, ch3;
  int num1, num2, num3;

  printf("Enter 3 Character (A,B,C) : ");
  scanf("%c %c %c", &ch1, &ch2, &ch3);

  if (ch1 == 'A') {
    num1 = 10;
  } else if (ch1 == 'B') {
    num1 = 20;
  } else if (ch1 == 'C') {
    num1 = 30;
  } else {
    printf("Input Incorrect.");
    return 0;
  }

  if (ch2 == 'A') {
    num2 = 10;
  } else if (ch2 == 'B') {
    num2 = 20;
  } else if (ch2 == 'C') {
    num2 = 30;
  } else {
    printf("Input Incorrect.");
    return 0;
  }

  if (ch3 == 'A') {
    num3 = 10;
  } else if (ch3 == 'B') {
    num3 = 20;
  } else if (ch3 == 'C') {
    num3 = 30;
  } else {
    printf("Input Incorrect.");
    return 0;
  }

  printf("%c = %d , %c = %d , %c = %d\n", ch1, num1, ch2, num2, ch3, num3);
  printf("%c + %c + %c = %d + %d + %d = %d", ch1, ch2, ch3, num1, num2, num3, num1 + num2 + num3);

  return 0;
}