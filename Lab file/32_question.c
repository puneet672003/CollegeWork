#include <stdio.h>

void main()
{
    float x, y; 
    printf("Enter x and y: ");
    scanf("%f %f", &x, &y);

    if (x > 0)
    {
        if (y > 0)
        {
            printf("First quadrant.\n");
        }
        else 
        {
            printf("Fourth quadrant.\n");
        }
    }

    else 
    {
        if (y > 0)
        {
            printf("Second quadrant.\n");
        }
        else 
        {
            printf("Third quadrant.\n");
        }
    }
}