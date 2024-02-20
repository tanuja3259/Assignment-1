/*2d array
Wap to sort the elements of each row in ascending order.*/

#include <stdio.h>
#define ROWS 3
#define COLS 3

void sortRow(int arr[], int size);
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
    for (int i = 0; i < ROWS; i++)
    {
        sortRow(matrix[i], COLS);
    }
    printf("Matrix after sorting each row in ascending order:\n");
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

// Function to sort a row in ascending order
void sortRow(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
