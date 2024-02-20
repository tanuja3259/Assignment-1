/*1d array
Wap to display second maximum and second minimum values in an array.*/

#include <stdio.h>

void findSecondMaxMin(int arr[], int size);
int main()
{
    int arr[50]; 
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    findSecondMaxMin(arr, size);
    return 0;
}

void findSecondMaxMin(int arr[], int size)
{
    int max, secondMax, min, secondMin;
    max = secondMax = arr[0];
    min = secondMin = arr[0];

    // Find second maximum elements
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            secondMax = max;
            max = arr[i];
        }
        else if (arr[i] > secondMax && arr[i] != max)
        {
            secondMax = arr[i];
        }
    }

    // Find second minimum elements
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            secondMin = min;
            min = arr[i];
        }
        else if (arr[i] < secondMin && arr[i] != min)
        {
            secondMin = arr[i];
        }
    }
    printf("Second Maximum: %d\n", secondMax);
    printf("Second Minimum: %d\n", secondMin);
}
