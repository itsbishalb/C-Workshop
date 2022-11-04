#include <stdio.h>

/*
  Task: 
    Take in two ints, first and second, through scanf.
    Add the ints using the int pointers, ptr and qtr.
 */

int main()
{
    int first, second, *ptr, *qtr, sum;

    printf(" Input the first number : ");
    scanf("%d", &first);
    printf(" Input the second  number : ");
    scanf("%d", &second);

    ptr = &first;
    qtr = &second;

    sum = *ptr + *qtr;

    printf(" The sum of the entered numbers is : %d\n\n",sum);

    return 0;
}

