#include <stdio.h>

void main()
{
    char input;
    printf("Enter a character: ");
    scanf("%c", &input);

    switch (input)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        {
            printf("Its a vowel.\n");
            break;
        }
        default: 
        {
            printf("Its not a vowel.\n");
            break;
        }
    }

}