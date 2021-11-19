//Add an element to certain index of an user defined array

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
        printf("%d\t", s.A[i]);
    }
}

void Insert(struct array *s, int index, int x)
{
    if (index <= s->length && index < s->size)
    {
        for (int i = s->length; i >= index; i--)
        {
            s->A[i + 1] = s->A[i];
        }
        s->A[index] = x;
        s->length++;
    }
    else if (index > s->length && index <= s->size)
    {
        s->A[index - 1] = x;
        s->length = index;
    }
}

int main()
{
    struct array numbers;
    int nToInsert, index;
    printf(("Enter the size of the array: "));
    scanf("%d", &numbers.size);
    printf("Enter the length of the array: ");
    scanf("%d", &numbers.length);
    numbers.A = (int *)malloc(numbers.size * sizeof(int));

    printf("Enter the elements: ");
    for (int i = 0; i < numbers.length; i++)
    {
        scanf("%d", &numbers.A[i]);
    }

    display(numbers);
    printf("\n");
    printf("Number to insert:");
    scanf("%d", &nToInsert);
    printf("at Index: ");
    scanf("%d", &index);

    Insert(&numbers, index, nToInsert);
    display(numbers);

    return 0;
}