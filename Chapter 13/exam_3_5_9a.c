#include <stdio.h>

int main() {
  char sentence[100];
  int a = 0, r = 0, y = 0;

  printf("Enter the sentence : ");
  scanf("%[^\n]", sentence);

  for (int i = 0; sentence[i] != '\0'; i++) {
    if (sentence[i] == 'a') {a++;}
    if (sentence[i] == 'r') {r++;}
    if (sentence[i] == 'y') {y++;}
  }

  a = a / 2;
  r = r / 2;

  int count = 0;

  if (a <= r && a <= y) {count = a;}
  if (r <= a && r <= y) {count = r;}
  if (y <= a && y <= r) {count = y;}

  printf("The amount of \"array\" is %d.", count);

  return 0;
}