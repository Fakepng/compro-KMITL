#include <stdio.h>

int main() {
  int x, y, z;
  // scanf("%d%d%d", &x, &y, &z);      //01
  // scanf("%d %d %d", &x, &y, &z);      //01
  scanf("%d-%d-%d", &x, &y, &z);      //01
  printf("x = %d, y = %d, z = %d\n", x, y, z);

  return 0;
}