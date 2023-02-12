#include <stdio.h>

typedef struct Arr
{
    int* ptr;
    int size;
}
Arr;

int linear_search(int num, Arr array)
{
    for (int i = 0; i < array.size; i++)
    {
        if (*(array.ptr + i) == num)
            return i;
    }

    return -1;
}

int binary_search(int num, Arr array)
{
    int left = 0, right = array.size - 1;

    int mid;

    while (right - left > 1)
    {
        mid = (right - left) / 2;

        if (array.ptr[mid] > num)
            right = mid - 1;
        else if (array.ptr[mid] < num)
            left = mid + 1;
        else 
            return mid;
    }

    if (array.ptr[left] == num)
        return left;
    else if (array.ptr[right] == num)
        return right;
    else
        return -1;
}

int main()
{   
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Arr array = {arr, 10};
    int num = 5;


    int linearIndex = linear_search(num, array);
    int binaryIndex = binary_search(num, array);

    if (linearIndex == -1 || linearIndex == -1)
        printf("%d does not exist in the given array!!\n", num);

    printf("%d found at: %d index using linear search.\n", num, linearIndex);
    printf("%d found at: %d index using binary search.\n", num, binaryIndex);
    
    return 0;
}