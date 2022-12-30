#include <stdio.h>

void fibonacci(int prev, int curr, int n)
{
    static int counter=1;
    if (counter > n)
        return;
    
    printf("%d ", curr);

    int temp = prev;
    prev = curr;
    curr += temp;

    counter++;
    fibonacci(prev, curr, n);
}

void main()
{
    int n;
    printf("Enter number of terms to print: ");
    scanf("%d", &n);

    fibonacci(0, 1, n);
}