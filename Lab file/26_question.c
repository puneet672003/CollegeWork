#include <stdio.h>

int reverse(int n)
{
    int last_dig, sum = 0;

    while (n != 0)
    {
        last_dig = n % 10;
        n /= 10;
        sum = sum*10 + last_dig;
    }

    return sum;
}

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int reversed = reverse(num);
    printf("Reversed number: %d\n", reversed);
}