#include <stdio.h>

int main() {
  int num[10];
  int min, max;
  printf(" *** Show max * min ***\n");
  printf("Enter 10 integers : ");
  for (int i = 0; i < 10; i++) {
    scanf("%d", &num[i]);
  }

  min = num[0];
  max = num[0];

  for (int j = 0; j < 10; j++) {
    if (num[j] < min) {
      min = num[j];
    }

    if (num[j] > max) {
      max = num[j];
    }
  }

  printf("%d * %d = %d", max, min, max * min);
}