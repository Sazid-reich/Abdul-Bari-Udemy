//wap to get the value of an index on fibonacci series by using recursion.

#include <stdio.h>

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 2) + fib(n - 1);
}

void main()
{
    printf("%d\n", fib(5));
}