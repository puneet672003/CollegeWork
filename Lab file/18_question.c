#include <stdio.h>

void main()
{
    int n;
    printf("Enter number of lines to print: ");
    scanf("%d", &n);

    for (int outer=1; outer<=n; outer++)
    {
        for (int inner=1; inner<=outer; inner++)
        {
            printf("%d ", inner);
        }
        printf("\n");
    }
}