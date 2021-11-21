#include <stdio.h>
#include <stdlib.h>

struct array
{
    int *A;
    int size;
    int length;
};

void getValues(struct array arr1)
{
    for (int i = 0; i < arr1.length; i++)
    {
        scanf("%d", &arr1.A[i]);
    }
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int linearSearch(struct array *a, int elementToSearch)
{
    for (int i = 0; i < a->length; i++)
    {
        if (a->A[i] == elementToSearch)
        {
            return i;
        }
    }
    return -1;
}
#include <stdio.h>
#include <stdlib.h>

struct array
{
    int *A;
    int size;
    int length;
};

void getValues(struct array arr1)
{
    for (int i = 0; i < arr1.length; i++)
    {
        scanf("%d", &arr1.A[i]);
    }
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int linearSearch(struct array *a, int elementToSearch)
{
    for (int i = 0; i < a->length; i++)
    {
        if (a->A[i] == elementToSearch)
        {
            swap(&a->A[i], &a->A[i - 1]);
            return i;
        }
    }
    return -1;
}

int main()
{
    struct array arr;
    int elementToSearch;
    arr.A = (int *)malloc(arr.size * sizeof(int));

    printf("Enter the Size of the array: ");
    scanf("%d", &arr.size);

    printf("Enter the length of the array: ");
    scanf("%d", &arr.length);

    printf("Enter the values for Array: ");
    getValues(arr);
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the element you want to search: ");
        scanf("%d", &elementToSearch);
        printf("%d\n", linearSearch(&arr, elementToSearch));
    }

    return 0;
}

int main()
{
    struct array arr;
    int elementToSearch;
    arr.A = (int *)malloc(arr.size * sizeof(int));

    printf("Enter the Size of the array: ");
    scanf("%d", &arr.size);

    printf("Enter the length of the array: ");
    scanf("%d", &arr.length);

    printf("Enter the values for Array: ");
    getValues(arr);
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the element you want to search: ");
        scanf("%d", &elementToSearch);
        printf("%d\n", linearSearch(&arr, elementToSearch));
    }

    return 0;
}