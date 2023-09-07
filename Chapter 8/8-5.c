#include <stdio.h>

struct Student {
  char id[9];
  char name[40];
  int marking;
};

int main() {
  struct Student st[10];

  printf(" *** Structure Array 2 ***\n");
  printf("Enter data : ");

  for (int i = 0; i < 10; i++) {
    scanf("%s %s %d", st[i].id, st[i].name, &st[i].marking);
  }

  int max = st[0].marking;

  for (int j = 0; j < 10; j++) {
    if (st[j].marking > max) {
      max = st[j].marking;
    }
  }

  int count = 0;

  for (int k = 0; k < 10; k++) {
    if (st[k].marking == max) {
      count++;
    }
  }

  printf("\n\n *** Analyzing Data ***\n");
  printf("Max marking   = %d points, %d students.\n", max, count);

  int pos = 0;
  for (int l = 0; l < 10; l++) {
    if (st[l].marking == max) {
      pos++;
      printf("%d. %s %s %d\n", pos, st[l].id, st[l].name, st[l].marking);
    }
  }

  return 0;
}