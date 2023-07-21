#include <stdio.h>

int main() {
  char str[20];
  // scanf("%s", str);     //01
  scanf("%[^\n]", str);     //01
  printf("str: %s\n", str);

  return 0;
}