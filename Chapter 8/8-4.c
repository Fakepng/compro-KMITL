#include<stdio.h>

#define SIZE 10

int main() {
  struct student {
    char id[9];
    char name[40];
    int marking;
  } st[SIZE];

  int i, i_max, i_min;
  float average = 0,sum = 0;

  printf(" *** Structure Array ***\n");
  printf("Enter data : ");

  for (i = 0; i < SIZE; i++) {
    scanf("%s %s %d", st[i].id, st[i].name, &st[i].marking);
  }

  i_max=0;
  i_min=0;

  for (i = 0; i < SIZE; i++) {
    if (st[i].marking > st[i_max].marking) {
      i_max = i;
    }
    if (st[i].marking < st[i_min].marking) {
      i_min = i;
    }
    sum += st[i].marking;
  }

  average = sum/SIZE;
  printf("\n\n *** Analyzing Data ***\n");
  printf("Average marking = %.3f\n",average);
  printf("Min -- Max      = %d --> %d\n",st[i_min].marking,st[i_max].marking);

  return 0;
}