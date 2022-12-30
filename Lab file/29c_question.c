#include <stdio.h>

int length(char str[])
{
    int len;
    for (len = 0; str[len] != '\0'; len++);

    return len;
}

void reverse(char str[], char reversed[])
{
    int last_index = length(str) - 1;
    for (int i = last_index; i >= 0; i--)
    {
        reversed[last_index - i] = str[i];
    }
}

void main()
{
    char string[128];
    
    printf("Enter a string: ");
    gets(string);

    char reversed[128];
    reverse(string, reversed);

    printf("Reversed: %s\n", reversed);
}