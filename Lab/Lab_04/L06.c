#include <stdio.h>

int main() {
  int a, b, c;

  printf("Input 3 numbers: ");
  scanf("%d %d %d", &a, &b, &c);

  if ((a < b) && (a > c) || (a > b) && (a < c)) {
    printf("%d is the middle\n", a);
  } else if ((b < a) && (b > c) || (b > a) && (b < c)) {
    printf("%d is the middle\n", b);
  } else if ((c < a) && (c > b) || (c > a) && (c < b)) {
    printf("%d is the middle\n", c);
  } else {
    printf("No middle value\n");
  }

  return 0;
}