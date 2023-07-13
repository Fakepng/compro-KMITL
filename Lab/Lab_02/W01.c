#include <stdio.h>

int main() {
  printf("1234567890123456789012345678901234567890\n");
  printf("Shopping List\n");
  printf("=============\n");
  printf("1.  %-20s:%7.2f$\n", "Coffee", 2.25);
  printf("2.  %-20s:%7.2f$\n", "Sugar", 0.50);
  printf("3.  %-20s:%7.2f$\n", "Salt", 0.25);
  printf("4.  %-20s:%7.2f$\n", "Chilli paste", 1.25);
  printf("5.  %-20s:%7.2f$\n", "Butter", 4.75);
  printf("6.  %-20s:%7.2f$\n", "Whip cream", 3.00);
  printf("Total : 12.00");
}