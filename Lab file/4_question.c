#include <stdio.h>

void main()
{
    int input;
    printf("Enter a number: ");
    scanf("%d", &input);

    float result = 1;
    for (int i=1; i <= input; i++)
    {
        result *= i;    
    }

    printf("factorial is: %f\n", result);
}