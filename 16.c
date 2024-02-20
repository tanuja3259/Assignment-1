// Write a function that receives a 1D array of integers and its size and returns the maximum value in the array.

#include <stdio.h>
int findMax(int arr[], int size);

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
    int max = findMax(arr, size);
    printf("Maximum value in the array: %d\n", max);
    return 0;
}

// Function to find the maximum value in a 1D array of integers
int findMax(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
