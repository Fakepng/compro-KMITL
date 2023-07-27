# Chapter 4: การเขียนโปรแกรมแบบกำหนดเงื่อนไข

[Back](../README.md)

## Table of Contents

- [รับจำนวนเต็ม ตรวจสอบเป็นคู่หรือคี่](#41-รับจำนวนเต็ม-ตรวจสอบเป็นคู่หรือคี่)
- [get 3 show max/mid](#42-get-3-show-maxmid)
- [(6) เปรียบเทียบตัวอักษร A](#43-6-เปรียบเทียบตัวอักษร-a)
- [(44) บวกเลข](#44-44-บวกเลข)
- [(43) เครื่องคิดเลขที่มีตัวที่มีค่าน้อยเป็นตัวตั้ง](#45-43-เครื่องคิดเลขที่มีตัวที่มีค่าน้อยเป็นตัวตั้ง)

## 4.1 รับจำนวนเต็ม ตรวจสอบเป็นคู่หรือคี่

Question:

```c
รับจำนวนเต็ม 1 จำนวน แล้วตรวจสอบว่า เป็น จำนวนคู่ หรือ จำนวนคี่
```

Output:

Testcase: 1

```
 *** ODD/EVEN verification ***
Enter an integer : 127
127 is an ODD number.
```

Testcase 2

```
 *** ODD/EVEN verification ***
Enter an integer : 2048
2048 is an EVEN number.
```

Testcase 3

```
 *** ODD/EVEN verification ***
Enter an integer : 2048
2048 is an EVEN number.
```

Answer:
[View](/Chapter%204/4-1.c)

```c
#include <stdio.h>

int main() {
  printf(" *** ODD/EVEN verification ***\n");

  int num;
  printf("Enter an integer : ");
  scanf("%d", &num);

  if (num % 2 == 0) {
    printf("%d is an EVEN number.", num);
  } else {
    printf("%d is an ODD number.", num);
  }

  return 0;
}
```

## 4.2 get 3 show max/mid

Question:

```c
รับค่าจำนวนเต็ม 3 จำนวน แสดงผลลัพธ์ เป็น จำนวนที่มากที่สุด หารด้วยจำนวนตรงกลาง ทศนิยม 3 ตำแหน่ง
```

Output:

Testcase 1

```
 *** Find Maximum / Middle ***
Enter 3 integers : 1 2 3
Max / Mid = 3 / 2 = 1.500
```

Testcase 2

```
 *** Find Maximum / Middle ***
Enter 3 integers : 1 2 3
Max / Mid = 3 / 2 = 1.500
```

Testcase 3

```
 *** Find Maximum / Middle ***
Enter 3 integers : 89 6 15
Max / Mid = 89 / 15 = 5.933
```

Testcase 4

```
 *** Find Maximum / Middle ***
Enter 3 integers : 14 99 57
Max / Mid = 99 / 57 = 1.737
```

Testcase 5

```
 *** Find Maximum / Middle ***
Enter 3 integers : 99 9 9999
Max / Mid = 9999 / 99 = 101.000
```

Answer:
[View](/Chapter%204/4-2.c)

```c
#include <stdio.h>

int main() {
  printf(" *** Find Maximum / Middle ***\n");

  int num1, num2, num3;
  int max, mid;

  printf("Enter 3 integers : ");
  scanf("%d %d %d", &num1, &num2, &num3);

  if (num1 > num2 && num1> num3) {
    max = num1;

    if (num2 > num3) {
      mid = num2;
    } else {
      mid = num3;
    }
  } else if (num2 > num1 && num2 > num3) {
    max = num2;

    if (num1 > num3) {
      mid = num1;
    } else {
      mid = num3;
    }
  } else if (num3 > num1 && num3 > num2) {
    max = num3;

    if (num1 > num2) {
      mid = num1;
    } else {
      mid = num2;
    }
  }

  printf("Max / Mid = %d / %d = %.3f", max, mid, (max * 1.0) / (mid * 1.0));

  return 0;
}
```

## 4.3 (6) เปรียบเทียบตัวอักษร A

Question:

```c
ให้รับ input เป็นตัวอักษร 1 ตัว และเปรียบเทียบว่าเป็นตัว A หรือไม่

ปล. พิมพ์ใหญ่ พิมพ์เล็ก ถือว่าเป็นตัวเดียวกัน
```

Output:

Testcase 1

```
Enter Alphabet : A
YES
```

Testcase 2

```
Enter Alphabet : a
YES
```

Testcase 3

```
Enter Alphabet : B
NO
```

Answer:
[View](/Chapter%204/4-3.c)

```c
#include <stdio.h>

int main() {
  char ch;

  printf("Enter Alphabet : ");
  scanf("%c", &ch);

  if (ch == 'A' || ch == 'a') {
    printf("YES");
  } else {
    printf("NO");
  }

  return 0;
}
```

## 4.4 (44) บวกเลข

Question:

```c
จงเขียนโปรแกรมที่มีการทำงานดังนี้ มีการรับค่าอักขระ จากผู้ใช้ ถ้าเป็น A มีค่าเป็น 10 ถ้าเป็น B มีค่าเป็น 20 และถ้าเป็น C มีค่าเป็น 30 โดยรับinput มา 3 ตัว จากนั้นหาผลรวมและแสดงผลโดยใช้รูปแบบตามตัวอย่าง (ถ้า Input ไม่ถูกต้องให้แสดงว่า Input Incorrect.)
```

Output:

Testcase 1

```
 *** Character Sum Number ***
Enter 3 Character (A,B,C) : A B C
A = 10 , B = 20 , C = 30
A + B + C = 10 + 20 + 30 = 60
```

Testcase 2

```
 *** Character Sum Number ***
Enter 3 Character (A,B,C) : A C C
A = 10 , C = 30 , C = 30
A + C + C = 10 + 30 + 30 = 70
```

Testcase 3

```
 *** Character Sum Number ***
Enter 3 Character (A,B,C) : C B A
C = 30 , B = 20 , A = 10
C + B + A = 30 + 20 + 10 = 60
```

Testcase 4

```
 *** Character Sum Number ***
Enter 3 Character (A,B,C) : C C C
C = 30 , C = 30 , C = 30
C + C + C = 30 + 30 + 30 = 90
```

Testcase 5

```
 *** Character Sum Number ***
Enter 3 Character (A,B,C) : A B Z
Input Incorrect.
```

Answer:
[View](/Chapter%204/4-4.c)

```c
#include <stdio.h>

int main() {
  printf(" *** Character Sum Number ***\n");

  char ch1, ch2, ch3;
  int num1, num2, num3;

  printf("Enter 3 Character (A,B,C) : ");
  scanf("%c %c %c", &ch1, &ch2, &ch3);

  if (ch1 == 'A') {
    num1 = 10;
  } else if (ch1 == 'B') {
    num1 = 20;
  } else if (ch1 == 'C') {
    num1 = 30;
  } else {
    printf("Input Incorrect.");
    return 0;
  }

  if (ch2 == 'A') {
    num2 = 10;
  } else if (ch2 == 'B') {
    num2 = 20;
  } else if (ch2 == 'C') {
    num2 = 30;
  } else {
    printf("Input Incorrect.");
    return 0;
  }

  if (ch3 == 'A') {
    num3 = 10;
  } else if (ch3 == 'B') {
    num3 = 20;
  } else if (ch3 == 'C') {
    num3 = 30;
  } else {
    printf("Input Incorrect.");
    return 0;
  }

  printf("%c = %d , %c = %d , %c = %d\n", ch1, num1, ch2, num2, ch3, num3);
  printf("%c + %c + %c = %d + %d + %d = %d", ch1, ch2, ch3, num1, num2, num3, num1 + num2 + num3);

  return 0;
}
```

## 4.5 (43) เครื่องคิดเลขที่มีตัวที่มีค่าน้อยเป็นตัวตั้ง

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
