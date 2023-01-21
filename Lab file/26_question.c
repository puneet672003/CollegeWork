#include <stdio.h>

int reverse(int n, int reversed)
{
    reversed = reversed*10 + (n%10);

    if (n < 10)
        return reversed;
    else 
        reverse(n/10, reversed);
}

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Reversed number: %d", reverse(num, 0));    
}