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
```C
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
What are the values of i, j, k, x and y at the following points in the code?

 <ul>
  <li>A</li>
  <li>B</li>
  <li>C</li>
  <li>D</li>
  <li>E</li>
  <li>F</li>
</ul>
  
## Practical Tasks
___

### Tasks 

## Task 1: Add 2 numbers using pointers
Edit the `main` function in [task1.c](/task1.c).

It should take in two integer values and store them in `*ptr` and `*qtr`, then store the value of the addition in `sum`.
 
 Input: 3
        4
 Expected Output: 7

## Task 2: Pass by reference
Pass by reference involves a function, in our case, `main`, calling the function `increment` which updates a variable in `main`. For this task, increment the value of `i` using pass by reference.

Input: i = 20
Expected Output: i = 21

## Task 3: Indexing vs. Pointer arithmetic
  
## Task 4: Find the length of a string
  
## Task 5: Reverse a string
  
[Task 2: Pass by reference](task2.c) <br>
[Task 3: Indexing and Pointer arithmetic](task3.c) <br>
[Task 4: Find the length of a string](task4.c) <br>
[Task 5: Reverse a string](task5.c) <br>

### Getting More Practice
---
The best thing you can do to improve your skills in C (and programming in
general) is practice. These are some useful websites for you to try out if you
want to go further.

If you want to challenge yourself, try out the [Advent Of Code](https://adventofcode.com) 
this year. During Advent (1 - 25 Dec) there's a new programming problems every day, you can 
complete them in any programming language you want, and you can join the HackSoc leaderboard to
compete with other people at the university! 

Sites like [LeetCode](https://leetcode.com) or
[HackerRank](https://www.hackerrank.com) are great for getting practice for
interview questions when it comes to find a graduate job, year in industry
placement or internship.

Try some of them out if you want to push yourself! Some of the mentors may be
able to help with these if they've done them before too, so drop a message in
\#programming on the Discord server if you get stuck.
