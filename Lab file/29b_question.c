#include <stdio.h>

int length(char str[])
{
    int len;
    for (len = 0; str[len] != '\0'; len++);

    return len;
}

void concatenate(char str1[], char str2[], char result[])
{
    int len1 = length(str1);
    int len2 = length(str2);

    for (int i=0; i <= (len1 + len2 - 1); i++)
    {
        if (i < len1)
            result[i] = str1[i];
        else 
            result[i] = str2[i - len1];
    }
}

void main()
{
    char string1[128];
    char string2[128];

    printf("Enter a string: ");
    gets(string1);
    printf("Enter another string: ");
    gets(string2);

    char result[256];
    concatenate(string1, string2, result);
    printf("Resultant string: %s\n", result);
}