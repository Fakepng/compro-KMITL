#include <stdio.h>

int findmax(int x, int y);

int main() {
  int num1, num2;

  printf("Enter two integers: ");
  scanf("%d %d", &num1, &num2);

  printf("The maximum of %d and %d is %d\n", num1, num2, findmax(num1, num2));
}

int findmax(int x, int y) {
  if (x > y) {
    return x;
  } else {
    return y;
  }
}