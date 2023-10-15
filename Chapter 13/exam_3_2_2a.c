#include <stdio.h>

int main() {
  char sentence[100];
  char capital[100];
  char small[100];
  printf("Enter a sentence : ");
  scanf("%[^\n]", sentence);

  int j = 0;
  for (int i = 0; sentence[i] != '\0'; i++) {
    int upper = 0;
    int lower = 0;
    int number = 0;
    int space = 0;

    if (sentence[i] >= 'A' && sentence[i] <= 'Z') {upper = 1;}
    if (sentence[i] >= 'a' && sentence[i] <= 'z') {lower = 1;}
    if (sentence[i] >= '0' && sentence[i] <= '9') {number = 1;}
    if (sentence[i] == ' ') {space = 1;}

    if (upper || lower || number || space) {
      char tempCapital = sentence[i];
      char tempSmall = sentence[i];

      if (sentence[i] >= 'A' && sentence[i] <= 'Z') {
        tempCapital = sentence[i];
        tempSmall = sentence[i] - 'A' + 'a';
      
      } else if (sentence[i] >= 'a' && sentence[i] <= 'z') {
        tempCapital = sentence[i] - 'a' + 'A';
        tempSmall = sentence[i];
      }

      capital[j] = tempCapital;
      small[j] = tempSmall;
      j++;
    }
  }

  capital[j] = '\0';
  small[j] = '\0';

  printf("Capital : %s\n", capital);
  printf("Small : %s\n", small);

  return 0;
}