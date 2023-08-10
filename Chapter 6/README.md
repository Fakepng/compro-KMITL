# Chapter 6: การเขียนโปรแกรมแบบวนซ้ำ และกำหนดเงื่อนไข

[Back](../README.md)

## Table of Contents

- [แสดงผล สามเหลี่ยมปิรามิด](#61-แสดงผล-สามเหลี่ยมปิรามิด)
- [show max*min](#62-show-max*min)
- [สี่เหลี่ยมกลวง](#63-สี่เหลี่ยมกลวง)
- [รับจำนวนเต็ม แสดงตัวอักษร](#64-รับจำนวนเต็ม-แสดงตัวอักษร)
- [ผลรวมของผลต่าง 5 จำนวน](#65-ผลรวมของผลต่าง-5-จำนวน)

## 6.1 แสดงผล สามเหลี่ยมปิรามิด

Question:

```c
รับตัวเลข จำนวนเต็มบวก 1 จำนวน ค่ามากกว่าหรือเท่ากับ 3
แล้วแสดงผลเป็นรูปสามเหลี่ยมหน้าจั่ว ดังนี้
- บรรทัดที่ 1 แสดงผล * จำนวน 1 ตัว
- บรรทัดที่ 2 แสดงผล * จำนวน 3 ตัว
- บรรทัดที่ 3 แสดงผล * จำนวน 5 ตัว
- เพิ่มขึ้น บรรทัดละ 2 ตัว
- จำนวนบรรทัดในการแสดงผลเท่ากับ ตัวเลขที่รับเข้ามา 
- ถ้าจำนวนที่รับเข้ามาน้อยกว่า 3 ให้แสดงผล 

Incorrect number. 

แสดงผลตามตัวอย่าง

หมายเหตุ

ตัวแปรก่อนนำมาใช้งานให้ใส่ค่าเข้าไปในตัวแปรก่อนเสมอ
```

Output:

Testcase: 1

```
 *** Show isosceles triangle ***
Enter a counting number : 5
Output : 
    *      
   ***     
  *****    
 *******   
********* 
```

Testcase: 2

```
 *** Show isosceles triangle ***
Enter a counting number : 1
 --- Incorrect number. ---
```

Testcase: 3

```
 *** Show isosceles triangle ***
Enter a counting number : 9
Output : 
        *          
       ***         
      *****        
     *******       
    *********      
   ***********     
  *************    
 ***************   
*****************
```

Testcase: 4

```
 *** Show isosceles triangle ***
Enter a counting number : 23
Output : 
                      *                        
                     ***                       
                    *****                      
                   *******                     
                  *********                    
                 ***********                   
                *************                  
               ***************                 
              *****************                
             *******************               
            *********************              
           ***********************             
          *************************            
         ***************************           
        *****************************          
       *******************************         
      *********************************        
     ***********************************       
    *************************************      
   ***************************************     
  *****************************************    
 *******************************************   
*********************************************
```

Answer:
[View](/Chapter%206/6-1.c)

```c
#include <stdio.h>

int main() {
  int count;
  printf(" *** Show isosceles triangle ***\n");
  printf("Enter a counting number : ");
  scanf("%d", &count);

  if (count < 3) {
    printf(" --- Incorrect number. ---");
    return 0;
  }
  printf("Output :\n");

  for (int row = 0; row < count; row++) {
    for (int col = 1; col < (count * 2); col++) {
      if (col >= count - row && col <= count + row) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    
    printf("\n");
  }
}
```

## 6.2 show max*min

Question:

```c
จงเขียนโปรแกรมรับ ตัวเลข 10 จำนวน แล้วแสดงผลคูณของ จำนวนที่น้อยที่สุด และ จำนวนที่มากที่สุด
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
Enter 10 integers : 1 66 1 33 44 88 36 99 71 99
99 * 1 = 99
```

Testcase: 3

```
 *** Show max * min ***
Enter 10 integers : 7 8 9 7 8 9 7 8 9 1
9 * 1 = 9
```

Answer:
[View](/Chapter%206/6-2.c)

```c
#include <stdio.h>

int main() {
  int num[10];
  int min, max;
  printf(" *** Show max * min ***\n");
  printf("Enter 10 integers : ");
  for (int i = 0; i < 10; i++) {
    scanf("%d", &num[i]);
  }

  min = num[0];
  max = num[0];

  for (int j = 0; j < 10; j++) {
    if (num[j] < min) {
      min = num[j];
    }

    if (num[j] > max) {
      max = num[j];
    }
  }

  printf("%d * %d = %d", max, min, max * min);
}
```

## 6.3 สี่เหลี่ยมกลวง

Question:

```c
จงเขียนโปรแกรมเพื่อรับเลขจำนวนเต็ม 1 จำนวน ค่าระหว่าง 1-16
ถ้าค่าเกินขอบเขตนี้ให้ แสดงผล Out of range
แสดงผลสี่เหลี่ยมกลวงตามตัวอย่าง
```

Output:

Testcase: 1

```
Enter a number (1-16) : 200
Out of range ! ! !
```

Testcase: 2

```
Enter a number (1-16) : -5
Out of range ! ! !
```

Testcase: 3

```
Enter a number (1-16) : 5
54321
5   1
5   1
5   1
54321
```

Testcase: 4

```
Enter a number (1-16) : 9
987654321
9       1
9       1
9       1
9       1
9       1
9       1
9       1
987654321
```

Testcase: 5

```
Enter a number (1-16) : 13
DCBA987654321
D           1
D           1
D           1
D           1
D           1
D           1
D           1
D           1
D           1
D           1
D           1
DCBA987654321
```

Answer:
[View](/Chapter%206/6-3.c)

```c
#include <stdio.h>

int main() {
  int num;
  printf("Enter a number (1-16) : ");
  scanf("%d", &num);

  if (num < 1 || num > 16) {
    printf("Out of range ! ! !");
    return 0;
  }

  for (int row = 0; row < num; row++) {
    for (int col = num; col > 0; col--) {
      if (row > 0 && row < num - 1 && col > 1 && col < num) {
        printf(" ");
        continue;
      }

      printf("%X", col);
    }
    printf("\n");
  }
}
```

## 6.4 รับจำนวนเต็ม แสดงตัวอักษร

Question:

```c
รับจำนวนเต็ม 1 จำนวน
แสดงผลตามตัวอย่าง
```

Output:

Testcase: 1

```
Enter : 5
ABCDE
BCDEA
CDEAB
DEABC
EABCD
```

Testcase: 2

```
Enter : 13
ABCDEFGHIJKLM
BCDEFGHIJKLMA
CDEFGHIJKLMAB
DEFGHIJKLMABC
EFGHIJKLMABCD
FGHIJKLMABCDE
GHIJKLMABCDEF
HIJKLMABCDEFG
IJKLMABCDEFGH
JKLMABCDEFGHI
KLMABCDEFGHIJ
LMABCDEFGHIJK
MABCDEFGHIJKL
```

Testcase: 3

```
Enter : 8
ABCDEFGH
BCDEFGHA
CDEFGHAB
DEFGHABC
EFGHABCD
FGHABCDE
GHABCDEF
HABCDEFG
```

Testcase: 4

```
Enter : 19
ABCDEFGHIJKLMNOPQRS
BCDEFGHIJKLMNOPQRSA
CDEFGHIJKLMNOPQRSAB
DEFGHIJKLMNOPQRSABC
EFGHIJKLMNOPQRSABCD
FGHIJKLMNOPQRSABCDE
GHIJKLMNOPQRSABCDEF
HIJKLMNOPQRSABCDEFG
IJKLMNOPQRSABCDEFGH
JKLMNOPQRSABCDEFGHI
KLMNOPQRSABCDEFGHIJ
LMNOPQRSABCDEFGHIJK
MNOPQRSABCDEFGHIJKL
NOPQRSABCDEFGHIJKLM
OPQRSABCDEFGHIJKLMN
PQRSABCDEFGHIJKLMNO
QRSABCDEFGHIJKLMNOP
RSABCDEFGHIJKLMNOPQ
SABCDEFGHIJKLMNOPQR
```

Answer:
[View](/Chapter%206/6-4.c)

```c
#include <stdio.h>

int main() {
  int num;
  printf("Enter : ");
  scanf("%d", &num);

  for (int row = 0; row < num; row++) {
    for (int col = 0; col < num; col++) {
      printf("%c", 'A' + (col + row) % num);
    }

    printf("\n");
  }
}
```

## 6.5 ผลรวมของผลต่าง 5 จำนวน

Question:

```c
รับข้อมูลจำนวนเต็ม 1 จำนวน ตั้งแต่ 100-995
แล้วแสดง ผลต่าง ของตัวเลข ที่เกิดจากตัวเลขนั้น และ ตัวเลขที่เกิดจากการสลับ หลักร้อยและหลักหน่วย อีก 5 จำนวน
พร้อมทั้ง แสดงค่าผลรวมของผลต่างทั้ง 5 จำนวนนั้น

Enter a number (100-995) : 999
Out of range : 999

Enter a number (100-995) : 100
| 100 - 1   | =  99
| 101 - 101 | =   0
| 102 - 201 | =  99
| 103 - 301 | = 198
| 104 - 401 | = 297
summation : 693
```

Output:

Testcase: 1

```
Enter a number (100-995) : 95
Out of range : 95
```

Testcase: 2

```
Enter a number (100-995) : 999
Out of range : 999
```

Testcase: 3

```
Enter a number (100-995) : 100
| 100 - 1   | =  99
| 101 - 101 | =   0
| 102 - 201 | =  99
| 103 - 301 | = 198
| 104 - 401 | = 297
summation : 693
```

Testcase: 4

```
Enter a number (100-995) : 735
| 735 - 537 | = 198
| 736 - 637 | =  99
| 737 - 737 | =   0
| 738 - 837 | =  99
| 739 - 937 | = 198
summation : 594
```

Testcase: 5

```
Enter a number (100-995) : 153
| 153 - 351 | = 198
| 154 - 451 | = 297
| 155 - 551 | = 396
| 156 - 651 | = 495
| 157 - 751 | = 594
summation : 1980
```

Testcase: 6

```
Enter a number (100-995) : 888
| 888 - 888 | =   0
| 889 - 988 | =  99
| 890 - 98  | = 792
| 891 - 198 | = 693
| 892 - 298 | = 594
summation : 2178
```

Testcase: 7

```
Enter a number (100-995) : 995
| 995 - 599 | = 396
| 996 - 699 | = 297
| 997 - 799 | = 198
| 998 - 899 | =  99
| 999 - 999 | =   0
summation : 990
```

Answer:
[View](/Chapter%206/6-5.c)

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
  int num;
  int sum = 0;
  printf("Enter a number (100-995) : ");
  scanf("%d", &num);

  if (num < 100 || num > 995) {
    printf("Out of range : %d", num);
    return 0;
  }

  for (int row = 0; row < 5; row++) {
    int reverse = 0;
    int remainder;
    int normal = num + row;
    int toReverse = normal;

    while (toReverse != 0) {
      remainder = toReverse % 10;
      reverse = reverse * 10 + remainder;
      toReverse /= 10;
    }

    int total = abs(normal - reverse);
    sum += total;

    printf("| %3d - %-3d | = %3d\n", normal, reverse, total);
  }

  printf("summation : %d", sum);
}
```

[Top](#chapter-6-การเขียนโปรแกรมแบบวนซ้ำ-และกำหนดเงื่อนไข)
