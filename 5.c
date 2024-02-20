/*1d array
Wap to print factorial of each number in an array (using a recursion).*/

#include <stdio.h>

int factorial(int num);
int main()
{
    int arr[10];
    int size;
    printf("Enter the size of the array (max 10): ");
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Factorials of numbers in the array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Factorial of %d is: %d\n", arr[i], factorial(arr[i]));
    }

    return 0;
}

// Function to calculate factorial using recursion
int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}
