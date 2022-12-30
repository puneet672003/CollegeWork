#include <stdio.h>

char get_opr()
{
    int is_valid = 1;
    char opr;

    do
    {
        printf("Enter the operator (+ or - or * or /): ");
        scanf("%c", &opr);
        // Clear the input buffer
        while ((getchar()) != '\n');

        switch (opr) 
        {
            case '+': 
            case '-':
            case '*': 
            case '/':
                return opr;
            default: 
            {
                printf("\nWrong operator provided! Please try again.\n");
                is_valid = 0;
            }
        }
    } while (!is_valid);
}

void main()
{
    float num1, num2; 
    
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    while ((getchar()) != '\n');

    char opr = get_opr();
    float result;

    switch (opr)
    {
        case '+': 
        {
            result = num1 + num2;
            break;
        }
        case '-': 
        {
            result = num1 - num2;
            break;
        }
        case '*': 
        {
            result = num1 * num2;
            break;
        }
        case '/': 
        {
            result = num1 / num2;
            break;
        }
    }

    printf("Result: %f\n", result);
}