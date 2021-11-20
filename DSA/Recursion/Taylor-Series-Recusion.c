//wap to find the value of e with taylor series by uing recursion.

#include <stdio.h>

double e(double x, double n)
{
    static double powerVariable = 1, factVariable = 1;
    double sumOfPrev;

    if (n == 0)
        return 1;
    sumOfPrev = e(x, n - 1);
    powerVariable = powerVariable * x;
    factVariable = factVariable * n;
    return sumOfPrev + (powerVariable / factVariable);
}

int main()
{
    double a, b;
    scanf("%lf%lf", &a, &b);
    printf("%lf\n", e(a, b));
    return 0;
}