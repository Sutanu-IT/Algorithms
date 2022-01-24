#include <stdio.h>

int smallest(int arr[], int i, int n)
{
    int pos = i;
    int small = arr[i];
    for (int j = i + 1; j < n; j++)
    {
        if (arr[j] < small)
        {
            small = arr[j];
            pos = j;
        }
    }
    return pos;
}

void selection_sort(int arr[], int n)
{
    int i, pos, temp;
    for (i = 0; i < n; i++)
    {
        pos = smallest(arr, i, n);
        temp = arr[i];
        arr[i] = arr[pos];
        arr[pos] = temp;
    }
}

void Display(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d  ", array[i]);
    }
}

int main()
{
    int num;
    printf("Enter the number of element in the array:\n");
    scanf("%d", &num);

    int data[num];
    printf("Enter your element:");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &data[i]);
    }

    printf("Unsorted array\n");
    Display(data, num);

    selection_sort(data, num);

    printf("\nSorted array: \n");
    Display(data, num);
}