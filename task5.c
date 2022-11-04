
#include <stdio.h>
#include <string.h> 

/*
Task:
    Write a program to reverse a string using pointers.

    We already handling the taking input part for you. 


    Sample Input: Hello
    Expected Output: olleH


    Sample Input: Isaac is best mentor
    Expected Output: rotnem tseb si caasI

    HINT: see what functions you can use from string.h file
*/

void reverse_string(char*);
int main(int argc, char **argv){
  /* Do not edit main function */
    char str[50];
    char *strptr = str;
    printf("Input a string : ");
    scanf("%[^\n]s",str);  /*Takes String Input*/
    reverse_string(strptr);
    printf("%s \n", strptr);
    return 0;
}


void reverse_string(char* str)
{

/* WRITE YOUR CODE HERE */
   
}
