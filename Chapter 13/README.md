# Chapter 13: Quiz 2

[Back](../README.md)

## Table of Contents

- [exam_3_1_8a](#quiz21-exam_3_1_8a)
- [exam_3_2_2a](#quiz22-exam_3_2_2a)
- [exam_3_3_3a](#quiz23-exam_3_3_3a)
- [exam_3_4_10a](#quiz24-exam_3_4_10a)
- [exam_3_5_9a](#quiz25-exam_3_5_9a)

## Quiz2.1 exam_3_1_8a

Question:

```c
จงเขียนโปรแกรมรับ 1 จำนวนเต็มที่มีค่าระหว่าง 2 - 6 เพื่อแสดงสูตรคูณตัวมันและอีก 3 จำนวนถัดไป แล้วให้แสดงผลตามตัวอย่าง
```

Output:

Testcase: 1

```
Input number (2-6) : 2
 2 x  1 =   2      3 x  1 =   3      4 x  1 =   4      5 x  1 =   5
 2 x  2 =   4      3 x  2 =   6      4 x  2 =   8      5 x  2 =  10
 2 x  3 =   6      3 x  3 =   9      4 x  3 =  12      5 x  3 =  15
 2 x  4 =   8      3 x  4 =  12      4 x  4 =  16      5 x  4 =  20
 2 x  5 =  10      3 x  5 =  15      4 x  5 =  20      5 x  5 =  25
 2 x  6 =  12      3 x  6 =  18      4 x  6 =  24      5 x  6 =  30
 2 x  7 =  14      3 x  7 =  21      4 x  7 =  28      5 x  7 =  35
 2 x  8 =  16      3 x  8 =  24      4 x  8 =  32      5 x  8 =  40
 2 x  9 =  18      3 x  9 =  27      4 x  9 =  36      5 x  9 =  45
 2 x 10 =  20      3 x 10 =  30      4 x 10 =  40      5 x 10 =  50
 2 x 11 =  22      3 x 11 =  33      4 x 11 =  44      5 x 11 =  55
 2 x 12 =  24      3 x 12 =  36      4 x 12 =  48      5 x 12 =  60
```

Testcase: 2

```
Input number (2-6) : 10
Out of range !!!
```

Testcase: 3

```
Input number (2-6) : -10
Out of range !!!
```

Testcase: 4

```
Input number (2-6) : 6
 6 x  1 =   6      7 x  1 =   7      8 x  1 =   8      9 x  1 =   9
 6 x  2 =  12      7 x  2 =  14      8 x  2 =  16      9 x  2 =  18
 6 x  3 =  18      7 x  3 =  21      8 x  3 =  24      9 x  3 =  27
 6 x  4 =  24      7 x  4 =  28      8 x  4 =  32      9 x  4 =  36
 6 x  5 =  30      7 x  5 =  35      8 x  5 =  40      9 x  5 =  45
 6 x  6 =  36      7 x  6 =  42      8 x  6 =  48      9 x  6 =  54
 6 x  7 =  42      7 x  7 =  49      8 x  7 =  56      9 x  7 =  63
 6 x  8 =  48      7 x  8 =  56      8 x  8 =  64      9 x  8 =  72
 6 x  9 =  54      7 x  9 =  63      8 x  9 =  72      9 x  9 =  81
 6 x 10 =  60      7 x 10 =  70      8 x 10 =  80      9 x 10 =  90
 6 x 11 =  66      7 x 11 =  77      8 x 11 =  88      9 x 11 =  99
 6 x 12 =  72      7 x 12 =  84      8 x 12 =  96      9 x 12 = 108
```

Testcase: 5

```
Input number (2-6) : 4
 4 x  1 =   4      5 x  1 =   5      6 x  1 =   6      7 x  1 =   7
 4 x  2 =   8      5 x  2 =  10      6 x  2 =  12      7 x  2 =  14
 4 x  3 =  12      5 x  3 =  15      6 x  3 =  18      7 x  3 =  21
 4 x  4 =  16      5 x  4 =  20      6 x  4 =  24      7 x  4 =  28
 4 x  5 =  20      5 x  5 =  25      6 x  5 =  30      7 x  5 =  35
 4 x  6 =  24      5 x  6 =  30      6 x  6 =  36      7 x  6 =  42
 4 x  7 =  28      5 x  7 =  35      6 x  7 =  42      7 x  7 =  49
 4 x  8 =  32      5 x  8 =  40      6 x  8 =  48      7 x  8 =  56
 4 x  9 =  36      5 x  9 =  45      6 x  9 =  54      7 x  9 =  63
 4 x 10 =  40      5 x 10 =  50      6 x 10 =  60      7 x 10 =  70
 4 x 11 =  44      5 x 11 =  55      6 x 11 =  66      7 x 11 =  77
 4 x 12 =  48      5 x 12 =  60      6 x 12 =  72      7 x 12 =  84
```

Testcase: 6

```
Input number (2-6) : 5
 5 x  1 =   5      6 x  1 =   6      7 x  1 =   7      8 x  1 =   8
 5 x  2 =  10      6 x  2 =  12      7 x  2 =  14      8 x  2 =  16
 5 x  3 =  15      6 x  3 =  18      7 x  3 =  21      8 x  3 =  24
 5 x  4 =  20      6 x  4 =  24      7 x  4 =  28      8 x  4 =  32
 5 x  5 =  25      6 x  5 =  30      7 x  5 =  35      8 x  5 =  40
 5 x  6 =  30      6 x  6 =  36      7 x  6 =  42      8 x  6 =  48
 5 x  7 =  35      6 x  7 =  42      7 x  7 =  49      8 x  7 =  56
 5 x  8 =  40      6 x  8 =  48      7 x  8 =  56      8 x  8 =  64
 5 x  9 =  45      6 x  9 =  54      7 x  9 =  63      8 x  9 =  72
 5 x 10 =  50      6 x 10 =  60      7 x 10 =  70      8 x 10 =  80
 5 x 11 =  55      6 x 11 =  66      7 x 11 =  77      8 x 11 =  88
 5 x 12 =  60      6 x 12 =  72      7 x 12 =  84      8 x 12 =  96
```

<details>
<summary>Answer</summary>

[View](/Chapter%2013/exam_3_1_8a.c)

```c
#include <stdio.h>

int main() {
  int num;
  printf("Input number (2-6) : ");
  scanf("%d", &num);

  if (num < 2 || num > 6) {
    printf("Out of range !!!");
    return 0;
  }

  for (int i = 1; i <= 12; i++) {
    printf("%2d x %2d = %3d", num , i, num * i);
    printf("     ");
    printf("%2d x %2d = %3d", num + 1, i, (num + 1) * i);
    printf("     ");
    printf("%2d x %2d = %3d", num + 2, i, (num + 2) * i);
    printf("     ");
    printf("%2d x %2d = %3d", num + 3, i, (num + 3) * i);
    printf("\n");
  }

  return 0;
}
```

</details>

## Quiz2.2 exam_3_2_2a

Question:

```c
จงเขียนโปรแกรมรับข้อความ หนึ่งบรรทัด
แล้วแสดงผล 2 บรรทัด โดยแสดงเฉพาะตัวอักษร และตัวเลข
บรรทัดที่ 1 แสดงผลเป็น ตัวอักษรตัวใหญ่
บรรทัดที่ 2 แสดงผลเป็น ตัวอักษรตัวเล็ก

ข้อแนะนำ
ใช้ function toupper และ tolower ซึ่งอยู่ใน ctype.h
```

Output:

Testcase: 1

```
Enter a sentence : Hello 2565 !!!
Capital : HELLO 2565
Small : hello 2565
```

Testcase: 2

```
Enter a sentence : This is my world.
Capital : THIS IS MY WORLD
Small : this is my world
```

Testcase: 3

```
Enter a sentence : Are you dare to copy other person program?
Capital : ARE YOU DARE TO COPY OTHER PERSON PROGRAM
Small : are you dare to copy other person program
```

Testcase: 4

```
Enter a sentence :  \* @@@Institute of Technology Ladkrabang@@@ */
Capital :   INSTITUTE OF TECHNOLOGY LADKRABANG
Small :   institute of technology ladkrabang
```

<details>
<summary>Answer</summary>

[View](/Chapter%2013/exam_3_2_2a.c)

```c
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
```

</details>

## Quiz2.3 exam_3_3_3a

Question:

```c
จงเขียนโปรแกรมรับ ตัวเลข 10 จำนวน แล้วแสดงผลคูณของ จำนวนที่น้องที่สุด และ จำนวนที่มากที่สุด
- วนลูป รับค่าทีละจำนวน
- แต่ละครั้งของการวนลูป ตรวจสอบ ค่า max และ min ต้องกำหนดค่าใหม่หรือไม่
```

Output:

Testcase: 1

```
 *** Show max * min ***
Enter 10 integers : 1 2 3 4 5 6 7 8 9 55
55 * 1 = 55
```

Testcase: 2

```
 *** Show max * min ***
Enter 10 integers : 86 12 15 66 3 17 97 199 31 77
199 * 3 = 597
```

Testcase: 3

```
 *** Show max * min ***
Enter 10 integers : 1 66 1 33 44 88 36 99 71 99
99 * 1 = 99
```

Testcase: 4

```
 *** Show max * min ***
Enter 10 integers : 7 8 9 7 8 9 7 8 9 1
9 * 1 = 9
```

<details>
<summary>Answer</summary>

[View](/Chapter%2013/exam_3_3_3a.c)

```c
#include <stdio.h>

int main() {
  int num[10];
  int min, max;
  printf(" *** Show max * min ***\n");
  printf("Enter 10 integers : ");

  for (int i = 0; i < 10; i++) {
    int temp;
    scanf("%d", &temp);

    if (i == 0) {min = temp; max = temp;}
    if (temp > max) {max = temp;}
    if (temp < min) {min = temp;}
  }

  printf("%d * %d = %d", max, min, max * min);

  return 0;
}
```

</details>

## Quiz2.4 exam_3_4_10a

Question:

```c
กำหนด
int num[8][10] = {
    2,   3,   5,   7,  11,  13,  17,  19,  29,  31,
   37,  41,  43,  37,  61,  71,  73,  79,  83,  97,
  103, 107, 109, 113, 131, 151, 181, 191, 193, 173,
  163, 113, 102, 107, 127, 137, 257, 139, 149, 369,
  212, 224, 236, 248, 313, 326, 339, 341, 355, 368,
    2,   4,   6,   6,  10,  12,  14,  16,  18,  20,
    1,   3,   5,   7,   9,  11,  13,  17,  19,  21,
  163, 113, 102, 107, 127, 137, 257, 139, 149, 369
};
เขียนโปรแกรม รับค่าตัวเลข แล้วแสดงตำแหน่ง row, column ดังตัวอย่าง
ถ้า ตัวเลขที่ป้อนเข้ามาไม่มีใน ให้แสดงว่า "NOT FOUND!"
```

Output:

Testcase: 1

```
 *** Find a value in array 2 dimension ***
Enter a value : 3
    2    3    5    7   11   13   17   19   29   31
   37   41   43   37   61   71   73   79   83   97
  103  107  109  113  131  151  181  191  193  173
  163  113  102  107  127  137  257  139  149  369
  212  224  236  248  313  326  339  341  355  368
    2    4    6    6   10   12   14   16   18   20
    1    3    5    7    9   11   13   17   19   21
  163  113  102  107  127  137  257  139  149  369

Finding value => 3
1. (row,column) => (1,2)
2. (row,column) => (7,2)
```

Testcase: 2

```
 *** Find a value in array 2 dimension ***
Enter a value : 99
    2    3    5    7   11   13   17   19   29   31
   37   41   43   37   61   71   73   79   83   97
  103  107  109  113  131  151  181  191  193  173
  163  113  102  107  127  137  257  139  149  369
  212  224  236  248  313  326  339  341  355  368
    2    4    6    6   10   12   14   16   18   20
    1    3    5    7    9   11   13   17   19   21
  163  113  102  107  127  137  257  139  149  369

Finding value => 99
 --- !!! NOT FOUND !!! ---
```

Testcase: 3

```
 *** Find a value in array 2 dimension ***
Enter a value : 45
    2    3    5    7   11   13   17   19   29   31
   37   41   43   37   61   71   73   79   83   97
  103  107  109  113  131  151  181  191  193  173
  163  113  102  107  127  137  257  139  149  369
  212  224  236  248  313  326  339  341  355  368
    2    4    6    6   10   12   14   16   18   20
    1    3    5    7    9   11   13   17   19   21
  163  113  102  107  127  137  257  139  149  369

Finding value => 45
 --- !!! NOT FOUND !!! ---
```

Testcase: 4

```
 *** Find a value in array 2 dimension ***
Enter a value : 13
    2    3    5    7   11   13   17   19   29   31
   37   41   43   37   61   71   73   79   83   97
  103  107  109  113  131  151  181  191  193  173
  163  113  102  107  127  137  257  139  149  369
  212  224  236  248  313  326  339  341  355  368
    2    4    6    6   10   12   14   16   18   20
    1    3    5    7    9   11   13   17   19   21
  163  113  102  107  127  137  257  139  149  369

Finding value => 13
1. (row,column) => (1,6)
2. (row,column) => (7,7)
```

<details>
<summary>Answer</summary>

[View](/Chapter%2013/exam_3_4_10a.c)

```c
#include <stdio.h>

int main() {
  int num[8][10] = {
      2,   3,   5,   7,  11,  13,  17,  19,  29,  31,
     37,  41,  43,  37,  61,  71,  73,  79,  83,  97,
    103, 107, 109, 113, 131, 151, 181, 191, 193, 173,
    163, 113, 102, 107, 127, 137, 257, 139, 149, 369,
    212, 224, 236, 248, 313, 326, 339, 341, 355, 368,
      2,   4,   6,   6,  10,  12,  14,  16,  18,  20,
      1,   3,   5,   7,   9,  11,  13,  17,  19,  21,
    163, 113, 102, 107, 127, 137, 257, 139, 149, 369
  };

  int search;

  printf(" *** Find a value in array 2 dimension ***\n");
  printf("Enter a value : ");
  scanf("%d", &search);

  for (int row = 0; row < 8; row++) {
    for (int col = 0; col < 10; col++) {
      printf(" %4d", num[row][col]);
    }
    printf("\n");
  }

  printf("\n");
  printf("Finding value => %d\n", search);
  int found = 0;
  for (int row = 0; row < 8; row++) {
    for (int col = 0; col < 10; col++) {
      if (num[row][col] == search) {
        found++;
        printf("%d. (row,column) => (%d,%d)\n", found, row + 1, col + 1);
      }
    }
  }

  if (found == 0) {
    printf(" --- !!! NOT FOUND !!! ---");
  }

  return 0;
}
```

</details>

## Quiz2.5 exam_3_5_9a

Question:

```c
จงเขียนโปรแกรมรับกลุ่มตัวอักษรภาษาอังกฤษ แล้วตรวจสอบกลุ่มตัวอักษรที่รับเข้ามาว่ามีคำว่า array กี่คำ เช่น กลุ่มตัวอักษรที่รับเข้ามาคือ aarrrriaakyy ถ้านำตัวอักษรจากตัวอย่างมาเรียงใหม่จะได้คำว่า array 2 คำ แล้วแสดงผลตามตัวอย่าง
```

Output:

Testcase: 1

```
Enter the sentence : aarrrriaakyy
The amount of "array" is 2.
```

Testcase: 2

```
Enter the sentence : kmitl fight
The amount of "array" is 0.
```

Testcase: 3

```
Enter the sentence : fight ayarr computer programming ay arr
The amount of "array" is 2.
```

Testcase: 4

```
Enter the sentence : i am ray, where are you?
The amount of "array" is 1.
```

<details>
<summary>Answer</summary>

[View](/Chapter%2013/exam_3_5_9a.c)

```c
#include <stdio.h>

int main() {
  char sentence[100];
  int a = 0, r = 0, y = 0;

  printf("Enter the sentence : ");
  scanf("%[^\n]", sentence);

  for (int i = 0; sentence[i] != '\0'; i++) {
    if (sentence[i] == 'a') {a++;}
    if (sentence[i] == 'r') {r++;}
    if (sentence[i] == 'y') {y++;}
  }

  a = a / 2;
  r = r / 2;

  int count = 0;

  if (a <= r && a <= y) {count = a;}
  if (r <= a && r <= y) {count = r;}
  if (y <= a && y <= r) {count = y;}

  printf("The amount of \"array\" is %d.", count);

  return 0;
}
```

</details>

[Top](#quiz-2)
