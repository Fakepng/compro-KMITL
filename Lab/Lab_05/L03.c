#include <stdio.h>

int main() {
  int x;       //00
  x = 0;      //01
  while (x < 36) { //02
    printf("Hello there\n");
    x += 6;       //03
  }
  printf("After loop end, x=%d\n", x);
  return 0;
}