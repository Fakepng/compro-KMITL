#include <stdio.h>

int main() {
  int x;                                  //00
  x = 1;                                  //01
  // x = 0;                                  //01

  // while (x < 5) {
  // while (x <= 5) {
  while (x < 10) {
    printf("Loop Test %d\n", x);
    x++;                                  //02
  }

  printf("\nAfter loop end, x=%d\n", x);  //03

  return 0;
}