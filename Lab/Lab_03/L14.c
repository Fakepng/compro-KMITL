#include <stdio.h>

int main() {
  float labScore, midScore, finalScore;

  printf("Lab score: ");
  scanf("%f", &labScore);
  printf("Midterm score: ");
  scanf("%f", &midScore);
  printf("Final score: ");
  scanf("%f", &finalScore);

  printf("\nTotal score: %.3f", labScore + midScore + finalScore);

  return 0;
}