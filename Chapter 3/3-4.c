#include <stdio.h>

int main() {
  char digi[10];
  printf(" *** Show 3 digits ***\n");
  printf("Enter a 9-digit number : ");
  scanf("%s", digi);
  printf("output : %c%c%c", digi[1], digi[5], digi[8]);

  return 0;
}