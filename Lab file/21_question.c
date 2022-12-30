#include <stdio.h>

void main()
{
    int n;
    printf("Enter number of rows to print: ");
    scanf("%d", &n);

    for (int row=1; row<=n; row++)
    {
        for (int spaces=1; spaces <= (n-row); spaces++)
        {
            printf(" ");
        }
        for (int stars=1; stars <= n; stars++)
        {
            printf("*");
        }
        printf("\n");
    }
}