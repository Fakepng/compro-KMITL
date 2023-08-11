#include <stdio.h>

int main() {
  int i, x, sum = 0;
  printf("Input number: ");
  scanf("%d", &x);

  for (i = 1; i <= x; i++) {
    sum += i;
    printf("Loop:%d, sum=%d\n", i, sum);
  }

  printf("Median from 1 to %d = %f\n", x, (sum * 1.0) / (x * 1.0));
}