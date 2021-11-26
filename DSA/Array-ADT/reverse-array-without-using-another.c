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

void reverse(struct array arr1)
{
    for (int i = 0, j = arr1.length; i < j; i++, j--)
    {
        int temp;
        {
            temp = arr1.A[i];
            arr1.A[i] = arr1.A[j];
            arr1.A[j] = temp;
        }
    }
}

int main()
{
    struct array arr1;
    int n;
    printf("Enter The Array Size: ");
    scanf("%d", &arr1.size);
    printf("Enter The Array Length: ");
    scanf("%d", &arr1.length);

    arr1.A = (int *)malloc(arr1.size * sizeof(int));

    set(arr1);

    reverse(arr1);

    for (int i = 1; i <= arr1.length; i++)
    {
        printf("%d\t", arr1.A[i]);
    }
    printf("\n");

    return 0;
}