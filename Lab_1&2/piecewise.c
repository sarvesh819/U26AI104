#include <stdio.h>

int main()
{
    float x, y;
    int n;

    printf("Enter value of x: ");
    scanf("%f", &x);

    printf("Enter value of n: ");
    scanf("%d", &n);

    if (n == 1)
    {
        y = 1 + x;
    }
    else if (n == 2)
    {
        y = 1 + x / n;
    }
    else if (n == 3)
    {
        y = 1 + x * x * x;
    }
    else
    {
        y = 1 + n * x;
    }

    printf("Y = %.2f", y);

    return 0;
}