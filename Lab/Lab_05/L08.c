#include <stdio.h>

int main() {
  int num;

  printf("Input number: ");
  scanf("%d", &num);

  int i = 1;
  do {
    printf("%d ", i);
    i++;
  } while (i <= num);
}