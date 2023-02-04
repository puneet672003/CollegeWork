#include <stdio.h>
#include <stdlib.h>

struct Array 
{
    int* array;
    int size;
};

struct Array inputArray(int size)
{
    int* array = (int*) calloc(size, sizeof(int));
    printf("Enter elements at index: \n");

    for (int i = 0; i < size; i++)
    {
        printf("\t%d: ", i);
        scanf("%d", (array + i));
    }

    struct Array arr = {array, size};
    return arr;
}

int isElement(int num, struct Array arr)
{
    for (int i = 0; i < arr.size; i++)
    {
        if (arr.array[i] == num)
            return 1;
    }

    return 0;
}

int isSubset(struct Array toCheck, struct Array superSet)
{
    for (int i = 0; i < toCheck.size; i++)
    {
        if (!(isElement(toCheck.array[i], superSet)))
            return 0;
    }

    return 1;
}

int main()
{
    int s1;
    printf("Enter size of first array: ");
    scanf("%d", &s1);
    struct Array arr1 = inputArray(s1);

    int s2;
    printf("Enter size of second array: ");
    scanf("%d", &s2);
    struct Array arr2 = inputArray(s2);

    if (isSubset(arr1, arr2))
        printf("Array 1 is subset of Array 2.");
    else 
        printf("Array 1 is not a subset of Array 2.");

    return 0;
}