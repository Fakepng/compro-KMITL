#include <stdio.h>

int main() {
  int column;

  printf("Input number: ");
  scanf("%d", &column);

  printf("\n");

  for (int row = 0; row <= column; row++) {
    for (int minus = 0; minus < row; minus++) {
      printf("-");
    }

    for (int plus = 0; plus < column - row; plus++) {
      printf("+");
    }
    
    printf("\n");
  }

  printf("\n\n\n\n");

  return 0;
}