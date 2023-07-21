#include <stdio.h>

int main() {
  float pi = 3.14159;
  float radius;
  float circumference;

  printf("Input radius: ");
  scanf("%f", &radius);
  printf("\nCircumference = %.3f\n", 2 * pi * radius);

  return 0;
}