#include <stdio.h>
#include <string.h>

/*
  Task:
    pointer arrays are useful for making
    variable size arrays in ANSI C
    and you'll probably be encountering them in current and future cw's
    increment through a char pointer array
    (i.e. like int* numbers)
    and print out every character using
    a. normal indexing numbers[x]
    b. the insane (and bad practice) way [x]numbers
    c. pointer arithmetic
 */

int main()
{
    char *quote = "The moon is made out of cheese";
    int i;

    for (i = 0; i < strlen(quote); i++)
    {
        printf("%c", quote[i]);
    }
    printf("\n");

    for (i = 0; i < strlen(quote); i++)
    {
        printf("%c", i[quote]);
    }
    printf("\n");

    for (i = 0; i < strlen(quote); i++)
    {
        printf("%c", *(quote + i));
    }
    printf("\n");

    return 0;
}
