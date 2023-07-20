#include <stdio.h>

int main() {
  int num;
  printf(" *** Show a number in variety formats. ***\n");
  printf("Enter integer : ");
  scanf("%d", &num);
  printf("Int\t-> %d\n", num);
  printf("Float\t-> %.2f\n", num * 1.0);
  printf("Int/3\t-> %.3f\n", num / 3.0);
  printf("Int^2\t-> %d\n", num * num);

  return 0;
}