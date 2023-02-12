#include <stdio.h>

int sum(int* array, int size)
{   
    int sum = 0;
    for(int i = 0; i < size; i++)
        sum += *(array + i);

    return sum;
}

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    printf("Sum of array: %d\n", sum(array, (sizeof(array) / sizeof(int))));

    return 0;
}