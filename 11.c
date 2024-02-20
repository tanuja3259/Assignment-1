//Wap to calculate the least common multiple of two numbers using a function.

#include <stdio.h>

int gcd(int a, int b); 
int lcm(int a, int b);
int main()
{
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm(num1, num2));
    return 0;
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

