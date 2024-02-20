// Wap to remove duplicate values from the array by passing it to a function.

#include <stdio.h>

void removeDuplicates(int arr[], int *size);
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
    removeDuplicates(arr, &size);
    printf("Array after removing duplicates:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

// Function to remove duplicates from the array
void removeDuplicates(int arr[], int *size)
{
    for (int i = 0; i < *size; i++)
    {
        for (int j = i + 1; j < *size;)
        {
            if (arr[j] == arr[i])
            {
                for (int k = j; k < *size - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                (*size)--;
            }
            else
            {
                j++;
            }
        }
    }
}
