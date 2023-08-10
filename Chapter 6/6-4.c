#include <stdio.h>

int main() {
  int num;
  printf("Enter : ");
  scanf("%d", &num);

  for (int row = 0; row < num; row++) {
    for (int col = 0; col < num; col++) {
      printf("%c", 'A' + (col + row) % num);
    }

    printf("\n");
  }
}