#include <stdio.h>

int length(char str[])
{
    int len;
    for (len = 0; str[len] != '\0'; len++);

    return len;
}

int chekcForPallindrome(char str[])
{
    int flag = 1;
    int last_index = length(str) - 1;

    for (int i = last_index; i >= 0; i--)
    {
        if (str[last_index - i] != str[i])
        {
            flag = 0;
            break;
        }
    }

    return flag;
}

void main()
{
    char input[128];
    printf("Enter a string: ");
    gets(input);

    if (chekcForPallindrome(input))
        printf("It's a pallindrome.\n");
    else 
        printf("It's not a pallindrome.\n");
}