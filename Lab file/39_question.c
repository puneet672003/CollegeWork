#include <stdio.h>

void swap(int* a, int* b)
{
    int temp = *a; 
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a=%d b=%d\n", a, b);
    swap(&a, &b);
    printf("After swapping: a=%d b=%d\n", a, b);

    return 0;
}