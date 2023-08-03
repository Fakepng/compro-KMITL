#include <stdio.h>

int main() {
  int side;
  printf("Enter size of rectangle : ");
  scanf("%d", &side);

  if (side < 1) {
    printf("This is impossiple!");
    return 0;
  }

  for (int row = 0; row < side; row++) {
    for (int dot = 0; dot < side - row; dot++) {
      printf(".");
    }
    for (int slash = side; slash > side - row; slash--) {
      printf("/");
    }
    printf("\n");
  }

  return 0;
}