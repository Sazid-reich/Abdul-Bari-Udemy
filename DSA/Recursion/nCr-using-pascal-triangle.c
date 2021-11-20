//wap to get the value for nCr using pascels triangle.

#include <stdio.h>

int c(int n, int r)
{
    if (r == 0 || n == r)
        return 1;
    else
        return c(n - 1, r - 1) + c(n - 1, r);
}

void main()
{
    printf("%d\n", c(6, 3));
}