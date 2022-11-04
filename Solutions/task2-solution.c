#include <stdio.h>

/*
  Task: 
    Increment the value of i 
    by using pass by reference 
    and the function f.
 */
 void f(int *j)
    {
        (*j)++; 
    }

    int main()
    {
        int i = 20;
        int *p = &i;
        f(p);
        printf("i = %d\n", i);

        return 0;
    }
