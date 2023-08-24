# Chapter 7: ฟังก์ชันเบื้องต้นและขอบเขตตัวแปร

[Back](../README.md)

## Table of Contents

- [(43) ชื่อคนน่ารัก](#71-43-ชื่อคนน่ารัก)
- [(4) ลดราคา](#72-4-ลดราคา)
- [(4) ใส่ตัวแปรผิดชนิด](#73-4-ใส่ตัวแปรผิดชนิด)
- [ข้อ 4 แสดงผล 3 บรรทัด](#74-ข้อ-4-แสดงผล-3-บรรทัด)
- [(4) บัตรปชช](#75-4-บัตรปชช)

## 7.1 (43) ชื่อคนน่ารัก

Question:

```c
นักศึกษาสังเกตได้ว่าคนที่น่ารัก ๆ รอบตัวของนักศึกษานั้นมีความพิเศษอยู่ในชื่อ คือ
ชื่อของพวกเขาจะมีตัว T และ A ปนอยู่ในชื่อด้วย
นักศึกษาจึงได้เขียนโปรแกรมคัดกรองคนที่น่ารักขึ้นมา

INPUT :
text ชุดนึงซึ่งยาวไม่เกิน 20 ตัวอักษร

OUTPUT :
สังเกตุจาก test case

ปล. แสดงผลให้เหมือนเป๊ะ ๆ นะ

ให้เอาโค้ดไปเขียนเพิ่มให้เสร็จ
bool คือชนิดตัวแปรที่เป็นได้แค่ true กับ false
(ในภาษา C++ จะไม่ต้อง include stdbool เพราะมันมีอยู่แล้ว แต่ภาษา C ต้องเขียน)

#include <stdio.h>
#include <stdbool.h>

bool has_T_A_in(char string[]);

int main()
{
    char name[20];
    printf("Enter your name : ");
    scanf("%s", &name);
    if (has_T_A_in(name))
        printf("Your are cute >///<");
    else
        printf("Not cute ._.");
}

bool has_T_A_in(char string[])
{
    /* CODE FUNCTION HERE */
}
```

Output:

Testcase: 1

```
Enter your name : TA
Your are cute >///<
```

Testcase: 2

```
Enter your name : Tommy
Not cute ._.
```

Testcase: 3

```
Enter your name : taraksa
Your are cute >///<
```

Testcase: 4

```
Enter your name : abetam
Your are cute >///<
```

Answer:
[View](/Chapter%207/7-1.c)

```c
#include <stdio.h>
#include <stdbool.h>

bool has_T_A_in(char string[]);

int main() {
  char name[20];
  printf("Enter your name : ");
  scanf("%s", &name);
  if (has_T_A_in(name)) {
    printf("Your are cute >///<");
  } else {
    printf("Not cute ._.");
  }

  return 0;
}

bool has_T_A_in(char string[]) {
    bool has_T = false, has_A = false;

    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == 'T' || string[i] == 't') {
            has_T = true;
        }
        if (string[i] == 'A' || string[i] == 'a') {
            has_A = true;
        }
    }

    if (has_T && has_A) {
        return true;
    } else {
        return false;
    }
}
```

## 7.2 (4) ลดราคา

Question:

```c
นักศึกษาได้คูปองส่วนลดมา 2 ใบ ดีใจมากจนรีบวิ่งไปซื้อของที่อยากได้ ปรากฎว่า
นักศึกษาพกเงินมาไม่พอซื้อของทั้ง 2 ชิ้น จึงตัดสินใจหยิบคอมขึ้นมาเขียนโปรแกรมคำนวณว่าซื้อชิ้นไหนถูกกว่ากัน

INPUT :
ตัวเลข 4 ตัว โดย 2 ตัวแรกเป็นราคาสินค้า 2 อันต่อมาเป็นเปอร์เซ็นต์ส่วนลด

OUTPUT :
สังเกตุจาก test case

ปล. แสดงผลให้เหมือนเป๊ะ ๆ นะ

ให้เอาโค้ดตรงนี้ไปเขียนเพิ่มเท่านั้น !!

#include <stdio.h>

float discount(int prize, float coupon);

int main()
{
    /* CODE INPUT HERE */

    float sale1 = discount(prize1, coupon1);
    float sale2 = discount(prize2, coupon2);

    /* CODE OUTPUT HERE */

    if (sale1 < sale2)
        printf("* Item1 is cheaper");
    else if (sale1 == sale2)
        printf("* Item1 is equal to Item2");
    else
        printf("* Item2 is cheaper");
}

float discount(int prize, float coupon)
{
    /* CODE FUNCTION HERE */
}
```

Output:

Testcase: 1

```
Enter 2 prizes and 2 coupons : 129 89 15 7.7
Item1 129 -> 109.65
Item2 89 -> 82.15
* Item2 is cheaper
```

Testcase: 2

```
Enter 2 prizes and 2 coupons : 50 50 10 10
Item1 50 -> 45.00
Item2 50 -> 45.00
* Item1 is equal to Item2
```

Testcase: 3

```
Enter 2 prizes and 2 coupons : 19 39 4 8.4
Item1 19 -> 18.24
Item2 39 -> 35.72
* Item1 is cheaper
```

Answer:
[View](/Chapter%207/7-2.c)

```c
#include <stdio.h>

float discount(int prize, float coupon);

int main() {
  int prize1, prize2;
  float coupon1, coupon2;

  printf("Enter 2 prizes and 2 coupons : ");
  scanf("%d %d %f %f", &prize1, &prize2, &coupon1, &coupon2);

  float sale1 = discount(prize1, coupon1);
  float sale2 = discount(prize2, coupon2);

  printf("Item1 %d -> %.2f\n", prize1, sale1);
  printf("Item2 %d -> %.2f\n", prize2, sale2);

  if (sale1 < sale2) {
    printf("* Item1 is cheaper");
  } else if (sale1 == sale2) {
    printf("* Item1 is equal to Item2");
  } else {
    printf("* Item2 is cheaper");
  }

  return 0;
}

float discount(int prize, float coupon) {
  return (((100.0 - coupon) / 100.0) * prize);
}
```

## 7.3 (4) ใส่ตัวแปรผิดชนิด

Question:

```c
นักศึกษาเขียนโปรแกรมบวกเลขธรรมดา ๆ ขึ้นมา แต่ทว่า นักศึกษาสังเกตเห็นความผิดปกติในโปรแกรม
เนื่องจากนักศึกษาประกาศตัวแปรเป็นชนิด char แทนที่จะเป็น int นักศึกษารู้สึกเสียใจมาก แต่ก็ไม่ย่อท้อ
รีบลงมือเขียนฟังก์ชันขึ้นมาแก้ไขปัญหาอย่างทันที

INPUT :
ตัวอักษร 2 ชุด

OUTPUT :
สังเกตุจาก test case

ปล. แสดงผลให้เหมือนเป๊ะ ๆ นะ

ปล2. สมมติว่าไม่มีจำนวนติดลบนะ

ให้นำโค้ดนี้ไปต่อเติมเท่านั้น !! และห้ามใช้ฟังก์ชันสำเร็จรูป เช่น atoi ให้ใช้ loop และความพยายามแทน

#include <stdio.h>
#include <string.h>

int char_to_int(char num[]);

int main()
{
    char num1[10], num2[10];
    printf("Enter 2 number : ");
    scanf("%s %s", &num1, &num2);

    int n1 = char_to_int(num1);
    int n2 = char_to_int(num2);

    /* CODE OUTPUT HERE */
}

int char_to_int(char num[])
{
    /* CODE FUNCTION HERE */
}
```

Output:

Testcase: 1

```
Enter 2 number : 12 27
12 + 27 = 39
```

Testcase: 2

```
Enter 2 number : 214 421
214 + 421 = 635
```

Answer:
[View](/Chapter%207/7-3.c)

```c
#include <stdio.h>
#include <string.h>

int char_to_int(char num[]);

int main() {
  char num1[10], num2[10];
  printf("Enter 2 number : ");
  scanf("%s %s", &num1, &num2);

  int n1 = char_to_int(num1);
  int n2 = char_to_int(num2);

  printf("%d + %d = %d", n1, n2, n1 + n2);

  return 0;
}

int char_to_int(char num[]) {
  int result = 0;
  for (int i = 0; i < strlen(num); i++) {
    result = result * 10 + (num[i] - '0');
  }
  return result;
}
```

## 7.4 ข้อ 4 แสดงผล 3 บรรทัด

Question:

```c
จงเขียนโปรแกรมรับข้อความ หนึ่งบรรทัด

แล้วแสดงผล 3 บรรทัด

บรรทัดที่ 1 แสดงผลเป็น ตัวอักษรตัวใหญ่
บรรทัดที่ 2 แสดงผลเป็น ตัวอักษรตัวเล็ก
บรรทัดที่ 3 แสดงผลเป็น Title case
```

Output:

Testcase: 1

```
Enter a string : Wonderful world!
Capital : WONDERFUL WORLD!
Small : wonderful world!
Title : Wonderful World!
```

Testcase: 2

```
Enter a string : you are the wind beneath my wings.
Capital : YOU ARE THE WIND BENEATH MY WINGS.
Small : you are the wind beneath my wings.
Title : You Are The Wind Beneath My Wings.
```

Testcase: 3

```
Enter a string : the quick brown fox jumps over the lazy dog.
Capital : THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG.
Small : the quick brown fox jumps over the lazy dog.
Title : The Quick Brown Fox Jumps Over The Lazy Dog.
```

Testcase: 4

```
Enter a string : you completed me.
Capital : YOU COMPLETED ME.
Small : you completed me.
Title : You Completed Me.
```

Answer:
[View](/Chapter%207/7-4.c)

```c
#include <stdio.h>
#include <string.h>

void capitalize(char string[]);
void smallize(char string[]);
void titleCase(char string[]);

char capital[50], small[50], title[50];

int main() {
  char string[50];
  printf("Enter a string : ");
  scanf("%[^\n]", &string);

  capitalize(string);
  smallize(string);
  titleCase(string);

  printf("Capital : %s\n", capital);
  printf("Small : %s\n", small);
  printf("Title : %s\n", title);

  return 0;
}

void capitalize(char string[]) {
  for (int i = 0; i < strlen(string); i++) {
    if (string[i] >= 'a' && string[i] <= 'z') {
      capital[i] = string[i] - 32;
    } else {
      capital[i] = string[i];
    }
  }
}

void smallize(char string[]) {
  for (int i = 0; i < strlen(string); i++) {
    if (string[i] >= 'A' && string[i] <= 'Z') {
      small[i] = string[i] + 32;
    } else {
      small[i] = string[i];
    }
  }
}

void titleCase(char string[]) {
  for (int i = 0; i < strlen(string); i++) {
    if (i == 0) {
      if (string[i] >= 'a' && string[i] <= 'z') {
        title[i] = string[i] - 32;
      } else {
        title[i] = string[i];
      }
    } else {
      if (string[i - 1] == ' ') {
        if (string[i] >= 'a' && string[i] <= 'z') {
          title[i] = string[i] - 32;
        } else {
          title[i] = string[i];
        }
      } else {
        if (string[i] >= 'A' && string[i] <= 'Z') {
          title[i] = string[i] + 32;
        } else {
          title[i] = string[i];
        }
      }
    }
  }
}


```

## 7.5 (4) บัตรปชช

Question:

```c
นักศึกษาทำบัตรประชาชนหาย และขี้เกียจไปทำใหม่ นักศึกษาจึงได้ตัดสินใจ
เขียนโปรแกรมให้พิมพ์บัตรออกมาใหม่แทน โดยลักษณะของบัตรคือ

======================
| 1                  |
| ------------------ |
| Age : 2            |
| Job : 3            |
======================
1. แสดงชื่อ
2. แสดงอายุ
3. แสดงอาชีพ

INPUT
ตัวอักษรชุดนึง ตัวเลข และตัวอักษรอีกชุดนึง ตามลำดับ
สมมติว่าตัวอักษรที่ใส่เข้ามาจะไม่ยาวเกินบัตรแน่ ๆ
* บัตรมีขนาด 22 x 6 ช่อง ใช้ตัวอักษร 4 ตัวนี้ในการสร้าง ( = ) ( - ) ( : ) ( | )

ปล. แสดงให้เหมือนเป๊ะ ๆ นะ
เอาโค้ดข้างล่างนี้ไปเขียนต่อนะ เพิ่มได้ ลดไม่ได้

#include <stdio.h>

void print_id_card(char name[], char job[], int age);

int main()
{
    /* CODE HERE */
}
```

Output:

Testcase: 1

```
Enter name, age, job : Than 20 TA
======================
| Than               |
| ------------------ |
| Age : 20           |
| Job : TA           |
======================
```

Testcase: 2

```
Enter name, age, job : Tommy 7 TroubleMaker
======================
| Tommy              |
| ------------------ |
| Age : 7            |
| Job : TroubleMaker |
======================
```

Testcase: 3

```
Enter name, age, job : Compro 1990 Easy
======================
| Compro             |
| ------------------ |
| Age : 1990         |
| Job : Easy         |
======================
```

Answer:
[View](/Chapter%207/7-5.c)

```c
#include <stdio.h>

void print_id_card(char name[], char job[], int age);

int main() {
  char name[20], job[20];
  int age;

  printf("Enter name, age, job : ");
  scanf("%s %d %s", &name, &age, &job);

  print_id_card(name, job, age);

  return 0;
}

void print_id_card(char name[], char job[], int age) {
  printf("======================\n");
  printf("| %-18s |\n", name);
  printf("| ------------------ |\n");
  printf("| Age : %-12d |\n", age);
  printf("| Job : %-12s |\n", job);
  printf("======================\n");
}
```

[Top](#chapter-7-ฟังก์ชันเบื้องต้นและขอบเขตตัวแปร)
