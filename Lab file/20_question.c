#include <stdio.h>

void main()
{
    int n;
    printf("Enter number of lines to print: ");
    scanf("%d", &n);

    int count=1;
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=i; j++)
        {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }
}