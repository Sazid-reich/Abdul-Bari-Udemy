//WAP to print Factorial of a Number

#include <stdio.h>

int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return fact(n - 1) * n;
}

int main()
{
    int num;
    printf("Enter a number to get it's Factorial: ");
    scanf("%d", &num);
    printf("%d\n", fact(num));
    return 0;
}