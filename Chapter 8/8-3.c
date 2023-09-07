#include <stdio.h>
#include <stdlib.h>

int main() {
  printf(" *** Maximum diference of adjacent number ***\n");

  int num[11];

  printf("Enter 10 integers : ");
  for (int pos = 0; pos < 10; pos++) {
    scanf("%d", &num[pos]);
  }

  int max = abs(num[0] - num[1]);

  for (int i = 0; i < 9; i++) {
    int diff = abs(num[i] - num[i + 1]);
    if (diff > max) {
      max = diff;
    }
  }

  printf("Maximum differnce is %d", max);

  return 0;
}