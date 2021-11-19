#include <stdio.h>

struct array
{
    int A[10];
    int size;
    int length;
};

void append(struct array *s, int x)
{
    if (s->length < s->size)
        s->A[s->length++] = x;
}

void display(struct array s)
{
    for (int i = 0; i < s.length; i++)
    {
        printf("%d\t", s.A[i]);
    }
}

int main()
{
    struct array numbers = {{2, 4, 6, 8, 10}, 10, 5}; // 2,4,6,8,10 are values of A[] & 10 is value of size & 5 is value of length
    append(&numbers, 12);
    display(numbers);
    return 0;
}