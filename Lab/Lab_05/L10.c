#include <stdio.h>

int main() {
  int total = 0;

  while (1) {
    int num;
    printf("Input number: ");
    scanf("%d", &num);

    if (num == 0) {
      printf("Total=%d\n", total);
      break;
    }

    total += num;
  }
}