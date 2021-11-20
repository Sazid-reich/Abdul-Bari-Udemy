//wap to find the value of e with taylor series by uing horners rule loop.

#include <stdio.h>

double e(double x, double n)
{
    double s = 1;
    for (; n > 0; n--)
    {
        s = 1 + (x / n) * s;
    }
    return s;
}

int main()
{
    double a, b;
    scanf("%lf%lf", &a, &b);
    printf("%lf", e(a, b));

    return 0;
}