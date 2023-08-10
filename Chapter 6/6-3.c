#include <stdio.h>

int main() {
  int num;
  printf("Enter a number (1-16) : ");
  scanf("%d", &num);

  if (num < 1 || num > 16) {
    printf("Out of range ! ! !");
    return 0;
  }

  for (int row = 0; row < num; row++) {
    for (int col = num; col > 0; col--) {
      if (row > 0 && row < num - 1 && col > 1 && col < num) {
        printf(" ");
        continue;
      }

      printf("%X", col);
    }
    printf("\n");
  }
}