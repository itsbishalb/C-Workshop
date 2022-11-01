#include <stdio.h>

int main(int argc, char **argv)
{
}

// Question 1: Declerations
// make a variable size array
// make an array of 8 strings with 8 characters each
// 
// 

// Question 2
// increment the value of i using pass by reference
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

// Question 3
// pointer arrays are useful for making
// variable size arrays in ANSI C
// and you'll probably be encountering them in current and future cw's
// increment through a char pointer array 
// (i.e. like int* numbers but with type char instead of int)
// and print out every character using
// a. normal indexing numbers[x]
// b. the insane (and bad practice) way [x]numbers
// c. pointer arithmetic 
void indexing() {
    
}


// Question 4/5 (Challenge)
// Something using Void Pointers?
// https://www.geeksforgeeks.org/void-pointer-c-cpp/
// Something easier Aidan's github repo?

