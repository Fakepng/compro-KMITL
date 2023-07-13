# Chapter 1: ตัวแปรแบบตัวชี้ตำแหน่ง และฟังก์ชันขั้นสูง

[Back](../README.md)

## Table of Contents

- [แสดงผลตามตัวอย่าง 1](#11-แสดงผลตามตัวอย่าง-1)
- [แสดงผลตามตัวอย่าง 2](#12-แสดงผลตามตัวอย่าง-2)
- [แสดงผลตามตัวอย่าง 3](#13-แสดงผลตามตัวอย่าง-3)
- [แสดงผลตามตัวอย่าง IV](#14-แสดงผลตามตัวอย่าง-iv)
- [แสดงผลตามตัวอย่าง V](#15-แสดงผลตามตัวอย่าง-v)

## 1.1 แสดงผลตามตัวอย่าง 1

Question:

```c
ให้นักศึกษาส่ง โปรแกรม HelloKMITL.c ซึ่งมีข้อมูลดังนี้

#include<stdio.h>

int main() {
    printf("Hello, Thailand!\n");
    return 0;
}

นามสกุลของไฟล์ ต้องเป็น .c  เท่านั้น
ถ้านามสกุลเป็น .cpp ให้ทำการ rename ก่อนส่ง
```

Output:

```
Hello, Thailand!
```

Answer:
[View](/Chapter%201/1-1.c)

```c
#include<stdio.h>

int main() {
    printf("Hello, Thailand!\n");

    return 0;
}
```

## 1.2 แสดงผลตามตัวอย่าง 2

Question:

```c
ให้นักศึกษาเขียนโปรแกรมแสดงผลตามตัวอย่าง

- บรรทัดแรก แสดงผล Hello, Ladkrabang.
- บรรทัดที่สอง แสดงผล Hello, KMITL.
- บรรทัดที่สาม แสดงผล Hello, Bangkok.
- บรรทัดที่สี่ แสดงผล Hello, Thailand.
```

Output:

```
Hello, Ladkrabang.
Hello, KMITL.
Hello, Bangkok.
Hello, Thailand.
```

Answer:
[View](/Chapter%201/1-2.c)

```c
#include<stdio.h>

int main() {
    printf("Hello, Ladkrabang.\n");
    printf("Hello, KMITL.\n");
    printf("Hello, Bangkok.\n");
    printf("Hello, Thailand.\n");

    return 0;
}
```

## 1.3 แสดงผลตามตัวอย่าง 3

Question:

```c
ให้นักศึกษา เขียนโปรแกรมแสดงผลตามตัวอย่างที่กำหนดให้

- มีจำนวนทั้งหมด 6 บรรทัด
- บรรทัดที่ 4-6 ห้ามใช้ space
- ถ้าตรวจพบภายหลังจะได้ ศูนย์คะแนน ในข้อนี้
```

Output:

```
Hello, world!
Hello, Ladkrabang
Hello, Computer Programming
one     two     three   four    five    Hallelujah
12345678        12345678        12345678        12345678        12345678
        12345678        12345678        12345678        12345678        12345678
```

Answer:
[View](/Chapter%201/1-3.c)

```c
#include<stdio.h>

int main() {
    printf("Hello, world!\n");
    printf("Hello, Ladkrabang\n");
    printf("Hello, Computer Programming\n");
    printf("one\ttwo\tthree\tfour\tfive\tHallelujah\n");
    printf("12345678\t12345678\t12345678\t12345678\t12345678\n");
    printf("\t12345678\t12345678\t12345678\t12345678\t12345678\n");

    return 0;
}
```

## 1.4 แสดงผลตามตัวอย่าง IV

Question:

```c
แสดงผลตามตัวอย่าง

- มีจำนวน 6 บรรทัด
- บรรทัดแรก แสดง 1234567890 จำนวน 8 ครั้ง
- บรรทัดที่สอง แสดง * จำนวน 10 ตัวอักษรดังตัวอย่าง
- บรรทัดที่สาม แสดง Hello, world!
- บรรทัดที่สี่ แสดง Hello, Ladkrabang.
- บรรทัดที่ห้า แสดง Hello, Computer Programming.
- บรรทัดที่หก แสดง ตัวอักษรให้ถูกต้อง โดยใช้ \t ภายใน format string ห้ามมีช่องว่าง (space)
```

Output:

```
12345678901234567890123456789012345678901234567890123456789012345678901234567890
*       *       *       *       *       *       *       *       *       *
Hello, KMITL!
Hello, Ladkrabang.
Hello, Computer Programming.
one     two     three   four    five    Hallelujah
```

Answer:
[View](/Chapter%201/1-4.c)

```c
#include<stdio.h>

int main() {
    printf("12345678901234567890123456789012345678901234567890123456789012345678901234567890");
    printf("*\t*\t*\t*\t*\t*\t*\t*\t*\t*\n");
    printf("Hello, KMITL!\n");
    printf("Hello, Ladkrabang.\n");
    printf("Hello, Computer Programming.\n");

    printf("%s\t%s\t%s\t%s\t%s\t%s", "one", "two", "three", "four", "five", "Hallelujah");

    return 0;
}
```

## 1.5 แสดงผลตามตัวอย่าง V

Question:

```c
แสดงผลตามตัวอย่าง 5  (ขนาดของหน้าจอ คือ 80 คอลัมน์ 25 แถว)

- จำนวนทั้งหมด 8 บรรทัด
- บรรทัดแรกแสดงผล 0123456789abcdefghij จำนวน 4 ครั้ง
- บรรทัดที่สอง เป็นบรรทัดว่าง
- บรรทัดที่สาม แสดงผล 1234567890 จำนวน 4 ครั้ง ตามตัวอย่าง
- บรรทัดที่สี่ แสดงผล 1234567890 จำนวน 4 ครั้ง ตามตัวอย่าง
- บรรทัดที่ห้า แสดงผล เหมือนบรรทัดที่สาม
- บรรทัดที่หก แสดงผล 12345678 จำนวน 10 ครั้ง
- บรรทัดที่ 7-8 แสดงผลตามตัวอย่าง ห้ามใช้ space bar (ถ้าตรวจพบ จะได้ศูนย์คะแนนในข้อนี้)


หมายเหตุ ขนาดของหน้าจอ คือ 80 คอลัมน์ 25 แถว
```

Output:

```
0123456789abcdefghij0123456789abcdefghij0123456789abcdefghij0123456789abcdefghij

          1234567890          1234567890          1234567890          1234567890
1234567890          1234567890          1234567890          1234567890
          1234567890          1234567890          1234567890          1234567890
12345678123456781234567812345678123456781234567812345678123456781234567812345678
        1       12      123     1234    12345   123456  1234567 12345678
12345678        12345678        12345678        12345678        12345678
```

Answer:
[View](/Chapter%201/1-5.c)

```c
#include<stdio.h>

int main() {
    printf("0123456789abcdefghij0123456789abcdefghij0123456789abcdefghij0123456789abcdefghij\n");
    printf("          1234567890          1234567890          1234567890          1234567890");
    printf("1234567890          1234567890          1234567890          1234567890\n");
    printf("          1234567890          1234567890          1234567890          1234567890");
    printf("12345678123456781234567812345678123456781234567812345678123456781234567812345678");
    printf("\t1\t12\t123\t1234\t12345\t123456\t1234567\t12345678\n");
    printf("12345678\t12345678\t12345678\t12345678\t12345678");
    return 0;
}
```

[Top](#chapter-1-ตัวแปรแบบตัวชี้ตำแหน่ง-และฟังก์ชันขั้นสูง)
