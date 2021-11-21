#include <stdio.h>
#include <stdlib.h>
struct array
{
    int *A;
    int size;
    int length;
};

void setValues(struct array arr2)
{
    printf("Enter all elements: ");
    for (int i = 0; i < arr2.length; i++)
    {
        scanf("%d", &arr2.A[i]);
    }
}

void getValues(struct array arr3)
{
    printf("All elements are: ");
    for (int i = 0; i < arr3.length; i++)
    {
        printf("%d\t", arr3.A[i]);
    }
    printf("\n");
}

int deleteValue(struct array *arr4, int index)
{
    int x = arr4->A[index];
    if (index < arr4->length)
    {
        for (int i = index; i < arr4->length; i++)
        {
            arr4->A[i] = arr4->A[i + 1];
        }
        arr4->length--;

        return x;
    }
}

void main()
{
    char yesOrNo;
    int indexToDelete;
    struct array list;
    printf("Enter the size of the array: ");
    scanf("%d", &list.size);
    list.A = (int *)malloc(list.size * sizeof(int));
    printf("Enter the numbers of number in the array: ");
    scanf("%d", &list.length);

    setValues(list);
    getValues(list);

    printf("Which index value you want to delete?");
    scanf("%d", &indexToDelete);
    printf("value %d is deleted from index %d \t", deleteValue(&list, indexToDelete), indexToDelete);
    getValues(list);
}