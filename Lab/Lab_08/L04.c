#include <stdio.h>

int main() {
  int array[2][3];

  for (int row = 0; row < 2; row++) {
    printf("Enter row %d: ", row + 1);

    for (int col = 0; col < 3; col++) {
      scanf("%d", &array[row][col]);
    }
  }
}