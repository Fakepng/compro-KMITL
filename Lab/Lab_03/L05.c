#include <stdio.h>

int main() {
  int x;          //01
  // int x = 0;          //01
  scanf("%d", x); //02
  // scanf("%d", &x); //02
  printf("x = %d\n", x);

  return 0;
}