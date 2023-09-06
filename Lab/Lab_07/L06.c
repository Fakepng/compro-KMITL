#include <stdio.h>

int test(int x) {
  x += 10;
  printf("test: x = %d\n", x);

  return x;
}

int main() {
  int x;
  x = 10;
  printf("main (before): x = %d\n", x);
  x = test(x);
  printf("main (after): x = %d\n", x);

  return 0;
}