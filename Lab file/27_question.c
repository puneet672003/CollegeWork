#include <stdio.h>

#define PI 3.14f

float diameter(float radius)
{
    return (radius*2);
}

float circumference(float radius)
{
    return (2*PI*radius);
}

float area(float radius)
{
    return (PI*radius*radius);
}

void main()
{
    float r; 
    printf("Enter radius of a circle: ");
    scanf("%f", &r);

    printf("Diameter: %f\n", diameter(r));
    printf("Circumference: %f\n", circumference(r));
    printf("Area: %f\n", area(r));
}