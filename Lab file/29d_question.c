#include <stdio.h>

void copy(char from[], char to[])
{   
    int i;
    for (i=0; from[i] != '\0'; i++)
    {
        to[i] = from[i];
    }

    to[i+1] = '\0';
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