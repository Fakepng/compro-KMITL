#include <stdio.h>

int main() {
  int end, start, diff;
  printf(" *** Arithmetic Sequence ***\n");
  printf("Enter 2 Positive Integers: ");
  scanf("%d %d", &start, &diff);

  end = (diff * 9) + start;
  for (int i = end; i >= start; i = i - diff) {
    printf("%d ", i);
  }
  
  return 0;
}