#include <stdio.h>

int main() {
  int size;

  printf("Input number: ");
  scanf("%d", &size);

  printf("\n");

  for (int row = 0; row < size; row++) {
    for (int space = 0; space < row + 1; space++) {
      printf(" ");
    }
    
    for (int zero = 0; zero < 1 + ((size - row - 1) * 2); zero++) {
      printf("0");
    }

    printf("\n");
  }

  printf("\n\n\n\n");

  return 0;
}