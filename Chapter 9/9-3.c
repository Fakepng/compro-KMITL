#include <stdio.h>

void sort(int *array);

int main() {
  int scores[5];

  printf("Enter 5 score : ");
  for (int i = 0; i < 5; i++) {
    scanf("%d", &scores[i]);
  }

  sort(scores);

  printf("Sorted : ");
  for (int i = 0; i < 5; i++) {
    printf("%d ", scores[i]);
  }

  return 0;
}

void sort(int *array) {
  for (int i = 0; i < 5; i++) {
    for (int j = i + 1; j < 5; j++) {
      if (array[i] < array[j]) {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }
}