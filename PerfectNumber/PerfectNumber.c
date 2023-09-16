#include <stdio.h>

int isPerfectNumber(int);

int main()
{
    printf("%d", isPerfectNumber(6));
}

int isPerfectNumber(int num)
{
    int result = 0;
    int n = num;
    num--;

    while (num != 0)
    {
        if (!(n % num))
            result += num;
        num--;
    }

    return n == result;
}