/*2d array
Wap to check whether the given matrix is identity matrix or not..*/

#include <stdio.h>
#include <stdbool.h>

bool isIdentityMatrix(int mat[][100], int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if ((i == j && mat[i][j] != 1) || (i != j && mat[i][j] != 0))
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[100][100];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (isIdentityMatrix(matrix, n))
    {
        printf("The given matrix is an identity matrix.\n");
    }
    else
    {
        printf("The given matrix is not an identity matrix.\n");
    }

    return 0;
}
