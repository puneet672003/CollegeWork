#include <stdio.h>

void main()
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    if ((year%4 == 0) && (year%100 != 0))
        printf("Leap year.\n");
    else if ((year%100 == 0) && (year%400 == 0))
        printf("Leap year.\n");
    else 
        printf("Not a leap year.\n");
}