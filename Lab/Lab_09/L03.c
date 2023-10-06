#include <stdio.h>

int main() {
  int i[5] = { 1, 2, 3, 4, 5 };
  int *x;

  x = i;

  x++;
  printf("i[0] = %d\n", *x);

  return 0;
}
