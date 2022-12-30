#include <stdio.h>

void moveDisks(int n, char from, char to, char aux)
{
    if (n == 1)
    {
        printf("\tDisk 1: from %c to %c.\n", from, to);
    }
    else 
    {
        moveDisks(n-1, from, aux, to);
        printf("\tDisk %d: from %c to %c.\n", n, from, to);
        moveDisks(n-1, aux, to, from);
    }
}

void main()
{
    int n;
    printf("Enter number of disks: ");
    scanf("%d", &n);

    printf("\nSteps: \n");
    moveDisks(n, 'A', 'C', 'B');
}