#include <stdio.h>

int x = 10;

void showx(void);

int main() {
  x = 99;
  printf("main: x = %d\n", x);
  showx();

  return 0;
}

void showx() {
  printf("showx: x = %d\n", x);
}