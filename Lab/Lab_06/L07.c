#include <stdio.h>

int main() {
  int x, j, k;

  printf("Input number: ");
  scanf("%d", &x);

  for (j = 0; j < x; j++) {
    printf("+");
  }

  for (k = x; k < 10; k++) {
    printf("*");
  }

  printf("\n\n");

  return 0;
}