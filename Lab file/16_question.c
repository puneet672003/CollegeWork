#include <stdio.h>

void print_in_words(char c)
{
    switch (c)
    {
        case '0':
        {
            printf("zero ");
            break;
        }
        case '1':
        {
            printf("one ");
            break;
        }
        case '2':
        {
            printf("two ");
            break;
        }
        case '3':
        {
            printf("three ");
            break;
        }
        case '4':
        {
            printf("four ");
            break;
        }
        case '5':
        {
            printf("five ");
            break;
        }
        case '6':
        {
            printf("six ");
            break;
        }
        case '7':
        {
            printf("seven ");
            break;
        }
        case '8':
        {
            printf("eight ");
            break;
        }
        case '9':
        {
            printf("nine ");
            break;
        }
    }
}

void main()
{
    char input[100];
    printf("Enter a number: ");
    scanf("%s", &input);

    for (int i=0; i<10; i++)
    {
        print_in_words(input[i]);
    }
    printf("\n");
}