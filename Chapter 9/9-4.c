#include <stdio.h>

void mongkol(char *p);

int main() {
  char name[20];

  printf("Enter name : ");
  scanf("%[^\n]", &name);

  mongkol(name);
  
  printf("Mong-Kol name : %s", name);

  return 0;
}

void mongkol(char *p) {
  while (*p != '\0') {
    if (*p =='E' || *p == 'I' || *p == 'O' || *p == 'U') *p = 'A';
    if (*p =='e' || *p == 'i' || *p == 'o' || *p == 'u') *p = 'a';
    p++;
  }
}