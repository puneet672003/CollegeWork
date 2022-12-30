#include <stdio.h>

int factorial(int n)
{
    int prod = 1;

    for (int i=2; i <= n; i++)
        prod *= i;
    
    return prod;
}

void main()
{
    int n; 
    printf("Enter a number to: ");
    scanf("%d", &n);

    printf("Factorial: %d\n", factorial(n));
}