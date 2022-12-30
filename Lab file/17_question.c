#include <stdio.h>

int factorial(int num)
{
    int res = 1;
    for (int i=2; i<=num; i++)
    {
        res *= i;
    }
    return res;
}

int binmoialCoeff(int n, int k)
{
    return ((factorial(n)) / (factorial(k) * (factorial(n-k))));
}

void main()
{
    int n;
    printf("Enter number of lines to print: ");
    scanf("%d", &n);

    for (int outer=0; outer<n; outer++)
    {
        for (int inner=0; inner<=outer; inner++)
        {
            if (inner == 0 || inner == outer)
            {
                printf("%d ", 1);
            }
            else 
            {
                printf("%d ", binmoialCoeff(outer, inner));
            }
        }
        printf("\n");
    }
}