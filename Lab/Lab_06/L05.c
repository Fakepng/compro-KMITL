#include <stdio.h>

int main() {
  int x, j;

  printf("Input number: ");
  scanf("%d", &x);

  if (x > 3) {
    for (j = 0; j < x; j++) {
      printf("+");
    }
  }

  return 0;
}