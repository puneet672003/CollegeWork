#include <stdio.h>
#include <stdlib.h>

// forward declarions
void _printLine(int times);

void inputMatrix(int r, int c, int arr[r][c]);
void outputMatrix(int r, int c, int arr[r][c]);

void add();
void subtract();
void product();
void transpose();
void upperLowerSum();


// main
int main()
{
    printf("Select any one from the following list: \n");
    printf("\t1. Addition of two matrices.\n");
    printf("\t2. Subtraction of two matrices.\n");
    printf("\t3. Finding upper and lower triangular of matrix.\n");
    printf("\t4. Transpose of matrix.\n");
    printf("\t5. Product of two matrices.\n");

    int choice;
    while (1) 
    {
        fflush(stdin);
        scanf("%d", &choice);

        switch (choice)
        {
            case 1: 
                add();
                break;
            case 2: 
                subtract();
                break;
            case 3: 
                upperLowerSum();
                break;
            case 4: 
                transpose();
                break;
            case 5: 
                product();
                break;
            default: 
                printf("Invalid input provided! Please input again: \n");
                continue;
        }

        break;
    }

    return 0;
}


// defining functions
void _printLine(int times)
{
    printf("\t");
    for (int time=1; time<=times; time++)
        for (int _=1; _<=15; _++) printf("-");
    printf("\n");
}

void inputMatrix(int r, int c, int arr[r][c])
{
    for (int i=0; i<r; i++)
    {
        printf("\tRow %d: \n", i+1);

        for (int j=0; j<c; j++)
        {
            printf("\t\tColumn %d: ", j+1);
            scanf("%d", &(arr[i][j]));
        }
    }
}

void outputMatrix(int r, int c, int arr[r][c])
{
    printf("\nResultant matrix: \n");

    for (int i=0; i<r; i++)
    {
        _printLine(c);

        for (int j=0; j<c; j++)
            printf("\t| %10d ", arr[i][j]);
        
        printf("|\n");
    }
    _printLine(c);
}

void add()
{
    int r, c; 
    printf("\nEnter order of matrices to add (format: rxc): ");
    scanf("%dx%d", &r, &c);

    int matrix1[r][c];
    int matrix2[r][c];

    printf("\nEnter elements of matrix 1: \n");
    inputMatrix(r, c, matrix1);

    printf("\nEnter elements of matrix 2: \n");
    inputMatrix(r, c, matrix2);

    int result[r][c];
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
            result[i][j] = matrix1[i][j] + matrix2[i][j];
    }

    outputMatrix(r, c, result);
}

void subtract()
{
    int r, c; 
    printf("\nEnter order of matrices to subtract (format: rxc): ");
    scanf("%dx%d", &r, &c);

    int matrix1[r][c];
    int matrix2[r][c];

    printf("\nEnter elements of matrix 1: \n");
    inputMatrix(r, c, matrix1);

    printf("\nEnter elements of matrix 2: \n");
    inputMatrix(r, c, matrix2);

    int result[r][c];
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
            result[i][j] = matrix1[i][j] - matrix2[i][j];
    }

    outputMatrix(r, c, result);
}

void product()
{
    int r1, c1; 
    printf("\nEnter order of first matrix to multiply (format: rxc): ");
    scanf("%dx%d", &r1, &c1);

    int r2, c2; 
    printf("\nEnter order of second matrix to multiply (format: rxc): ");
    scanf("%dx%d", &r2, &c2);

    if (c1 != r2)
    {
        printf("\nError: No. of columns in first matrix must be equal to no. of rows in second matrix!\n");
        return;
    }

    int matrix1[r1][c1];
    int matrix2[r2][c2];
    
    printf("\nEnter elements of matrix 1: \n");
    inputMatrix(r1, c1, matrix1);
    
    printf("\nEnter elements of matrix 2: \n");
    inputMatrix(r2, c2, matrix2);

    int resultant[r1][c2];
    for (int i=0; i<r1; i++)
    {
        for (int j=0; j<c2; j++)
        {
            int sum = 0;
            for (int k=0; k<c1; k++)
                sum += (matrix1[i][k]) * (matrix2[k][j]);

            resultant[i][j] = sum;
        }
    }

    outputMatrix(r1, c2, resultant);
}

void transpose()
{
    int r, c; 
    printf("\nEnter order of matrix to find transpose of (format: rxc): ");
    scanf("%dx%d", &r, &c);

    int matrix[r][c];
    printf("\nEnter elements of matrix 1: \n");
    inputMatrix(r, c, matrix);

    int resultant[c][r];
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            resultant[j][i] = matrix[i][j];
        }
    }

    outputMatrix(c, r, resultant);
}

void upperLowerSum()
{
    int r, c; 
    printf("\nEnter order of matrix (format: rxc): ");
    scanf("%dx%d", &r, &c);

    if (r != c)
    {
        printf("\nError: Matrix must be a square matrix i.e no. of rows = no. of columns!\n");
        return;
    }

    int matrix[r][c];
    printf("\nEnter elements of matrix 1: \n");
    inputMatrix(r, c, matrix);

    int upperSum=0, lowerSum=0;
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            if (i<j)
            {
                upperSum += matrix[i][j];
            }
            else if (i==j)
            {
                upperSum += matrix[i][j];
                lowerSum += matrix[i][j];
            }
            else 
            {
                lowerSum += matrix[i][j];
            }

        }
    }
    printf("\nUpper Triangular sum: %d", upperSum);
    printf("\nLower Triangular sum: %d\n", lowerSum);
}