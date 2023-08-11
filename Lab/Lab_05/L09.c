#include <stdio.h>

int main() {
  int num;

  printf("Input number: ");
  scanf("%d", &num);

  int i = 1;
  do {
    printf("%d*%d=%d\n", num, i, num * i);
    i++;
  } while (i <= 12);
}