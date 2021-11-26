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

int get(struct array arr2, int x)
{
    return arr2.A[x];
}

void display(struct array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d\t", arr.A[i]);
    }
    printf("\n");
}

int max(struct array arr)
{
    int max = arr.A[0];
    for (int i = 1; i < arr.length; i++)
    {
        if (arr.A[i > max])
            max = arr.A[i];
    }
    return max;
}

int min(struct array arr)
{
    int min = arr.A[0];
    for (int i = 1; i < arr.length; i++)
    {
        if (arr.A[i] < min)
            min = arr.A[i];
    }
    return min;
}

int sum(struct array arr)
{
    int sum = 0;
    for (int i = 0; i < arr.length; i++)
    {

        sum += arr.A[i];
    }
    return sum;
}

float avg(struct array arr)
{
    float avg;
    avg = (float)sum(arr) / arr.length;
    return avg;
}

void main()
{
    struct array arr;
    int choice, time;

    printf("Enter The Size Of The Array: ");
    scanf("%d", &arr.size);
    printf("Enter The Length Of The Array: ");
    scanf("%d", &arr.length);

    arr.A = (int *)malloc(arr.size * sizeof(int));

    set(arr);
    printf("How many Times Program should run: ");
    scanf("%d", &time);
    while (time--)
    {
        printf("Please Type Accordingly: \n *************************************************\nType 1 To Display All Elements.\nType 2 To Get Element From an Index\nType 3 To Get The Maximum value Of the Array. \nType 4 To Get The Minimum value Of the Array. \nType 5 To Get The Summetion Of the Array. \nType 6 To Get The Average value Of the Array. \n*************************************************\n\n:");
        scanf("%d", &choice);
        if (choice == 1)
            display(arr);
        else if (choice == 2)
        {
            int x;
            printf("Which Element You Want To Get: ");
            scanf("%d", &x);
            printf("%d\n", get(arr, x));
        }
        else if (choice == 3)
            printf("%d\n", max(arr));
        else if (choice == 4)
            printf("%d\n", min(arr));
        else if (choice == 5)
            printf("%d\n", sum(arr));
        else if (choice == 6)
            printf("%.2f\n", avg(arr));
    }
}