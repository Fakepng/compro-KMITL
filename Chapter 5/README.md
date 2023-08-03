# Chapter 5: การเขียนโปรแกรมแบบวนซ้ำ

[Back](../README.md)

## Table of Contents

- [(41) ลำดับเลขคณิตแบบถอยหลัง](#51-41-ลำดับเลขคณิตแบบถอยหลัง)
- [(4) สะกดชื่อ](#52-4-สะกดชื่อ)
- [(43) เวทย์มนต์สี่เหลี่ยม](#53-43-เวทย์มนต์สี่เหลี่ยม)
- [รูปสี่เหลี่ยม ใช้แอสกี 2](#54-รูปสี่เหลี่ยม-ใช้แอสกี-2)
- [(43) รักมากไปรึเปล่า](#55-43-รักมากไปรึเปล่า)

## 5.1 (41) ลำดับเลขคณิตแบบถอยหลัง

Question:

```c
จงเขียนโปรแกรมแสดงลำดับเลขคณิต

โดยรับ Input เป็นจำนวนเต็ม 2 จำนวน คือค่าเริ่มต้น กับค่าผลต่างร่วม

แล้วแสดง Output เป็นลำดับเลขคณิตจำนวน 10 เลข โดยที่เอาเลขมากสุดขึ้นก่อน แล้วถอยหลังลงมา
```

Output:

Testcase: 1

```
 *** Arithmetic Sequence ***
Enter 2 Positive Integers: 1 1
10 9 8 7 6 5 4 3 2 1
```

Testcase 2

```
 *** Arithmetic Sequence ***
Enter 2 Positive Integers: 9 10
99 89 79 69 59 49 39 29 19 9
```

Testcase 3

```
 *** Arithmetic Sequence ***
Enter 2 Positive Integers: 0 25
225 200 175 150 125 100 75 50 25 0
```

Testcase 4

```
 *** Arithmetic Sequence ***
Enter 2 Positive Integers: 23 17
176 159 142 125 108 91 74 57 40 23
```

Answer:
[View](/Chapter%205/5-1.c)

```c
#include <stdio.h>

int main() {
  int end, start, diff;
  printf(" *** Arithmetic Sequence ***\n");
  printf("Enter 2 Positive Integers: ");
  scanf("%d %d", &start, &diff);

  end = (diff * 9) + start;
  for (int i = end; i >= start; i = i - diff) {
    printf("%d ", i);
  }

  return 0;
}
```

## 5.2 (4) สะกดชื่อ

Question:

```c
เพื่อนของนักศึกษาชอบเรียกชื่อนักศึกษาผิด จนทำให้นักศึกษาโมโห
และลงมือเขียนโปรแกรมที่จะสะกดชื่อของนักศึกษาให้เพื่อนฟังอย่างเสียงดังฟังชัด !

INPUT :
text ชุดนึง ยาวไม่เกิน 20 ตัวอักษร

OUTPUT :
ตัวอักษรพิมพ์ใหญ่ที่มาจาก input บรรทัดละ 1 ตัว
บรรทัดสุดท้ายแสดงความยาวของ input

ห้ามใช้ #include <string.h>

ปล. แสดงให้เหมือนเป๊ะ ๆ นะ

ปล2. ลองทำความรู้จักกับตัวอักษรนี้ดู \0
```

Output:

Testcase 1

```
Enter your name : jewsar
J
E
W
S
A
R
Name length : 6
```

Testcase 2

```
Enter your name : fonkook
F
O
N
K
O
O
K
Name length : 7
```

Testcase 3

```
Enter your name : titan
T
I
T
A
N
Name length : 5
```

Answer:
[View](/Chapter%205/5-2.c)

```c
#include <stdio.h>

int main() {
  char name[21];
  int length;

  printf("Enter your name : ");
  scanf("%s", name);

  for (length = 0; name[length] != '\0'; length++) {
    printf("%c\n", name[length] - 32);
  }

  printf("Name length : %d", length);

  return 0;
}
```

## 5.3 (43) เวทย์มนต์สี่เหลี่ยม

Question:

```c
สมมติว่านักศึกษาเป็นนักเวทย์ที่กำลังจะร่ายคาถาบางอย่างซึ่งมีพลังร้ายแรงมาก
แต่นีกศึกษาขี้เกียจสร้างวงแหวนเวทย์เอง เลยเขียนโปรแกรมขึ้นมา

INPUT :
ตัวเลขหนึ่งตัว เป็นขนาดของวงเวทย์ เช่น 3 จะได้ขนาด 3x3
หาก Input <= 0 จะไม่สามารถสร้างวงเวทย์ได้

OUTPUT :
วงแหวนเวทย์ หรือคำว่า This is impossiple!
สังเกตุเพิ่มเติมจาก test case

ปล. แสดงผลให้เหมือนเป๊ะ ๆ นะ
```

Output:

Testcase 1

```
Enter size of rectangle : 3
...
../
.//
```

Testcase 2

```
Enter size of rectangle : 4
....
.../
..//
.///
```

Testcase 3

```
Enter size of rectangle : 5
.....
..../
...//
..///
.////
```

Testcase 4

```
Enter size of rectangle : 0
This is impossiple!
```

Answer:
[View](/Chapter%205/5-3.c)

```c
#include <stdio.h>

int main() {
  int side;
  printf("Enter size of rectangle : ");
  scanf("%d", &side);

  if (side < 1) {
    printf("This is impossiple!");
    return 0;
  }

  for (int row = 0; row < side; row++) {
    for (int dot = 0; dot < side - row; dot++) {
      printf(".");
    }
    for (int slash = side; slash > side - row; slash--) {
      printf("/");
    }
    printf("\n");
  }

  return 0;
}
```

## 5.4 รูปสี่เหลี่ยม ใช้แอสกี 2

Question:

```c
รับจำนวนเต็มบวก 1 จำนวนแสดงผล แล้วแสดงผลเป็นรูป สี่เหลี่ยมจตุรัส ตามจำนวนที่รับเข้ามา

ตัวอย่าง รับเลข 3

แสดงผล 3 บรรทัด แต่ละบรรทัดแสดงผล 3 ตำแหน่ง

บรรทัดแรกเริ่มจาก ABC

บรรทัดสองเริ่มจาก BCD

บรรทัดสามเริ่มจาก CDE
```

Output:

Testcase 1

```
Enter a number : 4
ABCD
BCDE
CDEF
DEFG
```

Testcase 2

```
Enter a number : 12
ABCDEFGHIJKL
BCDEFGHIJKLM
CDEFGHIJKLMN
DEFGHIJKLMNO
EFGHIJKLMNOP
FGHIJKLMNOPQ
GHIJKLMNOPQR
HIJKLMNOPQRS
IJKLMNOPQRST
JKLMNOPQRSTU
KLMNOPQRSTUV
LMNOPQRSTUVW
```

Testcase 3

```
Enter a number : 11
ABCDEFGHIJK
BCDEFGHIJKL
CDEFGHIJKLM
DEFGHIJKLMN
EFGHIJKLMNO
FGHIJKLMNOP
GHIJKLMNOPQ
HIJKLMNOPQR
IJKLMNOPQRS
JKLMNOPQRST
KLMNOPQRSTU
```

Testcase 4

```
Enter a number : 7
ABCDEFG
BCDEFGH
CDEFGHI
DEFGHIJ
EFGHIJK
FGHIJKL
GHIJKLM
```

Testcase 5

```
Enter a number : 3
ABC
BCD
CDE
```

Answer:
[View](/Chapter%205/5-4.c)

```c
#include <stdio.h>

int main() {
  int count;
  printf("Enter a number : ");
  scanf("%d", &count);

  for (int row = 0; row < count; row++) {
    for (int alpha = 'A' + row; alpha < 'A' + row + count; alpha++) {
      printf("%c", alpha);
    }
    printf("\n");
  }

  return 0;
}
```

## 5.5 (43) รักมากไปรึเปล่า

Question:

```c
ให้เขียนโปรแกรมเครื่องคิดเลขโดยรับค่า เป็น ตัวเลข 2 ตัว และใช้ ตัวอักษร(A,B,C,D) แทน operator

โดย A แทน บวก , B แทน ลบ , C แทน คูณ , D แทน หาร

โดยที่ตัวตั้งจะเป็นตัวเลขที่มีค่าน้อยกว่าอีกตัวเสมอ

แสดงผลลัพธ์เป็นเลขทศนิยม 3 หลัก

Input จะอยู่ในรูปแบบ ตัวเลข ตัวอักษร ตัวเลข
```

Output:

Testcase 1

```
A is +
B is -
C is *
D is /
Enter number and operator : 5 A 2
2+5 = 7.000
```

Testcase 2

```
A is +
B is -
C is *
D is /
Enter number and operator : 9 B 3
3-9 = -6.000
```

Testcase 3

```
A is +
B is -
C is *
D is /
Enter number and operator : 5 C 4
4*5 = 20.000
```

Testcase 4

```
A is +
B is -
C is *
D is /
Enter number and operator : 3 D 7
3/7 = 0.429
```

Answer:
[View](/Chapter%204/4-5.c)

```c
#include <stdio.h>

int main() {
  printf("A is +\n");
  printf("B is -\n");
  printf("C is *\n");
  printf("D is /\n");

  int num1, num2, max, min;
  char option;

  printf("Enter number and operator : ");
  scanf("%d %c %d", &num1, &option, &num2);

  if (num1 > num2) {
    max = num1;
    min = num2;
  } else {
    max = num2;
    min = num1;
  }

  if (option == 'A') {
    printf("%d+%d = %.3f", min, max, (min * 1.0) + (max * 1.0));
  } else if (option == 'B') {
    printf("%d-%d = %.3f", min, max, (min * 1.0) - (max * 1.0));
  } else if (option == 'C') {
    printf("%d*%d = %.3f", min, max, (min * 1.0) * (max * 1.0));
  } else if (option == 'D') {
    printf("%d/%d = %.3f", min, max, (min * 1.0) / (max * 1.0));
  }

  return 0;
}
```

[Top](#chapter-4-การเขียนโปรแกรมแบบกำหนดเงื่อนไข)
