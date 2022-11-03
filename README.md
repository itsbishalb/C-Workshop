# C 2022 Mentoring Worksheet - Pointers
---

Welcome to the pointers mentor session! This workshop will have some theory-based questions similar to the examples Jamie will show you in lectures, and some practical exercises.

To get a copy of this repo (so you can code your own solutions), clone this repo by running the following command:

```
git clone https://github.com/itsbishalb/C-Workshop.git
```

Feel free to ask any questions during the mentor session, or afterwards on discord.

## Theory Questions
---
### Question 1
How would you declare each of the following datatypes in C? Use any variable name you like.

<ul>
  <li>An integer array of length 16.</li>
  <li>A 2D array of characters, 8x8 length.</li>
  <li>An integer pointer.</li>
  <li>A 2D Array of Strings</li>
<\ul>

### Question 2
```
void func1(int *n) {
    *n = 10;
}

int func2(int *x, int *y) {
    *x += *y;
    return *x++;
}

void func3(int* p)
{
  p = NULL;
}

void func4(int* p)
{
  &p = NULL;
}

int main() {
    int i, j, k = 20;
    int x, y;

    /* A */

    j = ++k;
    i = j++;

    /* B */

    func1(&j);

    /* C */

    k = func2(&i, &j);

    /* D */
   
    printf("%p", &x);
    b(&x);
    printf("%p", &x);
    
    /* E */
    
    printf("%p", &y);
    b(&y);
    printf("%p", &y);
    
    /* F */
}
```
What are the values of i, j, and k,x and y at the following points in the code?

## Practical Tasks
___

### Tasks 

[Task 1 : Add 2 numbers using pointers](/task1.c)  <br>
[Task 2:  Pass by reference](task2.c) <br>
[Task 3: Indexing and Pointer arithmetic](task3.c) <br>
[Task 4: Find  length of a string](task4.c) <br>
[Task 5: Reverse a string](task5.c) <br>

### Solutions

[Task 1](/solutions/task1-solution.c)  <br>
[Task 2](/solutions/task2-solution.c)  <br>
[Task 3](/solutions/task3-solution.c)  <br>
[Task 4](/solutions/task4-solution.c)  <br>
[Task 5](/solutions/task5-solution.c)  <br>
