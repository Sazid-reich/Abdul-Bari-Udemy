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

int binarySearch(struct array *a, int elementToSearch)
{
    int l = 0;
    int h = a->length - 1;
    int mid;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (a->A[mid] == elementToSearch)
            return mid;
        else if (elementToSearch < a->A[mid])
            h = mid - 1;
        else if (elementToSearch > a->A[mid])
            l = mid + 1;
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

    printf("Enter the element you want to search: ");
    scanf("%d", &elementToSearch);
    printf("%d\n", binarySearch(&arr, elementToSearch));
    free(arr.A);

    return 0;
}