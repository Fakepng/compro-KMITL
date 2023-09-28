# Chapter 9: ตัวแปรแบบตัวชี้ตำแหน่ง และฟังก์ชันขั้นสูง

[Back](../README.md)

## Table of Contents

- [(4) รายได้](#91-4-รายได้)
- [(43) โจร](#92-43-โจร)
- [(4) คะแนน](#93-4-คะแนน)
- [(43) ชื่อมงคล](#94-43-ชื่อมงคล)
- [(43) เติมคำในช่องว่าง](#95-43-เติมคำในช่องว่าง)

## 9.1 (4) รายได้

Question:

```c
นักศึกษาก้มดูเงินที่มีเงินอยู่ในกระเป๋า พบกับธนบัตรยี่สิบบาทเพียงแค่ใบเดียว นักศึกษาจึง
ตัดสินใจไปทำงานหารายได้เพิ่ม แค่นั้นแหละ
* สมมติว่ามีเงินอยู่แล้ว 20 บาท

INPUT :
ตัวเลข 1 ตัว

ให้นำโค้ดข้างล่างนี้ไปแก้ไขเพิ่มเติม โดย ห้ามมีการบวกเลขอยู่ใน main (ให้ไปบวกที่อื่น)

และให้สร้างฟังก์ชันชื่อ add_money_to_wallet ซึ่ง

- ห้ามมีการ return ใด ๆ
- รับ parameter เข้ามากี่ตัวก็ได้
- ห้ามมีการ printf ภายในฟังก์ชันนี้

Hint : pass by reference

int main()
{
    int wallet = 20, income;
    printf("Enter money : ");
    scanf("%d", &income);
    add_money_to_wallet(/* CODE HERE */);
    printf("My wallet -> %d", wallet);
}
```

Output:

Testcase: 1

```
Enter money : 10
My wallet -> 30
```

Testcase: 2

```
Enter money : 0
My wallet -> 20
```

Testcase: 3

```
Enter money : 100
My wallet -> 120
```

<details>
<summary>Answer</summary>

[View](/Chapter%209/9-1.c)

```c
#include <stdio.h>

void add_money_to_wallet(int *wallet, int amount);

int main() {
  int wallet = 20;
  int income;

  printf("Enter money : ");
  scanf("%d", &income);

  add_money_to_wallet(&wallet, income);

  printf("My wallet -> %d", wallet);\

  return 0;
}

void add_money_to_wallet(int *wallet, int amount) {
  *wallet += amount;
}
```

</details>

## 9.2 (43) โจร

Question:

```c
สมมติว่านักศึกษาคือโจร และกำลังจะฝึกสลับกระเป๋าตังของตัวเองกับเหยื่่อ
นักศึกษาเริ่มฝึกฝนผ่านการเขียนโปรแกรม
โดยต้องการที่จะสลับที่ของตัวแปร 2 ตัว

ปล. แสดงผลให้เหมือนเป๊ะ ๆ นะ

ให้นำโค้ดข้างล่างนี้ไปแก้ไขเพิ่มเติม โดย ห้ามแก้ไข main

และให้สร้างฟังก์ชันชื่อ swap_wallet ซึ่ง

- ห้ามมีการ return ใด ๆ
- รับ parameter เข้ามากี่ตัวก็ได้
- ห้ามมีการ printf ภายในฟังก์ชันนี้ ให้มีแค่ใน main เท่านั้น

Hint: pass by referrence

int main()
{
    int my_wallet, other_wallet;
    printf("Enter my money, other money : ");
    scanf("%d %d", &my_wallet, &other_wallet);
    printf("Me : %4d | Other : %4d", my_wallet, other_wallet);
    swap_wallet(&my_wallet, &other_wallet);
    printf("\n\n====== Whooop! ======\n\n");
    printf("Me : %4d | Other : %4d", my_wallet, other_wallet);
}
```

Output:

Testcase: 1

```
Enter my money, other money : 10 200
Me :   10 | Other :  200

====== Whooop! ======

Me :  200 | Other :   10
```

Testcase: 2

```
Enter my money, other money : 0 500
Me :    0 | Other :  500

====== Whooop! ======

Me :  500 | Other :    0
```

<details>
<summary>Answer</summary>

[View](/Chapter%209/9-2.c)

```c
#include <stdio.h>

void swap_wallet(int *my_wallet, int *other_wallet);

int main() {
  int my_wallet, other_wallet;

  printf("Enter my money, other money : ");
  scanf("%d %d", &my_wallet, &other_wallet);

  printf("Me : %4d | Other : %4d", my_wallet, other_wallet);

  swap_wallet(&my_wallet, &other_wallet);

  printf("\n\n====== Whooop! ======\n\n");
  printf("Me : %4d | Other : %4d", my_wallet, other_wallet);

  return 0;
}

void swap_wallet(int *my_wallet, int *other_wallet) {
  int temp = *my_wallet;
  *my_wallet = *other_wallet;
  *other_wallet = temp;
}
```

</details>

## 9.3 (4) คะแนน

Question:

```c
นักศึกษากำลังมองหาคะแนนวิชา Com Pro ของตัวเอง แต่เนื่องจากมีคนเรียนเยอะเกินไป ทำให้หายังไงก็ไม่เจอ
อยู่ดี ๆ นักศึกษาก็มีไอเดียขึ้นมาว่า ถ้าเราเรียงคะแนนจากมากไปหาน้อย
เราก็จะเจอคะแนนของเราอยู่อันแรกๆแน่นอน หาง่ายชัวร์ !!

ปล. แสดงผลให้เหมือนเป๊ะ ๆ นะ

ให้เขียนฟังก์ชัน sort ขึ้นมาเพื่อให้โปรแกรมสมบูรณ์ และห้ามแก้ไข main

Hint : pass by reference

int main()
{
    int scores[5], i;
    printf("Enter 5 score : ");
    for (i = 0; i < 5; i++)
        scanf("%d", &scores[i]);
    sort(scores);
    printf("Sorted : ");
    for (i = 0; i < 5; i++)
        printf("%d ", scores[i]);
}
```

Output:

Testcase: 1

```
Enter 5 score : 5 4 3 2 1
Sorted : 5 4 3 2 1
```

Testcase: 2

```
Enter 5 score : 1 2 3 4 5
Sorted : 5 4 3 2 1
```

Testcase: 3

```
Enter 5 score : 2 3 1 2 4
Sorted : 4 3 2 2 1
```

<details>
<summary>Answer</summary>

[View](/Chapter%209/9-3.c)

```c
#include <stdio.h>

void sort(int *array);

int main() {
  int scores[5];

  printf("Enter 5 score : ");
  for (int i = 0; i < 5; i++) {
    scanf("%d", &scores[i]);
  }

  sort(scores);

  printf("Sorted : ");
  for (int i = 0; i < 5; i++) {
    printf("%d ", scores[i]);
  }

  return 0;
}

void sort(int *array) {
  for (int i = 0; i < 5; i++) {
    for (int j = i + 1; j < 5; j++) {
      if (array[i] < array[j]) {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }
}
```

</details>

## 9.4 (43) ชื่อมงคล

Question:

```c
นักศึกษาถูกหมอดูทักว่าชื่อไม่ค่อยมงคลเลย ถ้าเกรดจะ A ชื่อควรมีตัว A เยอะๆ
นักศึกษาจึงได้ตัดสินใจเขียนโปรแกรมเปลี่ยนชื่อตนเองขึ้นมา ซึ่งถ้าเปลี่ยนทุกตัวเป็น A
มันจะอ่านไม่รู้เรื่อง จึงได้ทำการเปลี่ยนเฉพาะตัวที่เป็น 'สระ' เท่านั้น

INPUT :
ตัวอักษร 2 ชุด

OUTPUT :
ตัวอักษรทั้ง 2 ชุดจจาก input แต่เปลี่ยนสระทุก ๆ ตัวเป็น a

ปล. แสดงให้เหมือนเป๊ะ ๆ นะ

ให้เอาโค้ดส่วนนี้ไปต่อเติมโดยห้ามแก้ไขใน main

#include <stdio.h>
void mongkol(char *p);

int main()
{
    char name[20];
    printf("Enter name : ");
    scanf("%[^\n]", &name);
    mongkol(name);
    printf("Mong-Kol name : %s", name);
}

void mongkol(char *p)
{
    while (*p != '\0')
    {
        /* CODE HERE */
        p++;
    }
}
```

Output:

Testcase: 1

```
Enter name : Computer Programming
Mong-Kol name : Campatar Pragrammang
```

Testcase: 2

```
Enter name : Izac Newton
Mong-Kol name : Azac Nawtan
```

<details>
<summary>Answer</summary>

[View](/Chapter%209/9-4.c)

```c
#include <stdio.h>

void mongkol(char *p);

int main() {
  char name[20];

  printf("Enter name : ");
  scanf("%[^\n]", &name);

  mongkol(name);

  printf("Mong-Kol name : %s", name);

  return 0;
}

void mongkol(char *p) {
  while (*p != '\0') {
    if (*p =='E' || *p == 'I' || *p == 'O' || *p == 'U') *p = 'A';
    if (*p =='e' || *p == 'i' || *p == 'o' || *p == 'u') *p = 'a';
    p++;
  }
}
```

</details>

## 9.5 (43) เติมคำในช่องว่าง

Question:

```c
นักศึกษาจะทำเกมเติมคำในช่องว่างขึ้นมา ซึ่งประโยคนั้นก้คือ I __ You
โดยในช่องว่างจะต้องใส่คำกริยาอะไรก็ได้ลงไป

ปล. แสดงผลให้เหมือนเป๊ะ ๆ นะ

ให้่น้ำ code ไปทำต่อโดยห้ามแก้ไขใน main

และให้สร้างฟังก์ชันชื่อ add_word ซึ่ง

- ห้ามมีการ return ใด ๆ
- รับ parameter เข้ามากี่ตัวก็ได้
- ห้ามมีการ printf ภายในฟังก์ชันนี้

Hint : ลองไปดูฟังก์ชัน strcat มานะ

int main()
{
    char text[50] = "I";
    char verb[10];
    printf("Enter verb : ");
    scanf("%s", verb);
    add_word(text, verb);
    add_word(text, "You");
    printf("Your text  : %s", text);
}
```

Output:

Testcase: 1

```
Enter verb : Look
Your text  : I Look You
```

Testcase: 2

```
Enter verb : Like
Your text  : I Like You
```

Testcase: 3

```
Enter verb : Love
Your text  : I Love You
```

<details>
<summary>Answer</summary>

[View](/Chapter%209/9-5.c)

```c
#include <stdio.h>

void add_word(char *text, char *word);

int main() {
  char text[50] = "I";
  char verb[10];

  printf("Enter verb : ");
  scanf("%s", verb);

  add_word(text, verb);
  add_word(text, "You");

  printf("Your text  : %s", text);

  return 0;
}

void add_word(char *text, char *word) {
  while (*text != '\0') {
    text++;
  }

  *text = ' ';
  text++;

  while (*word != '\0') {
    *text = *word;
    text++;
    word++;
  }

  *text = '\0';
}
```

</details>

[Top](#chapter-9-ตัวแปรแบบตัวชี้ตำแหน่ง-และฟังก์ชันขั้นสูง)
