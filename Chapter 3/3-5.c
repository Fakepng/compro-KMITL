#include <stdio.h>

int main() {
  int num;
  printf("Enter lottery number : ");
  scanf("%d", &num);
  printf("Jackpot\t: %d\n", num);
  printf("+1\t: %d\n", num + 1);
  printf("-1\t: %d\n", num - 1);
  printf("First 3\t: %d\n", num / 1000);
  printf("Last 3\t: %d\n", num % 1000);

  return 0;
}