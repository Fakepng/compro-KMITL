#include <stdio.h>

int main() {
  int z[10] = {0, 9, 8, 7, 6, 5, 4, 3, 2, 1};
  int t;

  for (int round = 0; round < 10; round++) {
    for (int i = 0; i < 9; i++) {
    if (z[i] >= z[i + 1]) continue;

    t = z[i + 1];
    z[i + 1] = z[i];
    z[i] = t;
  }
  }

  return 0;
}