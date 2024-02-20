// Wap to implement a function that receives a 2D array of float numbers, number of rows and columns and returns the average of all elements.

#include <stdio.h>

float calculateAverage(matrix, rows, cols);
int main()
{
    int rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    float matrix[100][100];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            scanf("%f", &matrix[i][j]);
        }
    }
    float average = calculateAverage(matrix, rows, cols);
    printf("The average of all elements in the matrix is: %.2f\n", average);
    return 0;
}

float calculateAverage(float arr[][100], int rows, int cols)
{
    float sum = 0.0;
    int i, j;
    for (i = 0; i < rows; ++i)
    {
        for (j = 0; j < cols; ++j)
        {
            sum += arr[i][j];
        }
    }
    return sum / (rows * cols);
}