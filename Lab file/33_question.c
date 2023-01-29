#include <stdio.h>

void inputArray(int size, int* arr)
{
    for (int i=0; i < size; i++)
    {
        printf("Enter character at index %d: ", i);
        scanf("%d", arr+i);
    }
}

int countDublicate(int size, int* arr)
{
    int count=0;
    for (int i=0; i < size; i++)
    {
        for (int j= 0; j < size; j++)
        {
            if (arr[j] == arr[i])
            {
                if (j < i) break;
                else if (j != i) count++;
            }
        }
    }

    return count;
}

int main()
{
    int size; 
    printf("Enter size of your array: ");
    scanf("%d", &size);

    int arr[size];
    inputArray(size, arr);
    int dublicates = countDublicate(size, arr);

    printf("Total number of dublicate elements: %d\n", dublicates);
    return 0;
}