#include <stdio.h>
#include <math.h>

void main()
{
    float a, b, c;

    printf("Enter value of a: ");
    scanf("%f", &a);
    printf("Enter value of b: ");
    scanf("%f", &b);
    printf("Enter value of c: ");
    scanf("%f", &c);

    float d = pow(b, 2) - (4*a*c);

    if (d < 0)
        printf("Roots are imaginary\n");
    else 
    {
        float r1 = (-b + sqrt(d)) / (2*a);
        float r2 = (-b - sqrt(d)) / (2*a);

        printf("Roots are: %f and %f\n", r1, r2);
    }
}