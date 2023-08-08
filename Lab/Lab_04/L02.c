#include <stdio.h>

int main() {
  int x;
  printf("Input number: ");
  scanf("%d", &x);

  if (x > 130) {
    printf("C -> x=%d\n", x);
  } else if (x > 120) {
    printf("B -> x=%d\n", x);
  } else if (x > 100) {
    printf("A -> x=%d\n", x);
  } else if (x <= 100) {
    printf("D -> x<=100\n", x);
  }
}