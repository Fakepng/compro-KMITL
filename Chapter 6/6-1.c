#include <stdio.h>

int main() {
  int count;
  printf(" *** Show isosceles triangle ***\n");
  printf("Enter a counting number : ");
  scanf("%d", &count);

  if (count < 3) {
    printf(" --- Incorrect number. ---");
    return 0;
  }
  printf("Output :\n");

  for (int row = 0; row < count; row++) {
    for (int col = 1; col < (count * 2); col++) {
      if (col >= count - row && col <= count + row) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    
    printf("\n");
  }
}