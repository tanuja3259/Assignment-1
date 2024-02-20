/*1d array
Wap to reverse it using recursion.*/

#include <stdio.h>
void reverseArray(int arr[], int start, int end);
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
    reverseArray(arr, 0, size - 1);
    printf("Reversed array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

// Function to reverse an array using recursion
void reverseArray(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    reverseArray(arr, start + 1, end - 1);
}
