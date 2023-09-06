#include <stdio.h>

void showstar(int x);

int main() {
  int x;
  
  printf("Input number: ");
  scanf("%d", &x);
  showstar(x);
}

void showstar(int x) {
  int i;
  for (i = 0; i < x; i++) {
    printf("*");
  }
}