#include <stdio.h>

int main() {
  int count;
  printf("Enter number : ");
  scanf("%d", &count);

  if (count <= 0) {
    printf("</3");
    return 0;
  } else if (count > 10) {
    printf("Too much :(");
    return 0;
  }

  for (int row = 0; row < count; row++) {
    printf("I Love You\n");
  }

  return 0;
}