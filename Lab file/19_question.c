#include <stdio.h>
#include <math.h>

void main()
{
    int n;
    printf("Enter numer of lines to print: ");
    scanf("%d", &n);

    for (int i=0; i<n; i++)
    {
        for (int j=1; j < 2*n; j++)
        {
            int digit = abs(n-j);
            if (digit <= i)
            {
                printf("%d ", digit);
            }
            else 
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}