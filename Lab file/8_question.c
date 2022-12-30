#include <stdio.h>

void main()
{
    float sum=0;
    for (int i=1; i<=5; i++)
    {
        float marks; 
        printf("Enter marks in subject %d: ", i);
        scanf("%f", &marks);

        sum += marks;
    }

    float avgMarks = sum/5.0;

    if (avgMarks > 80)
        printf("Excellent, grade A\n");
    else if (avgMarks > 60)
        printf("Grade C\n");
    else 
        printf("Failed\n");
}