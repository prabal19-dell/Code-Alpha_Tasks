23#include <stdio.h>

// Function for Matrix Addition
void matrixAddition(int a[10][10], int b[10][10], int r, int c)
{
    int sum[10][10];

    printf("\nMatrix Addition Result:\n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}

// Function for Matrix Multiplication
void matrixMultiplication(int a[10][10], int b[10][10], int r1, int c1, int c2)
{
    int mul[10][10];

    printf("\nMatrix Multiplication Result:\n");

    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            mul[i][j] = 0;

            for(int k = 0; k < c1; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }

            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
}

// Function for Matrix Transpose
void matrixTranspose(int a[10][10], int r, int c)
{
    printf("\nTranspose of Matrix A:\n");

    for(int i = 0; i < c; i++)
    {
        for(int j = 0; j < r; j++)
        {
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }
}

int main()
{
    int a[10][10], b[10][10];
    int r1, c1, r2, c2;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d%d", &r1, &c1);

    printf("Enter elements of Matrix A:\n");
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d%d", &r2, &c2);

    printf("Enter elements of Matrix B:\n");
    for(int i = 0; i < r2; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Matrix Addition
    if(r1 == r2 && c1 == c2)
    {
        matrixAddition(a, b, r1, c1);
    }
    else
    {
        printf("\nMatrix Addition Not Possible!\n");
    }

    // Matrix Multiplication
    if(c1 == r2)
    {
        matrixMultiplication(a, b, r1, c1, c2);
    }
    else
    {
        printf("\nMatrix Multiplication Not Possible!\n");
    }

    // Transpose of Matrix A
    matrixTranspose(a, r1, c1);

    return 0;
}