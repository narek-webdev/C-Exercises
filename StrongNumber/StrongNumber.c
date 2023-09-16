#include <stdio.h>

int isStrongNumber(int);

int main()
{
    printf("%d", isStrongNumber(145));
}

int factorial(int n)
{
    int result = 1;

    while (n != 0)
    {
        result *= n;
        n--;
    }

    return result;
}

int isStrongNumber(int n)
{
    int result = 0;
    int tempN = n;

    while (tempN != 0)
    {
        result += factorial(tempN % 10);
        tempN = tempN / 10;
    }

    return result == n;
}