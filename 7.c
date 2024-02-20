/*2d array
Wap to perform the operation R3=R3-R2+R1, if row=column=3.*/

#include <stdio.h>
#define SIZE 3

void Operation(int matrix[SIZE][SIZE]);
int main()
{
    int matrix[SIZE][SIZE];
    printf("Enter the elements of the matrix (%d x %d):\n", SIZE, SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
   Operation(matrix);
    printf("Matrix after performing the operation:\n");
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// Function to perform the operation R3 = R3 - R2 + R1
void Operation(int matrix[SIZE][SIZE])
{
    for (int j = 0; j < SIZE; j++)
    {
        matrix[2][j] = matrix[2][j] - matrix[1][j] + matrix[0][j];
    }
}
