#include <stdio.h>

int main() {
  char name[21];
  int length;
  
  printf("Enter your name : ");
  scanf("%s", name);

  for (length = 0; name[length] != '\0'; length++) {
    printf("%c\n", name[length] - 32);
  }

  printf("Name length : %d", length);

  return 0;
}