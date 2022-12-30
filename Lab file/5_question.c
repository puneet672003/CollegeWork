#include <stdio.h>
#include <math.h>

void main()
{
    float a, r;
    printf("Enter values of a and r: ");
    scanf("%f %f", &a, &r);

    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    float sum=0;
    for (int i=0; i<n; i++)
    {
        float term = a*(pow(r, i));
        sum += term;
        printf("%f\n", term);
    }

    printf("Sum is: %f\n", sum);
}