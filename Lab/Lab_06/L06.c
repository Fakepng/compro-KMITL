#include <stdio.h>

int main() {
  int x, j;

  printf("Input number: ");
  scanf("%d", &x);

  for (j = 0; j < 10; j++) {
    if (j < x) {
      printf("+");
    } else {
      printf("*");
    }
  }

  printf("\n\n");

  return 0;
}