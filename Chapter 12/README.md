# Chapter 12: Quiz 1

[Back](../README.md)

## Table of Contents

- [exam_2_1_5a](#quiz11-exam_2_1_5a)
- [exam_2_2_5a](#quiz12-exam_2_2_5a)
- [exam_2_3_11a](#quiz13-exam_2_3_11a)
- [exam_2_4_6a](#quiz14-exam_2_4_6a)
- [exam_2_5_9a](#quiz15-exam_2_5_9a)

## Quiz1.1 exam_2_1_5a

Question:

```c
ให้รับ integer 1 ค่า โดยรับเป็นค่าองศาในวงกลม 1 หน่วย  จากนั้นให้แสดงผลลัพธ์ว่า ค่าองศานี้อยู่ที่ Quadrant ใดในวงกลม 1 หน่วย  ถ้าหากเป็นค่าที่อยู่บนแกน X หรือ Y ให้ตอบเป็นแกนแทน เช่น 90 องศา จะอยู่บนแกน Y
และให้แสดงผลดังตัวอย่าง
```

Output:

Testcase: 1

```
Enter Number : 0
X-axis
```

Testcase: 2

```
Enter Number : 89
Quadrant 1
```

Testcase: 3

```
Enter Number : 90
Y-axis
```

Testcase: 4

```
Enter Number : 179
Quadrant 2
```

Testcase: 5

```
Enter Number : 268
Quadrant 3
```

Testcase: 6

```
Enter Number : 719
Quadrant 4
```

Testcase: 7

```
Enter Number : -25
Quadrant 4
```

Testcase 8

```
Enter Number : -270
Y-axis
```

Testcase 9

```
Enter Number : -472
Quadrant 3
```

Answer:
[View](/Quiz%201/exam_2_1_5a.c)

```c
#include <stdio.h>

int main() {
    int angle;
    printf("Enter Number : ");
    scanf("%d", &angle);

    int modAngle = angle % 360;

    if (modAngle == 0 || modAngle == 180 || modAngle == -180) {
        printf("X-axis");
    } else if (modAngle == 90 || modAngle == 270 || modAngle == -90 || modAngle == -270) {
        printf("Y-axis");
    } else if ((modAngle > 0 && modAngle < 90) || (modAngle < -270 && modAngle > -360)) {
        printf("Quadrant 1");
    } else if ((modAngle > 90 && modAngle < 180) || (modAngle > -270 && modAngle < -180)) {
        printf("Quadrant 2");
    } else if ((modAngle > 180 && modAngle < 270) || (modAngle > -180 && modAngle < -90)) {
        printf("Quadrant 3");
    } else if ((modAngle > 270 && modAngle < 360) || (modAngle > -90 && modAngle < 0)) {
        printf("Quadrant 4");
    }

    return 0;
}
```

## Quiz1.2 exam_2_2_5a

Question:

```c
ให้เขียนโปรแกรมแสดงผลบวกของเลขโดยมีการนับข้ามเป็นเลขคู่  โดยให้ป้อนตัวเลขสองจำนวน จำนวนน้อยเป็นจุดเริ่มต้นและจำนวนมากเป็นจุดสิ้นสุด แล้วแสดงผลรวม และแสดงผลจากค่าน้อยไปค่ามาก ดังตัวอย่าง

 *** Display Summation (skip 2 number)***
Enter 2 whole numbers : 3 8
Summation = 3 + 5 + 7 = 15

 *** Display Summation (skip 2 number)***
Enter 2 whole numbers : -5 5
Summation = -5 + -3 + -1 + 1 + 3 + 5 = 0

 *** Display Summation (skip 2 number)***
Enter 2 whole numbers : 9 9
Summation = 9 = 9
```

Output:

Testcase: 1

```
 *** Display Summation (skip 2 number)***
Enter 2 whole numbers : 3 8
Summation = 3 + 5 + 7 = 15
```

Testcase: 2

```
 *** Display Summation (skip 2 number)***
Enter 2 whole numbers : -5 5
Summation = -5 + -3 + -1 + 1 + 3 + 5 = 0
```

Testcase: 3

```
 *** Display Summation (skip 2 number)***
Enter 2 whole numbers : 1 20
Summation = 1 + 3 + 5 + 7 + 9 + 11 + 13 + 15 + 17 + 19 = 100
```

Testcase: 4

```
 *** Display Summation (skip 2 number)***
Enter 2 whole numbers : 9 9
Summation = 9 = 9
```

Testcase 5

```
 *** Display Summation (skip 2 number)***
Enter 2 whole numbers : 8 -12
Summation = -12 + -10 + -8 + -6 + -4 + -2 + 0 + 2 + 4 + 6 + 8 = -22
```

Testcase 6

```
 *** Display Summation (skip 2 number)***
Enter 2 whole numbers : -1 -11
Summation = -11 + -9 + -7 + -5 + -3 + -1 = -36
```

Answer:
[View](/Quiz%201/exam_2_2_5a.c)

```c
#include <stdio.h>

int main() {
    printf(" *** Display Summation (skip 2 number)***\n");

    int num1, num2, total = 0;
    printf("Enter 2 whole numbers : ");
    scanf("%d %d", &num1, &num2);

    if (num2 < num1) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("Summation = ");
    for (int i = num1; i <= num2; i += 2) {
        total += i;
        printf("%d", i);
        if (num2 - 1 > i) {
            printf(" + ");
        }
    }
    printf(" = %d", total);

    return 0;
}
```

## Quiz1.3 exam_2_3_11a

Question:

```c
ให้เขียนโปรแกรมรับเลขจำนวนเต็ม 1 จำนวน แล้วแสดงผลดังตัวอย่าง
```

Output:

Testcase: 1

```
input : 5

1
12
123
1234
12345
```

Testcase: 2

```
input : 1

1
```

Testcase: 3

```
input : 3

1
12
123
```

Testcase: 4

```
input : 8

1
12
123
1234
12345
123456
1234567
12345678
```

Answer:
[View](/Quiz%201/exam_2_3_11a.c)

```c
#include <stdio.h>

int main() {
    int num;
    printf("input : ");
    scanf("%d", &num);

    printf("\n");

    for (int col = 0; col < num; col++) {
        for (int row = 0; row < col + 1; row++) {
            printf("%d", row + 1);
        }
        printf("\n");
    }

    return 0;
}
```

## Quiz1.4 exam_2_4_6a

Question:

```c
จงเขียนโปรแกรมเพื่อแสดงผลลัพธ์ ตามเงื่อนไขต่อไปนี้
หากรับค่าตัวเลขจำนวนเต็มที่หารด้วย 5 ลงตัวให้แสดงคำว่า Com
หากรับค่าตัวเลขจำนวนเต็มที่หารด้วย 7 ลงตัวให้แสดงคำว่า Pro
หากรับค่าตัวเลขจำนวนเต็มที่หารด้วย 5 และ 7 ลงตัวให้แสดงคำว่า ComPro
หากรับค่าตัวเลขที่ 5 หรือ 7 หารไม่ลงตัวให้แสดงค่าตัวเลขนั้น
และให้แสดงผลดังตัวอย่าง
```

Output:

Testcase: 1

```
 *** Com Pro 57 ***
Enter a number : 10
Result         : Com
```

Testcase: 2

```
 *** Com Pro 57 ***
Enter a number : 21
Result         : Pro
```

Testcase: 3

```
 *** Com Pro 57 ***
Enter a number : 35
Result         : ComPro
```

Testcase: 4

```
 *** Com Pro 57 ***
Enter a number : 3
Result         : 3
```

Testcase: 5

```
 *** Com Pro 57 ***
Enter a number : 0
Result         : ComPro
```

Testcase: 6

```
 *** Com Pro 57 ***
Enter a number : -20
Result         : Com
```

Testcase: 7

```
 *** Com Pro 57 ***
Enter a number : -70
Result         : ComPro
```

Answer:
[View](/Quiz%201/exam_2_4_6a.c)

```c
#include <stdio.h>

int main() {
    int num;
    printf(" *** Com Pro 57 ***\n");
    printf("Enter a number : ");
    scanf("%d", &num);

    int deviByFive = 0, deviBySeven = 0;

    if (num % 5 == 0) {
        deviByFive = 1;
    }

    if (num % 7 == 0) {
        deviBySeven = 1;
    }

    printf("Result         : ");

    if (deviByFive) {
        printf("Com");
    }

    if (deviBySeven) {
        printf("Pro");
    }

    if (!deviByFive && !deviBySeven) {
        printf("%d", num);
    }

    return 0;
}
```

## Quiz1.5 exam_2_5_9a

Question:

```c
จงเขียนโปรแกรมรับค่าความยาวด้านกว้างและยาวของรูปสี่เหลี่ยมแล้วบอกว่าด้านกว้างและยาวมีขนาดเท่าไหร่ พร้อมคำนวณหาความยาวเส้นรอบรูป
```

Output:

Testcase: 1

```
Enter rectangle length and width: 12 34
length= 34, width= 12
Perimeter of rectangle is 92
```

Testcase: 2

```
Enter rectangle length and width: 53 12
length= 53, width= 12
Perimeter of rectangle is 130
```

Answer:
[View](/Quiz%201/exam_2_5_9a.c)

```c
#include <stdio.h>

int main() {
    int num1, num2, length, width;
    printf("Enter rectangle length and width: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        length = num1;
        width = num2;
    } else {
        length = num2;
        width = num1;
    }

    printf("length= %d, width= %d\n", length, width);
    printf("Perimeter of rectangle is %d", (length * 2) + (width * 2));

    return 0;
}
```

[Top](#quiz-1)
