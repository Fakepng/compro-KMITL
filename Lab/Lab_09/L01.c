#include <stdio.h>

int main() {
  int *x;
  int y = 10;

  x = &y;
  // printf("*x = %d\n", *x);
  // printf("*y = %d\n", y);
  // printf("*x = %p\n", x);
  printf("*y = %p\n", &y);

  return 0;
}