#include <stdio.h>

int main() {
  int num[10];
  int min, max;
  printf(" *** Show max * min ***\n");
  printf("Enter 10 integers : ");

  for (int i = 0; i < 10; i++) {
    int temp;
    scanf("%d", &temp);

    if (i == 0) {min = temp; max = temp;}
    if (temp > max) {max = temp;}
    if (temp < min) {min = temp;}
  }

  printf("%d * %d = %d", max, min, max * min);

  return 0;
}