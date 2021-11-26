#include <stdio.h>
#include <stdlib.h>

struct array
{
    int *A;
    int size;
    int length;
};

void set(struct array arr1)
{
    for (int i = 0; i < arr1.length; i++)
    {
        scanf("%d", &arr1.A[i]);
    }
}

void reverse(struct array arr1, struct array arr2)
{
    for (int i = 0, j = arr2.length; i < arr1.length; i++, j--)
    {
        arr2.A[j] = arr1.A[i];
    }
}

int main()
{
    struct array arr1;
    struct array arr2;
    int n;
    printf("Enter The Array Size: ");
    scanf("%d", &arr1.size);
    printf("Enter The Array Length: ");
    scanf("%d", &n);
    arr1.length = n;
    arr2.length = n;

    arr1.A = (int *)malloc(arr1.size * sizeof(int));

    arr2.A = (int *)malloc(arr1.size * sizeof(int));

    set(arr1);

    reverse(arr1, arr2);

    for (int i = 1; i <= arr2.length; i++)
    {
        printf("%d\t", arr2.A[i]);
    }

    return 0;
}