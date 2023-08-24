#include <stdio.h>
#include <string.h>

void capitalize(char string[]);
void smallize(char string[]);
void titleCase(char string[]);

char capital[50], small[50], title[50];

int main() {
  char string[50];
  printf("Enter a string : ");
  scanf("%[^\n]", &string);

  capitalize(string);
  smallize(string);
  titleCase(string);

  printf("Capital : %s\n", capital);
  printf("Small : %s\n", small);
  printf("Title : %s\n", title);

  return 0;
}

void capitalize(char string[]) {
  for (int i = 0; i < strlen(string); i++) {
    if (string[i] >= 'a' && string[i] <= 'z') {
      capital[i] = string[i] - 32;
    } else {
      capital[i] = string[i];
    }
  }
}

void smallize(char string[]) {
  for (int i = 0; i < strlen(string); i++) {
    if (string[i] >= 'A' && string[i] <= 'Z') {
      small[i] = string[i] + 32;
    } else {
      small[i] = string[i];
    }
  }
}

void titleCase(char string[]) {
  for (int i = 0; i < strlen(string); i++) {
    if (i == 0) {
      if (string[i] >= 'a' && string[i] <= 'z') {
        title[i] = string[i] - 32;
      } else {
        title[i] = string[i];
      }
    } else {
      if (string[i - 1] == ' ') {
        if (string[i] >= 'a' && string[i] <= 'z') {
          title[i] = string[i] - 32;
        } else {
          title[i] = string[i];
        }
      } else {
        if (string[i] >= 'A' && string[i] <= 'Z') {
          title[i] = string[i] + 32;
        } else {
          title[i] = string[i];
        }
      }
    }
  }
}

