#include <stdio.h>

void test(int *p) {
  *p = 99;
}

int main() {
  int i = 10;
  
  test(&i);

  printf("i = %d\n", i);

  return 0;
}