#include <stdio.h>
#include <string.h>

// Bitwise Operators - & (and), | (or), ~ (not), << (left shift), >> (right shift), ^ (XOR)

void bitwiseAnd();

void bitwiseOr();

void bitwiseNot();

void bitwiseRightShift();

int main()
{
    bitwiseRightShift();
    return 0;
}

void bitwiseRightShift()
{
    printf("%d", 1 >> 1);
}

void bitwiseAnd()
{
    // 7 -> 0 1 1 1
    // 4 -> 0 1 0 0
    // sol (4) -> 0 1 0 0

    // 7 & 4 = 4

    printf("%d", 7 & 4);
}

void bitwiseOr()
{
    // 7 -> 0 1 1 1
    // 4 -> 0 1 0 0
    // sol (7) -> 0 1 1 1

    printf("%d", 7 | 4);
}

void bitwiseNot()
{
    // 7 -> 0 1 1 1
    // sol(8) -> 1 0 0 0

    printf("%d", ~7);
}