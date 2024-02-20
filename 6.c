/*2d array
Wap to multiply two matrices (if possible) of size MxN and PxQ.*/

#include <stdio.h>
#define MAX_SIZE 10

void matrixMultiplication(int mat1[][MAX_SIZE], int mat2[][MAX_SIZE], int m, int n, int p, int q);

int main()
{
    int mat1[MAX_SIZE][MAX_SIZE], mat2[MAX_SIZE][MAX_SIZE];
    int m, n, p, q;
    printf("Enter the dimensions of the first matrix (M x N): ");
    scanf("%d %d", &m, &n);
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter the dimensions of the second matrix (P x Q): ");
    scanf("%d %d", &p, &q);
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    if (n == p)
    {
        matrixMultiplication(mat1, mat2, m, n, p, q);
    }
    else
    {
        printf("Matrix multiplication is not possible.\n");
    }

    return 0;
}

// Function to perform matrix multiplication
void matrixMultiplication(int mat1[][MAX_SIZE], int mat2[][MAX_SIZE], int m, int n, int p, int q)
{
    int result[MAX_SIZE][MAX_SIZE];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}
