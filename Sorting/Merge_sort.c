#include <stdio.h>

void merge(int arr[], int lb, int mid, int ub)
{
    int i = lb;
    int j = mid + 1;
    int k = lb;
    int size = ub +1;
    int a[size];

    while (i <= mid && j <= ub)
    {
        if (arr[i] < arr[j])
        {
            a[k] = arr[i];
            i++;
        }
        else
        {
            a[k] = arr[j];
            j++;
        }
        k++;
    }
    if (i > mid)
    {
        while (j <= ub)
        {
            a[k] = arr[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            a[k] = arr[i];
            i++;
            k++;
        }
    }
    for (int p =lb; p <size; p++)
    {
        arr[p] = a[p];
    }
}

void merge_sort(int arr[], int lb, int ub)
{
    int mid;
    if (lb < ub)
    {
        int mid = (lb + ub) / 2;
        merge_sort(arr, lb, mid);
        merge_sort(arr, mid + 1, ub);
        merge(arr, lb, mid, ub);
    }
}

void Display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
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

    merge_sort(data, 0, num-1);

    printf("\nSorted array: \n");
    Display(data, num);
}