#include <stdio.h>

int main() {
  int x = 10; //00
  while (x < 10) {
    printf("x=%d\n", x);
    // x += 4;     //01
  }
  printf("After loop end, x=%d\n", x); //02
  return 0;
}