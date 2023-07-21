#include <stdio.h>

int main() {
  float gravity = 9.8;
  float massG, massKg;
  float heighCm, heighM;

  printf("Input mass (g): ");
  scanf("%f", &massG);
  printf("Input height (cm): ");
  scanf("%f", &heighCm);

  massKg = massG / 1000;
  heighM = heighCm / 100;

  printf("\nPotential Energy = %.2f", massKg * gravity * heighM);

  return 0;
}