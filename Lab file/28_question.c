#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
        return 1;

    return (n * factorial(n-1));
}

void main()
{
    int n; 
    printf("Enter a number to: ");
    scanf("%d", &n);

    printf("Factorial: %d\n", factorial(n));
}