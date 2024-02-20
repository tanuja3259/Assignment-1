/*2d array
Wap to arrange the elements of the marix in sorted order.*/

#include <stdio.h>
#define ROWS 3
#define COLS 3

void sortMatrix(int matrix[][COLS], int size);
int main()
{
    int matrix[ROWS][COLS];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    sortMatrix(matrix, ROWS * COLS);
    printf("Matrix after arranging elements in sorted order:\n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// Function to sort the matrix elements in ascending order
void sortMatrix(int matrix[][COLS], int size)
{
    int temp[size];
    int k = 0;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            temp[k++] = matrix[i][j];
        }
    }
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (temp[j] > temp[j + 1])
            {
                int tempVal = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = tempVal;
            }
        }
    }
    k = 0;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            matrix[i][j] = temp[k++];
        }
    }
}
