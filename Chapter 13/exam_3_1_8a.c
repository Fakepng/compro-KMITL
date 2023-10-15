#include <stdio.h>

int main() {
  int num;
  printf("Input number (2-6) : ");
  scanf("%d", &num);
  
  if (num < 2 || num > 6) {
    printf("Out of range !!!");
    return 0;
  }

  for (int i = 1; i <= 12; i++) {
    printf("%2d x %2d = %3d", num , i, num * i);
    printf("     ");
    printf("%2d x %2d = %3d", num + 1, i, (num + 1) * i);
    printf("     ");
    printf("%2d x %2d = %3d", num + 2, i, (num + 2) * i);
    printf("     ");
    printf("%2d x %2d = %3d", num + 3, i, (num + 3) * i);
    printf("\n");
  }

  return 0;
}