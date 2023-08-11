#include <stdio.h>

int main() {
  int i = 9, x = 105;
  while (i <= x) {
    printf("Loop: %d\n", i);
    i  += 6;
  }

  return 0;
}