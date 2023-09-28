#include <stdio.h>

void add_money_to_wallet(int *wallet, int amount);

int main() {
  int wallet = 20;
  int income;

  printf("Enter money : ");
  scanf("%d", &income);

  add_money_to_wallet(&wallet, income);

  printf("My wallet -> %d", wallet);\

  return 0;
}

void add_money_to_wallet(int *wallet, int amount) {
  *wallet += amount;
}