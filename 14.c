// Wap to reverse the given number.

#include <stdio.h>

int reverseNumber(int num);
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("The reverse of %d is: %d\n", num, reverseNumber(num));

    return 0;
}
int reverseNumber(int num)
{
    int reversedNum = 0, remainder;
    while (num != 0)
    {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    return reversedNum;
}
