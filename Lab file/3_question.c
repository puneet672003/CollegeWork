#include <stdio.h>

void main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    int ascii_c = c;
    printf("ASCII code: %d\n", ascii_c);
}