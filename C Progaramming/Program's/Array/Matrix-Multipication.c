#include <stdio.h>
int main()
{
    int A[3][3], B[3][3], C[3][3], i, j, k;

    printf("Enter matrix A element:\n");

    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter matrix B element:\n");

    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 3; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    printf("Matrix A:\n");

    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 3; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B:\n");

    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 3; j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 3; j++)
        {

            C[i][j] = 0;
            for (k = 0; k < 3; k++)
            {

                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Matrix A*B:\n");

    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 3; j++)
        {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}