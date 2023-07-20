#include <stdio.h>

int main() {
  float fahrenheit;
  printf("Enter temperature in degree Fahrenheit : ");
  scanf("%f", &fahrenheit); 
  printf("Temparature in degree Celsius : %.2f", (fahrenheit - 32) * 5 / 9);

  return 0;
}