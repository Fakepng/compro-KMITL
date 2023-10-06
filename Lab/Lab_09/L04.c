#include <stdio.h>

int main() {
  int i[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 0 };
  int j, *x;

  x = i;

  for (j = 0; j < 10; j++) {
    printf("i[%d] = %d\n", j, *x);
    x++;
  }

  printf("\n\n*x = %d\n", *x);

  return 0;
}