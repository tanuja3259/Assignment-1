//Write a c program to check if the integer is Armstrong or not. (using functions)

#include <stdio.h>
#include <math.h>

int isArmstrong(int num);
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (isArmstrong(num))
    {
        printf("%d is an Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}

int isArmstrong(int num)
{
    int originalNum, remainder, n = 0, result = 0;
    originalNum = num;
    
    while (originalNum != 0)
    {
        originalNum /= 10;
        ++n;
    }
    originalNum = num;
    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }
    if (result == num)
    {
        return 1; 
    }
    else
    {
        return 0; 
    }
}
