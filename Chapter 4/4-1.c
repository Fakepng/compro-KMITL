#include <stdio.h>

int main() {
  printf(" *** ODD/EVEN verification ***\n");

  int num;
  printf("Enter an integer : ");
  scanf("%d", &num);

  if (num % 2 == 0) {
    printf("%d is an EVEN number.", num);
  } else {
    printf("%d is an ODD number.", num);
  }

  return 0;
}