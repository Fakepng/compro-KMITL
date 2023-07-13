#include <stdio.h>

int main() {
  printf("12345678901234567890123456789012345\n");
  // printf("=%f= is my score\n", 98.65493); //01
  // printf("=%.2f= is my score\n", 98.65493); //01
  // printf("=%.3f= is my score\n", 98.65493); //01
  // printf("=%.4f= is my score\n", 98.65493); //01
  // printf("=%10.2f= is my score\n", 98.65493); //01
  // printf("=%-10.2f= is my score\n", 98.65493); //01
  // printf("=%-5.2f= is my score\n", 3198.65493); //01
  printf("=%-1005.2f= is my score\n", 3198.65493); //01

  // printf("=%d= is my age\n", 18);         //02
  // printf("=%10d= is my age\n", 18);         //02
  printf("=%-10d= is my age\n", 18);         //02

  return 0;
}