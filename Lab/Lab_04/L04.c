#include <stdio.h>

int main() {
  // float a = 1.9, b = 0.2, c = 1.7;
  float a = 1.5, b = 0.25, c = 1.25;

  printf("a=%.10f\n", a);
  printf("b=%.10f\n", b);
  printf("c=%.10f\n", c);
  printf("a-b=%.10f\n", a - b);
  printf("(a-b)==c >>>>> Logic: %d", (a - b) == c);

  return 0;
}