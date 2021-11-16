#include <stdio.h>
int fib(int n)
{
    int a = 0, b = 1, sum;
    for (int i = 2; i < n; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }
    return sum;
}
int main()
{
    printf("%d\n", fib(6));

    return 0;
}