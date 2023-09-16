#include <stdio.h>

int binaryToDecimal(int);

int main()
{
    printf("%d", binaryToDecimal(1011));
}

int power(int base, int exponent)
{
    int n = 1;

    while (exponent != 0)
    {
        n *= base;
        exponent--;
    }

    return n;
}

int binaryToDecimal(int n)
{
    int weight = 0;
    int result = 0;

    while (n != 0)
    {
        result += (n % 10) * power(2, weight);
        n = n / 10;
        weight++;
    }

    return result;
}