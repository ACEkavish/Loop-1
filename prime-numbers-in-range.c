#include <stdio.h>

int main(void)
{
    int n, i, j, isPrime;

    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n < 2)
    {
        printf("Please enter an integer greater than or equal to 2.\n");
        return 1;
    }

    printf("Prime numbers from 2 to %d are:\n", n);

    for (i = 2; i <= n; i++)
    {
        isPrime = 1;

        for (j = 2; j <= i / j; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
