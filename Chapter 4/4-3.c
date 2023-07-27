#include <stdio.h>

int main() {
  char ch;

  printf("Enter Alphabet : ");
  scanf("%c", &ch);

  if (ch == 'A' || ch == 'a') {
    printf("YES");
  } else {
    printf("NO");
  }

  return 0;
}