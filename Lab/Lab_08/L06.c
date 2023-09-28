#include <stdio.h>

int main() {
  struct payroll {
    char name[100];
    char address[100];
    float salary;
    float expenses;
  };
  struct payroll employee[4] = {
    {"John", "1 moo 1 Chalongkrung Rd., Ladkrabang, Bangkok, 10520", 3000000, 400000},
    {"Jeff", "1 moo 1 Chalongkrung Rd., Ladkrabang, Bangkok, 10520", 30000, 40000},
    {"Wish", "1 moo 1 Chalongkrung Rd., Ladkrabang, Bangkok, 10520", 15000, 2000},
    {"Krit", "1 moo 1 Chalongkrung Rd., Ladkrabang, Bangkok, 10520", 10000, 20000}
  };

  return 0;
}