#include <stdio.h>

void main()
{
    int n; 
    printf("Enter a number: ");
    scanf("%d", &n);

    int original = n, reversed=0, last_digit;

    while (n > 0)
    {
        last_digit = n % 10;
        reversed = (reversed*10) + last_digit;
        n = n/10;
    }

    printf("Reversed : %d\n", reversed);
    
    if (reversed == original)
    {
        printf("Hence, its a pallindrome.\n");
    }
    else 
    {
        printf("Hence, its not a pallindrome.\n");
    }
}