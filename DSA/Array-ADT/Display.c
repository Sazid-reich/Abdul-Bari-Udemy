#include <stdio.h>
#include <stdlib.h>

struct array
{
    int *A;
    int size;
    int length;
};

void display(struct array s)
{
    for (int i = 0; i < s.length; i++)
    {
        printf("%d", s.A[i]);
        printf("\t");
    }
}

int main()
{
    int n;

    struct array list;

    printf("Enter the size of the array: ");
    scanf("%d", &list.size);

    list.A = (int *)malloc(list.size * sizeof(int));
    printf("Enter the numbers of number: ");
    scanf("%d", &n);
    list.length = n;

    printf("Enter All Elements: ");
    for (int i = 0; i < list.length; i++)
    {
        scanf("%d", &list.A[i]);
    }

    display(list);

    return 0;
}