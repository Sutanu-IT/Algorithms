#include <stdio.h>
#define INF 9999
#define size 3

void display(int arr[size][size])
{ // Function to display the array matrix
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i][j] == INF)
                printf("%4s ", INF);
            else
                printf("%4d ", arr[i][j]);
        }
        printf("\n");
    }
}

void floyd_warshal(int arr[size][size])
{ // implementing floyd warshall algorithm

    int i, j, k;
    for (k = 0; k < size; k++)
    {
        for (i = 0; i < size; i++)
        {
            for (j = 0; j < size; j++)
            {
                if (arr[i][j] > arr[i][k] + arr[k][j])
                {
                    arr[i][j] = arr[i][k] + arr[k][j];
                    printf(" %d --> %d via %d = %d \n", i, j, k, arr[i][j]);
                }
            }
        }
    }
    display(arr);
}

int main()
{
    int array[size][size]={0, 4, 7, 1, 0, 2, 6, INF, 0};
    floyd_warshal(array);
    return 0;
}
