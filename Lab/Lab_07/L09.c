#include <stdio.h>
#include <string.h>

int checkvowel(char ch);

int main() {
  char str[51];
  int vowelCount = 0;

  printf("Enter a string: ");
  scanf("%s", str);

  for (int i = 0; i < strlen(str); i++) {
    if (checkvowel(str[i])) {
      vowelCount++;
    }
  }

  printf("Number of vowels: %d\n", vowelCount);
}

int checkvowel(char ch) {
  if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
    return 1;
  } else {
    return 0;
  }
}