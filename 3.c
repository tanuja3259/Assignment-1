/*1d array
Wap to print all primes numbers in the array.*/

#include <stdio.h>

int isPrime(int num);
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
    printf("Prime numbers in the array:\n");
    for (int i = 0; i < size; i++)
    {
        if (isPrime(arr[i]))
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}

// Function to check if a number is prime
int isPrime(int num)
{
    if (num < 2)
    {
        return 0;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}
