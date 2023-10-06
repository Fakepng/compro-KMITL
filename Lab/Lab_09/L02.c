#include <stdio.h>

int main() {
  int *x;
  int y = 10;

  x = &y;
  (*x)++;

  printf("y = %d\n", y);

  return 0;
}