/*1d array
Wap to search for a number in the array and print whether the number is found or not and its index if found.*/

#include <stdio.h>

int main()
{
    int size, num, found = 0, index = -1;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to search for: ");
    scanf("%d", &num);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            found = 1;
            index = i;
            break;
        }
    }
    if (found)
    {
        printf("The number %d is found at index %d.\n", num, index);
    }
    else
    {
        printf("The number %d is not found in the array.\n", num);
    }
    return 0;
}
