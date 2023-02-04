#include <stdio.h>

int isPerfect(int num)
{
    int sum = 0; 

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
            sum += i;
    }

    if (sum == num)
        return 1;
    return 0;
}

int main()
{
    int from, to;
    printf("Enter interval (format: int int): ");
    scanf("%d %d", &from, &to);

    for (int num = from; num <= to; num++)
    {
        if (isPerfect(num))
            printf("%d ", num);
    }
    return 0;
}