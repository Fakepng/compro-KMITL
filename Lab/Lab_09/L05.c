#include <stdio.h>

int main() {
  struct test {
    char name[30];
    int age;
    float gpa;
  };

  struct test x, *y;

  y = &x;

  printf("Enter name: ");
  scanf("%s", (*y).name);
}