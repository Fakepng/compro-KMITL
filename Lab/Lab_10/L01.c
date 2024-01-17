#include <stdio.h>
int main() {
  FILE *fp;
  fp = fopen("ce.html", "r");

  if (fp == NULL) {
    printf("File not found!\n");
    return 0;
  }

  int imageTag = 0, hyperlinkTag = 0;
  char tag[5];
  int tagIndex = -1;
  char ch;
  do {
    ch = getc(fp);

    if (ch == '<') {
      tagIndex = 0;
    }

    if (tagIndex >= 0) {
      tag[tagIndex++] = ch;
    }

    if (tagIndex == 4) {
      tag[tagIndex] = '\0';
      if (tag[1] == 'i' && tag[2] == 'm' && tag[3] == 'g') {
        imageTag++;
      } else if (tag[1] == 'a') {
        hyperlinkTag++;
      }
      for (int i = tagIndex; i > 0; i--) {
        tag[i] = '\0';
      }
      tagIndex = -1;
    }

  } while (ch != EOF);

  printf("Image tag: %d\nHyperlink tag: %d\n", imageTag, hyperlinkTag);

  return 0;
}