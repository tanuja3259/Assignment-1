//Wap to calculate the highest common factor of two numbers using a function.

#include <stdio.h>

int hcf(int num1, int num2);
int main()
{
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("The HCF of %d and %d is: %d\n", num1, num2, hcf(num1, num2));

    return 0;
}

int hcf(int num1, int num2)
{
    int i, hcf;

    for (i = 1; i <= num1 && i <= num2; ++i)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i; 
        }
    }
    return hcf;
}
