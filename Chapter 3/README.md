# Chapter 3: การใช้งานคำสั่ง Input Output และการคำนวณต่างๆ

[Back](../README.md)

## Table of Contents

- [Basic input](#31-basic-input)
- [(4) แสดงเลขในแบบต่าง ๆ](#32-4-แสดงเลขในแบบต่าง-ๆ)
- [(4) หนาวใจจะขาดแล้ว](#33-4-หนาวใจจะขาดแล้ว)
- [แสดงผลจำนวนเต็ม 9 หลัก](#34-แสดงผลจำนวนเต็ม-9-หลัก)
- [(4) ธุรกิจขนาดย่อม](#35-4-ธุรกิจขนาดย่อม)

## 3.1 Basic input

Question:

```c
จงป้อนข้อมูล และแสดงผลตามตัวอย่าง
```

Output:

Testcase: 1

```
Enter point : 5.01
Point is 5.010
```

Testcase 2

```
Enter point : 3
Point is 3.000
```

Testcase 3

```
Enter point : 11.5678
Point is 11.568
```

<details>
<summary>Answer</summary>

[View](/Chapter%203/3-1.c)

```c
#include <stdio.h>

int main() {
  float num;
  printf("Enter point : ");
  scanf("%f", &num);
  printf("Point is %.3f", num);

  return 0;
}
```

</details>

## 3.2 (4) แสดงเลขในแบบต่าง ๆ

Question:

```c
ให้นักศึกษาเขียนโปรแกรมรับจำนวนเต็ม 1 ตัว แล้วแสดงผลดังนี้
- แสดงจำนวนเต็ม
- แสดงทศนิยม 2 ตำแหน่ง
- แสดงค่า ตัวเลขหารด้วย 3 เป็นทศนิยม 3 ตำแหน่ง
- แสดงค่ากำลังสอง

ปล. แสดงผลให้เหมือนเป๊ะ ๆ ด้วย

ห้ามใช้  Type casting (การแปลงชนิดของตัวแปรให้เป็นอีกชนิด)
เช่น (int) 3.6 จะได้ 3 (การทำแบบนี้จะปัดเศษทิ้ง!!)

ให้ใช้ จำนวนเต็ม * 1.0 แทน
เช่น 3 * 1.0 จะได้ 3.000000
```

Output:

Testcase 1

```
 *** Show a number in variety formats. ***
Enter integer : 12
Int	-> 12
Float	-> 12.00
Int/3	-> 4.000
Int^2	-> 144
```

Testcase 2

```
 *** Show a number in variety formats. ***
Enter integer : 17
Int	-> 17
Float	-> 17.00
Int/3	-> 5.667
Int^2	-> 289
```

<details>
<summary>Answer</summary>

[View](/Chapter%203/3-2.c)

```c
#include <stdio.h>

int main() {
  int num;
  printf(" *** Show a number in variety formats. ***\n");
  printf("Enter integer : ");
  scanf("%d", &num);
  printf("Int\t-> %d\n", num);
  printf("Float\t-> %.2f\n", num * 1.0);
  printf("Int/3\t-> %.3f\n", num / 3.0);
  printf("Int^2\t-> %d\n", num * num);

  return 0;
}
```

</details>

## 3.3 (4) หนาวใจจะขาดแล้ว

Question:

```c
พี่ TA คนหนึ่งเป็นคนขี้ร้อนมาก เลยใช้ให้นักศึกษาไปปรับแอร์ เป็น 23 องศาให้หน่อย เมื่อเวลาผ่านไปปรากฎว่า
พี่ TA คนนั้นแข็งตายจากอากาศหนาว เพราะหน่วยขององศาที่ปรับไปคือ F
ให้นักศึกษาเขียนโปรแกรมแปลงจาก F เป็น C เพื่อที่จะได้รู้อุณหภูมิที่แท้จริง

ปล. แสดงผลให้เหมือนนะ ทศนิยม 2 ตำแหน่งด้วย

ปล2. ใช้สูตรแบบที่เคยเรียนสมัยอนุบาลเลย
```

Output:

Testcase 1

```
Enter temperature in degree Fahrenheit : 23
Temparature in degree Celsius : -5.00
```

Testcase 2

```
Enter temperature in degree Fahrenheit : 77.66
Temparature in degree Celsius : 25.37
```

<details>
<summary>Answer</summary>

[View](/Chapter%203/3-3.c)

```c
#include <stdio.h>

int main() {
  float fahrenheit;
  printf("Enter temperature in degree Fahrenheit : ");
  scanf("%f", &fahrenheit);
  printf("Temparature in degree Celsius : %.2f", (fahrenheit - 32) * 5 / 9);

  return 0;
}
```

</details>

## 3.4 แสดงผลจำนวนเต็ม 9 หลัก

Question:

```c
แสดงผลจำนวนเต็ม 9 หลัก
```

Output:

Testcase 1

```
 *** Show 3 digits ***
Enter a 9-digit number : 123456789
output : 269
```

Testcase 2

```
 *** Show 3 digits ***
Enter a 9-digit number : 987654321
output : 841
```

Testcase 3

```
 *** Show 3 digits ***
Enter a 9-digit number : 108711495
output : 015
```

<details>
<summary>Answer</summary>

[View](/Chapter%203/3-4.c)

```c
#include <stdio.h>

int main() {
  char digi[10];
  printf(" *** Show 3 digits ***\n");
  printf("Enter a 9-digit number : ");
  scanf("%s", digi);
  printf("output : %c%c%c", digi[1], digi[5], digi[8]);

  return 0;
}
```

</details>

## 3.5 (4) ธุรกิจขนาดย่อม

Question:

```c
พี่ TA กำลังวางแผนจะลงทุนธุรกิจขนาดย่อม โดยลักษณะของธุรกิจนี้คือ
เราจะต้องทำนายเลข 6 ตัวให้่ถูกต้อง หรือไม่ก็ใกล้เคียงกับเลขนั้น +1, -1
ถึงเราจะทำนายตัวเลขทั้ง 6 ตัวนั้นผิด แต่หากมันมี 3 ตัวหน้า หรือ 3 ตัวหลังถูกต้อง
ก็ถือว่าการลงทุนครั้งนั้นยังคงสำเร็จอยู่

ให้นักศึกษาช่วยพี่ TA เขียนโปรแกรมในการแจกแจงตัวเลขพวกนั้นออกมาดังนี้

- การทำนายที่ถูกต้องทั้ง 6 ตัว
- การทำนายที่คลาดเคลื่อน +1
- การทำนายที่คลาดเคลื่อน -1
- ตัวเลข 3 ตัวแรก
- ตัวเลข 3 ตัวหลัง

ให้รับค่า input เข้ามาเป็นชนิด int เท่านั้น
```

Output:

Testcase 1

```
Enter lottery number : 123456
Jackpot	: 123456
+1	: 123457
-1	: 123455
First 3	: 123
Last 3	: 456
```

Testcase 2

```
Enter lottery number : 555555
Jackpot	: 555555
+1	: 555556
-1	: 555554
First 3	: 555
Last 3	: 555
```

<details>
<summary>Answer</summary>

[View](/Chapter%203/3-5.c)

```c
#include <stdio.h>

int main() {
  int num;
  printf("Enter lottery number : ");
  scanf("%d", &num);
  printf("Jackpot\t: %d\n", num);
  printf("+1\t: %d\n", num + 1);
  printf("-1\t: %d\n", num - 1);
  printf("First 3\t: %d\n", num / 1000);
  printf("Last 3\t: %d\n", num % 1000);

  return 0;
}
```

</details>

[Top](#chapter-3-การใช้งานคำสั่ง-input-output-และการคำนวณต่างๆ)
