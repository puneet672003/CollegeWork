#include <stdio.h>

void main()
{
    int n;
    printf("Enter number of terms to print: ");
    scanf("%d", &n);

    int prev=1;
    int next=1;
    printf("%d %d", prev, next);

    for (int counter=2; counter<n; counter++)
    {
        int temp = prev;
        prev = next;
        next += temp;

        printf(" %d", next);
    }
    printf("\n");
}