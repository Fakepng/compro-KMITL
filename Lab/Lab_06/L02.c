#include <stdio.h>

int main() {
  int i, j;

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 3; j++) {
      printf("+");
      printf("\n");
    }
  }

  return 0;
}