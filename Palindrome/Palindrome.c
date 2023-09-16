#include <stdio.h>

int isPalindrome(int);

int main()
{
    printf("%d", isPalindrome(1221));
}

int isPalindrome(int n)
{
    int result = 0;
    int q = n;

    while (q != 0)
    {
        int rem = q % 10;
        q = q / 10;

        result = result * 10 + rem;
    }

    return result == n;
}