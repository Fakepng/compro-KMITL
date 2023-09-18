# Chapter 8: ตัวแปรแบบแถวลำดับและตัวแปรแบบโครงสร้าง

[Back](../README.md)

## Table of Contents

- [Array 1 dimension](#81-array-1-dimension)
- [Array 2 dimensions](#82-array-2-dimensions)
- [ผลต่างมากสุดของจำนวนที่ติดกัน](#83-ผลต่างมากสุดของจำนวนที่ติดกัน)
- [structure array 1](#84-structure-array-1)
- [structure array 2](#85-structure-array-2)

## 8.1 Array 1 dimension

Question:

```c
รับข้อมูลจำนวนเต็ม 10 จำนวน แล้ว แสดงผลเรียงจากน้อยไปมาก
แสดงผลตามตัวอย่าง
```

Output:

Testcase: 1

```
 *** Ascending sort ***
Enter 10 whole numbers : 10 20 30 40 50 60 70 80 90 22
Output : 10 20 22 30 40 50 60 70 80 90
```

Testcase: 2

```
 *** Ascending sort ***
Enter 10 whole numbers : 19 3 9 17 36 44 37 2 69 96
Output : 2 3 9 17 19 36 37 44 69 96
```

Testcase: 3

```
 *** Ascending sort ***
Enter 10 whole numbers : 97 83 53 43 47 23 29 31 71 79
Output : 23 29 31 43 47 53 71 79 83 97
```

Testcase: 4

```
 *** Ascending sort ***
Enter 10 whole numbers : 69 95 41 20 0 -9 -63 50 17 3
Output : -63 -9 0 3 17 20 41 50 69 95
```

<details>
<summary>Answer</summary>

[View](/Chapter%208/8-1.c)

```c
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
```

</details>

## 8.2 Array 2 dimensions

Question:

```c
กำหนด

int num[8][10] = {  2,   3,   5,   7,  11,  13,  17,  19,  29,  31,
                   37,  41,  43,  37,  61,  71,  73,  79,  83,  97,
                  103, 107, 109, 113, 131, 151, 181, 191, 193, 173,
                  163, 113, 102, 107, 127, 137, 257, 139, 149, 369,
                  212, 224, 236, 248, 313, 326, 339, 341, 355, 368,
                    2,   4,   6,   6,  10,  12,  14,  16,  18,  20,
                    1,   3,   5,   7,   9,  11,  13,  17,  19,  21,
                  163, 113, 102, 107, 127, 137, 257, 139, 149, 369
                };

เขียนโปรแกรม รับค่าตัวเลข แล้วแสดงตำแหน่ง row, column ดังตัวอย่าง
ถ้า ตัวเลขที่ป้อนเข้ามาไม่มีใน ให้แสดง NOT FOUND!
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

[View](/Chapter%208/8-2.c)

```c
#include <stdio.h>

int main() {
  int num[8][10] = {  2,   3,   5,   7,  11,  13,  17,  19,  29,  31,
                     37,  41,  43,  37,  61,  71,  73,  79,  83,  97,
                    103, 107, 109, 113, 131, 151, 181, 191, 193, 173,
                    163, 113, 102, 107, 127, 137, 257, 139, 149, 369,
                    212, 224, 236, 248, 313, 326, 339, 341, 355, 368,
                      2,   4,   6,   6,  10,  12,  14,  16,  18,  20,
                      1,   3,   5,   7,   9,  11,  13,  17,  19,  21,
                    163, 113, 102, 107, 127, 137, 257, 139, 149, 369
                  };

  printf(" *** Find a value in array 2 dimension ***\n");

  int value;

  printf("Enter a value : ");
  scanf("%d", &value);

  for (int row = 0; row < 8; row++) {
    for (int col = 0; col < 10; col++) {
      printf("  %3d", num[row][col]);
    }
    printf("\n");
  }

  int found = 0;

  printf("\nFinding value => %d\n", value);

  for (int row = 0; row < 8; row++) {
    for (int col = 0; col < 10; col++) {
      if (num[row][col] == value) {
        found += 1;
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

## 8.3 ผลต่างมากสุดของจำนวนที่ติดกัน

Question:

```c
รับจำนวนเต็ม 10 จำนวน
แล้วตรวจสอบว่า ผลต่างของจำนวนติดกัน มีค่ามากที่สุดเท่าไหร่
```

Output:

Testcase: 1

```
 *** Maximum diference of adjacent number ***
Enter 10 integers : 1 2 3 4 5 6 7 8 9 10
Maximum differnce is 1
```

Testcase: 2

```
 *** Maximum diference of adjacent number ***
Enter 10 integers : 1 3 5 25 12 99 47 97 14 17
Maximum differnce is 87
```

Testcase: 3

```
 *** Maximum diference of adjacent number ***
Enter 10 integers : 2 4 6 8 10 -10 -8 -6 -4 -2
Maximum differnce is 20
```

<details>
<summary>Answer</summary>

[View](/Chapter%208/8-3.c)

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
  printf(" *** Maximum diference of adjacent number ***\n");

  int num[11];

  printf("Enter 10 integers : ");
  for (int pos = 0; pos < 10; pos++) {
    scanf("%d", &num[pos]);
  }

  int max = abs(num[0] - num[1]);

  for (int i = 0; i < 9; i++) {
    int diff = abs(num[i] - num[i + 1]);
    if (diff > max) {
      max = diff;
    }
  }

  printf("Maximum differnce is %d", max);

  return 0;
}
```

</details>

## 8.4 structure array 1

Question:

```c
เขียนโปรแกรมรับ ข้อมูลนักเรียน 10 คน โดยนักเรียนแต่ละคนมีข้อมูลดังนี้
เลขประจำตัว ชื่อ คะแนน

แล้วคำนวณ หา ค่าเฉลี่ย คะแนนต่ำสุด คะแนนสูงสุด
แล้วแสดงผลออกมาตามตัวอย่าง

#include<stdio.h>

#define SIZE 10

int main() {
    struct student {
        char id[9];
        char name[40];
        int marking;
    } st[SIZE];

    int i,i_max,i_min;
    float average=0,sum=0;

    printf(" *** Structure Array ***\n");
    printf("Enter data : ");

    for(i=0;i<SIZE;i++) {
        scanf("%s %s %d",st[i].id,st[i].name,&st[i].marking);
    }

    //make sure whether data is as expected.

    /*
    printf("\nOutput : \n");
    for(i=0;i<SIZE;i++) {
        printf("%s %s %d\n",st[i].id,st[i].name,st[i].marking);
    }
    */

    // find max marking
    i_max=0;


    // find min marking
    i_min=0;

    //calculate average

    average = sum/SIZE;

    printf("\n\n *** Analyzing Data ***\n");
    printf("Average marking = %.3f\n",average);
    printf("Min -- Max      = %d --> %d\n",st[i_min].marking,st[i_max].marking);

    return 0;
}
```

Output:

Testcase: 1

```
 *** Structure Array ***
Enter data : 99011234 Somsak 99
99012456 Pracha 44
99019876 Suraphon 86
99011233 Somsak 99
99022456 Pisanu 78
99039876 Sriracha 66
99049234 Gulf 99
99012756 Energy 43
99019806 Pronpan 36
99013876 Somkid 13


 *** Analyzing Data ***
Average marking = 66.300
Min -- Max      = 13 --> 99
```

<details>
<summary>Answer</summary>

[View](/Chapter%208/8-4.c)

```c
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
```

</details>

## 8.5 structure array 2

Question:

```c
เขียนโปรแกรมรับ ข้อมูลนักเรียน 10 คน โดยนักเรียนแต่ละคนมีข้อมูลดังนี้
เลขประจำตัว ชื่อ คะแนน

แล้วหาว่า มีกี่คนได้คะแนนสูงสุด ใครบ้าง
แล้วแสดงผลออกมาตามตัวอย่าง
```

Output:

Testcase: 1

```
 *** Structure Array 2 ***
Enter data : 99011234 Somsak 99
99012456 Pracha 44
99019876 Suraphon 86
99011233 Somsri 99
99022456 Pisanu 78
99039876 Sriracha 66
99049234 Gulf 99
99012756 Energy 43
99019806 Pronpan 36
99013876 Somkid 13


 *** Analyzing Data ***
Max marking   = 99 points, 3 students.
1. 99011234 Somsak 99
2. 99011233 Somsri 99
3. 99049234 Gulf 99
```

Testcase: 2

```
 *** Structure Array 2 ***
Enter data : 99011234 Somsak 99
99012456 Pracha 44
99019876 Suraphon 86
99011233 Somsri 99
99022456 Pisanu 78
99039876 Sriracha 66
99049234 Gulf 99
99012756 Energy 43
99019806 Pronpan 36
99093876 Dekdee 100


 *** Analyzing Data ***
Max marking   = 100 points, 1 students.
1. 99093876 Dekdee 100
```

<details>
<summary>Answer</summary>

[View](/Chapter%208/8-5.c)

```c
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
```

</details>

[Top](#chapter-8-ตัวแปรแบบแถวลำดับและตัวแปรแบบโครงสร้าง)
