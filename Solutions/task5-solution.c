#include <stdio.h>
#include <string.h> 

void reverse_string(char*); 
/*
Task:
    Write a program to reverse a string using pointers.
    We already handling the taking input part for you. 
    Sample Input: Hello
    Sample Output: olleH
    Sample Input: Isaac is best mentor
    Sample Output: rotnem tseb si caasI
*/
int main(int argc, char **argv){
  int i = -1;
  char str[50];
  char *strptr = str;
  /* Initalize variables here */ 

  printf(" Input a string : ");
  scanf("%[^\n]s",str);  /*Takes String Input*/

  reverse_string(strptr);
  

  printf("%s", strptr);
  return 0;
}


void reverse_string(char* str)
{
  int i,len;
  char *start, *end, temp;

  /* store length of a string using strlen() function found in string.h*/
  len = strlen(str);

  start = str;
  end = str+len-1;/*points to end of str*/ 

  /*Swap the char from start and end*/ 

  for (i = 0; i < len / 2; i++) {

    // swap values of the both pointers 
    temp = *end;
    *end = *start;
    *start = temp;

    /*after each iteration increment start pointer by 1 and decrease end pointer by 1*/ 
    start++;
    end--;
  }
}
