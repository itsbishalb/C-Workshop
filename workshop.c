#include <stdio.h>

/* INTRODUCTION TO POINTERS!

In this section you will learn:
-> What a pointer is
-> How to define pointers
-> What we can do with pointers
-> The use cases where pointers apply

Let's get into it!!

#### INTRODUCTION #####

All variables are stored in a memory location. This location is specified by 
a memory address. This memory address is known to the compiler.

It would be very difficult to have to remember memory locations to change variable data.
So that's why we have labels for variables, e.g. int x = 2;

But what if we want to store the memory address of another variable? Perhaps we want to change
what's at that memory address, and maybe we don't have access to that variable at the time.

This is where pointers come in.

#### WHAT IS A POINTER? ####

A pointer is a variable that stores the memory address of another variable as its value.

Pointers are indicated with an asterick after the data type.

E.g. this is a pointer  */
int * intptr;

/* this is also a pointer */
char * charptr;

/* another pointer */
long * longptr;

/*
You can have pointers of various types, as shown above.

Let's go into the things that we can do with pointers!!
*/

void pointers();

void pointers() {
    /* Let's say we have an integer x that is 5 */
    int x = 5;

    /* Now let's create a pointer that points to the memory address of x. To get the
    address of a variable, we use the & operator. */
    int * ptrx = &x;

    /* Let't print out the address of our pointer! We use the %p print formatter. */
    printf("%p\n", ptrx);

    /* Pointer memory addresses are typically in hexadecimal. Let's try to print out the
    value 5 from our pointer. We can do this using the deference operator which is an asterisk */
    printf("%d\n", *ptrx);

    /* It's important to note that the * performs 2 separate roles. It creates pointer variables, 
    but it can act as a deferencing operator. */

    /* Let's look at pointers with arrays!! Let's define an integer array below.*/
    int y[5] = {2, 4, 6, 8, 10};

    /* Now let's assign a int pointer to the array */
    int * ptr = y;

    printf("array: %d\n", *y-2);

    /* What would the memory address be of ptr in relation to the array y? */

    printf("mem address of array: %p\n", &y);
    printf("mem address of pointer to array: %p\n", ptr);

    /* But what if I showed you that the mem address points to the 
    first element of array y? */

    printf("mem address of 1st element in array: %p\n", &y[0]);

    if (&y[0] == ptr) {
        printf("they are equal!!\n");
    }

    /* This is a very important point (pun intended)

    When you assign a pointer to an array, it will point to the 1st element of the array.
    Additionally, the memory address of the array would be the memory address of the
    1st element of the array.
    
    This is very useful, and there's some exciting things we can do with this!! 
    
    What do you think would be the memory address of z in relation to array y? */

    int * z = ptr + 1;
    printf("memory address of z: %p\n", z);
    printf("memory address of the 2nd element in the array: %p\n", &y[1]);

    if (&y[1] == z) {
        printf("they are also equal!!\n");
    }

    /* So when you increment the value of an array pointer by 1, 
    it points to the next value.
    Why does that happen? 
    
    This is because arrays are contiguous. The values are stored
    right next to each other. So by incrementing an array pointer, you are moving it to the
    next element in the array. */

    /* Pointers can also hold the address of another pointer and you can declare such a pointer as follows: */

    int **ptr2ptr = &ptr;
    printf("address of first pointer: %p\n", ptr2ptr);
    printf("address of second pointer: %p\n", &ptr2ptr);
    printf("address held by first pointer: %p\n", *ptr2ptr);

    /* ### Pointers and Multi-Dimensional Arrays 
    
    As you may already know, a 2 dimensional array can be declared like so: */

    int arr[2][5] = {{1,2,3,4,5}, {6,7,8,9,10}};

    /* But what's the difference between this and a pointer array such as the one below? */
    
    int *pArr[2];

    /* The first array has allocated 10 memory locations for ints, whereas the second array allocates 2 pointers that are not initialised with values, so they could point to arrays of any size */
}

int main(int argv, char ** argc) {
    pointers();
    return 0;
}