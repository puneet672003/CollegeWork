#include <stdio.h>

int fib(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else 
        return (fib(n-1) + fib(n-2));
}

void main()
{
    int digits; 
    printf("Enter number of digits to print: ");
    scanf("%d", &digits);

    for (int i=0; i<digits; i++)
        printf("%d ", fib(i));    
}