#include <stdio.h>

int main() {
  int num[11];

  printf(" *** Ascending sort ***\n");
  printf("Enter 10 whole numbers : ");
  for (int pos = 0; pos < 10; pos++) {
    scanf("%d", &num[pos]);
  }

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 9; j++) {
      if (num[j] > num[j + 1]) {
        int temp = num[j];
        num[j] = num[j + 1];
        num[j + 1] = temp;
      }
    }
  }

  printf("Output : ");
  for (int p = 0; p < 10; p++) {
    printf("%d ", num[p]);
  }

  return 0;
}