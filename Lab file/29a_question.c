#include <stdio.h>

int length(char str[])
{
    int len;
    for (len = 0; str[len] != '\0'; len++);

    return len;
}

void main()
{
    char string[128];
    
    printf("Enter a string: ");
    gets(string);

    printf("Length of the string is: %d\n", length(string));
}