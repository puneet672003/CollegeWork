#include <stdio.h>

int length(char* string)
{
    int length;
    for (length = 0; *(string + length) != '\0'; length++);
    return length;
}

int main()
{
    char* string = "hello world!";
    printf("Length of the string is: %d\n", length(string));

    return 0;
}