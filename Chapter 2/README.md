# Chapter 2: การเขียนโปรแกรมเบื้องต้นและคำสั่งแสดงผล

[Back](../README.md)

## Table of Contents

- [การจัดรูปแบบข้อความ](#21-การจัดรูปแบบข้อความ)
- [การแสดงข้อความ มากกว่า 1 บรรทัด ไม่ใช้ \n \t](#22-การแสดงข้อความ-มากกว่า-1-บรรทัด-ไม่ใช้-n-t)
- [การแสดงผลจำนวนเต็ม](#23-การแสดงผลจำนวนเต็ม)
- [การแสดงผลทศนิยม](#24-การแสดงผลทศนิยม)
- [การแสดงข้อความ %s](#25-การแสดงข้อความ-s)

## 2.1 การจัดรูปแบบข้อความ

Question:

```c
ให้นักศึกษา เขียนโปรแกรมตามข้อกำหนดดังนี้
- แสดงผลลัพธ์ Computer อยู่ด้านซ้ายของจอภาพ
- Programming อยู่ด้านขวาของจอภาพ
- ใช้คำสั่ง printf ได้เพียงครั้งเดียว
- ห้ามใช้ space \t และ \n (ถ้าตรวจพบภายหลังจะได้ ศูนย์คะแนน)
- กรณีที่ไม่ทำตามข้อกำหนด คะแนนที่ได้จะถูกปรับเป็น 0 คะแนน

หมายเหตุ

1. การแสดงผลแต่ละบรรทัดมี 80 ตัวอักษร
```

Output:

```
Computer                                                             Programming
```

Answer:
[View](/Chapter%202/2-1.c)

```c
#include <stdio.h>

int main() {
  printf("%-40s%40s", "Computer", "Programming");
}
```

## 2.2 การแสดงข้อความ มากกว่า 1 บรรทัด ไม่ใช้ \n \t

Question:

```c
ให้เขียนโปรแกรมแสดงผลดังนี้
- บรรทัดแรกสุด ด้านซ้ายมือ แสดงผล Computer
- บรรทัดแรกสุด ด้านขวามือ แสดงผล Programming
- บรรทัดสุุดท้าย (บรรทัดที่ 25) แสดงผลชิดขวา I am a hard-working student.
- ห้ามใช้ \n \t


หมายเหตุ

1. การแสดงผลแต่ละบรรทัดมี 80 ตัวอักษร
```

Output:

```
Computer                                                             Programming























                                                    I am a hard-working student.
```

Answer:
[View](/Chapter%202/2-2.c)

```c
#include<stdio.h>

int main() {
  printf("%-40s%40s", "Computer", "Programming");
  printf("%1920s", "I am a hard-working student.");

  return 0;
}
```

## 2.3 การแสดงผลจำนวนเต็ม

Question:

```c
จงเติมจำนวนเต็ม ลงในช่องว่างเพื่อให้ได้ผลลัพธ์ ตามตัวอย่าง

int main()
{
  printf("%d\n", );
  printf("%x\n", );
  printf("%X\n", );

  return 0;
}
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
[View](/Chapter%202/2-3.c)

```c
#include<stdio.h>

int main() {
  printf("%d\n", 65);
  printf("%x\n", 65);
  printf("%X\n", 127);

  return 0;
}
```

## 2.4 การแสดงผลทศนิยม

Question:

```c
เติมส่วนของ format string ในคำสั่ง printf ให้เหมาะสม เพื่อให้ผลลัพธ์ ตามตัวอย่าง

int main()
{
  printf("123456789012345678901234567890\n");
  printf("%  f\n",3.1415926535897932); //จอง 25 ช่องชิดขวา
  printf("%   f\n",3.1415926535897932); //จอง 30 ช่อง ทศนิยม 16 ตำแหน่ง ชิดซ้าย
  printf("%  f\n",3.1415926535897932); //จอง 20 ช่องชิดขวา
  printf("%   f\n",3.1415926535897932); //ทศนิยม 6 ตำแหน่ง ชิดซ้าย
  printf("%     f\n",3.1415926535897932); //จอง 30 ช่อง ทศนิยม 20 ตำแหน่ง ชิดขวา

  return 0;
}


หมายเหตุ
เลขทศนิยมในหลักขวามืออาจไม่เหมือนกับตัวอย่าง
ซึ่งความละเอียดของทศนิยมขึ้นกับ compiler
```

Output:

```
123456789012345678901234567890
                 3.141593
3.1415926535897931
            3.141593
3.141593
        3.14159265358979311600
```

Answer:
[View](/Chapter%202/2-4.c)

```c
#include<stdio.h>

int main() {
  printf("123456789012345678901234567890\n");
  printf("%25f\n",3.1415926535897932); //จอง 25 ช่องชิดขวา
  printf("%-30.16f\n",3.1415926535897932); //จอง 30 ช่อง ทศนิยม 16 ตำแหน่ง ชิดซ้าย
  printf("%20f\n",3.1415926535897932); //จอง 20 ช่องชิดขวา
  printf("%.6f\n",3.1415926535897932); //ทศนิยม 6 ตำแหน่ง ชิดซ้าย
  printf("%30.20f\n",3.1415926535897932); //จอง 30 ช่อง ทศนิยม 20 ตำแหน่ง ชิดขวา

  return 0;
}
```

## 2.5 การแสดงข้อความ %s

Question:

```c
เติม พารามิเตอร์ตัวแรก (first parameter) ของ printf ให้เหมาะสม เพื่อแสดงผลตามตัวอย่าง

int main() {
  printf("1234567890123456789012345678901234567890\n");
  printf("%  s\n","I have been a good student.");
  printf("%  s\n","I have been a good student.");
  printf("%     s\n","I have been a good student.");
  printf("%     s\n","I have been a good student.");
  printf("%     s\n","I have been a good student.");
  return 0;
}
```

Output:

```
1234567890123456789012345678901234567890
             I have been a good student.
   I have been a good student.
    I have
I have been a good stu
                  I have been a good stu
```

Answer:
[View](/Chapter%202/2-5.c)

```c
#include<stdio.h>

int main() {
  printf("1234567890123456789012345678901234567890\n");
  printf("%40s\n","I have been a good student.");
  printf("%30s\n","I have been a good student.");
  printf("%10.6s\n","I have been a good student.");
  printf("%-22.22s\n","I have been a good student.");
  printf("%40.22s\n","I have been a good student.");

  return 0;
}
```

[Top](#chapter-2-การเขียนโปรแกรมเบื้องต้นและคำสั่งแสดงผล)
