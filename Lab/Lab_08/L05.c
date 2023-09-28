#include <stdio.h>

int main() {
  struct profile {
    char name[50];
    char id[10];
    int age;
  };
  struct profile student = {"Somchai", "70011111", 17};

  return 0;
}