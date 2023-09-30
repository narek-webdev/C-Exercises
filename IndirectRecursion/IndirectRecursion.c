#include <stdio.h>

void odd();
void even();

short int n = 1;

void odd()
{
    if (n > 10)
        return;

    printf("%d ", n + 1);
    n++;
    even();
}

void even()
{
    if (n > 10)
        return;

    printf("%d ", n - 1);
    n++;
    odd();
}

int main()
{
    odd();
    return 0;
}