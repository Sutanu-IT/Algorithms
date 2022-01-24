#include <stdio.h>

void insertion_sort(int arr[], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;
        while ((temp < arr[j]) && (j >= 0))
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}
    void Display(int array[], int size){
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

        insertion_sort(data, num);

        printf("\nSorted array: \n");
        Display(data, num);
    }