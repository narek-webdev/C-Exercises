#include <stdio.h>

int floydTriangle(int);

int main()
{
    floydTriangle(3);
}

int floydTriangle(int rows)
{
    int n = 1;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", n++);
        }

        printf("\n");
    }

    return rows;
}