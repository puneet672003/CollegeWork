#include <stdio.h>

void main()
{
    int n; 
    printf("Enter number of lines to print: ");
    scanf("%d", &n);

    for (int i=n; i>=1; i--)
    {
        for (int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}