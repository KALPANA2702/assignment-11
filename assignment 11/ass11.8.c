#include <stdio.h>

int factorial(int n);
int combination(int n, int r);
void pascal(int n);

int factorial(int n)
{
    int i, f = 1;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}

int combination(int n, int r)
{
    return factorial(n) / (factorial(n - r) * factorial(r));
}

void pascal(int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        // Print spaces for alignment
        for (j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }

        for (j = 0; j <= i; j++)
        {
            printf("%d ", combination(i, j));
        }
        printf("\n");
    }
}

int main()
{
    pascal(7);
    return 0;
}
