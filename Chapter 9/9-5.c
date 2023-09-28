#include <stdio.h>

void add_word(char *text, char *word);

int main() {
  char text[50] = "I";
  char verb[10];

  printf("Enter verb : ");
  scanf("%s", verb);

  add_word(text, verb);
  add_word(text, "You");

  printf("Your text  : %s", text);

  return 0;
}

void add_word(char *text, char *word) {
  while (*text != '\0') {
    text++;
  }

  *text = ' ';
  text++;

  while (*word != '\0') {
    *text = *word;
    text++;
    word++;
  }

  *text = '\0';
}