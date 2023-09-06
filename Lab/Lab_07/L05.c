#include <stdio.h>

void test(int x) {
  x += 10;
  printf("test: x = %d\n", x);
}

int main() {
  int x;
  x = 10;
  printf("main (before): x = %d\n", x);
  test(x);
  printf("main (after): x = %d\n", x);

  return 0;
}