#include <stdio.h>

int checkprime(int value);

int main() {
  int min, max;

  printf("Enter min max: ");
  scanf("%d %d", &min, &max);

  for (int val = min; val <= max; val++) {
    if (checkprime(val)) {
      printf("%d ", val);
    }
  }
}

int checkprime(int value) {
  if (value < 2) {
    return 0;
  }

  for (int i = 2; i < value; i++) {
    if (value % i == 0) {
      return 0;
    }
  }

  return 1;
}