#include <stdio.h>
#include <string.h>

/*
Task:
    Write a program in C to calculate the length of the string using a pointer.
    Input: Rubber Duck Debugging
    Expected Output: 21
*/
int calculateLength(char*);
 
int main() 
{
   char str1[256] = ""; /* Longest string that can be entered is 254 chars*/
   int l = 0;

   printf(" Input a string: ");
   fgets(str1, sizeof(str1), stdin); /* takes string input */
   
    /* INSERT YOUR CODE HERE */
}
 
int calculateLength(char* ch) /* ch = First element of array str1 ( &str1[0]  ) */
{
   int ctr = 0;
    /* INSERT YOUR CODE HERE */
   return ctr;
}
