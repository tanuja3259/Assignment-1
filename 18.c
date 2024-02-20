//Wap to delete a number at specified position in the array(using functions).

#include <stdio.h>
void deleteElement(int arr[], int *size, int position);

int main()
{
    int arr[50]; 
    int size, position;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position of the element to delete (1 to %d): ", size);
    scanf("%d", &position);
    if (position < 1 || position > size)
    {
        printf("Invalid position.\n");
    }
    else
    {
        deleteElement(arr, &size, position);
        printf("Array after deleting element at position %d:\n", position);
        for (int i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}

// Function to delete an element at the specified position in the array
void deleteElement(int arr[], int *size, int position)
{
    for (int i = position - 1; i < *size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}
