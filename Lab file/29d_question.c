#include <stdio.h>

void copy(char from[], char to[])
{
    for (int i=0; from[i] != '\0'; i++)
    {
        to[i] = from[i];
    }
}

void main()
{
    char input[128];
    printf("Enter any string: ");
    gets(input);

    char copied[128];
    copy(input, copied);

    printf("Copied string: %s\n", copied);
}