#include <stdio.h>

void inputArray(int* arr, int size)
{
    printf("Enter element at: \n");

    for (int i = 0; i < size; i++)
    {
        printf("\tIndex %d: ", i);
        scanf("%d", &(arr[i]));
    }
}

void printArray(int* arr, int size)
{
    printf("Array: \n\t");

    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

void split(int* arr, int from, int size)
{
    int new[size];
    
    for (int i = 0; i < size; i++)
    {
        if (i < from)
            new[from + i + 1] = arr[i];
        else 
            new[i - from] = arr[i];
    }

    // copying elements of new in arr
    for (int j = 0; j < size; j++)
    {
        arr[j] = new[j];
    }
}

int main()
{
    int size;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    
    int from;
    printf("Enter index to split from: ");
    scanf("%d", &from);

    int arr[size];
    inputArray(arr, size);

    printf("Before splitting ");
    printArray(arr, size);

    split(arr, from, size);
    printf("After splitting ");
    printArray(arr, size);

    return 0;
}