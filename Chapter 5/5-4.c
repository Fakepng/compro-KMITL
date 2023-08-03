#include <stdio.h>

int main() {
  int count;
  printf("Enter a number : ");
  scanf("%d", &count);

  for (int row = 0; row < count; row++) {
    for (int alpha = 'A' + row; alpha < 'A' + row + count; alpha++) {
      printf("%c", alpha);
    }
    printf("\n");
  }

  return 0;
}