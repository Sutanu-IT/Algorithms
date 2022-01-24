#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n, temp, j,count =0,flag =0;
    printf("\n Enter the number of elements in the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("\n Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                
            }
            count ++;
        }
        flag ++;
    }
    printf("\n The array sorted in ascending order is :\n");
    for (i = 0; i < n; i++)
        printf("%d\t", arr[i]);
    
    printf("The Flag is : %d",flag);
    printf("The Count is : %d",count);
    return 0;
}