#include <stdio.h>

int main() {
  int x;
  printf("Input number: ");
  scanf("%d", &x);

  if (x > 30) {
    printf("%d is greater than 30\n", x);
  } else if (x > 20) {
    printf("%d is greater than 20\n", x);
  }
}