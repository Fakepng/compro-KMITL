#include <stdio.h>
#include <string.h>

int main() {
  char w[10] = "hello";
  char x[20] = "Hello";
  char y[20];
  char z[20] = " World";

  int v1, v2;

  strcpy(y, x);
  printf("after strcpy x = %s, y = %s\n", x, y);

  strcat(y, z);
  printf("after strcat y = %s, z = %s\n", y, z);

  v1 = strcmp(w, x);
  if (!v1) {
    printf("v1 = true\n");
  } else {
    printf("v1 = false\n");
  }

  v2 = strcmpi(w, x);
  if (!v2) {
    printf("v2 = true\n");
  } else {
    printf("v2 = false\n");
  }

  return 0;
}