#include <stdio.h>

int binarySearch(int arr[], int s, int r, int x)
{
    while (r >= s)
    {
        int mid = s + (r - s) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, s, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
int main()
{
    int n, x;
    printf("Enter Array size :");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Array element of sized %ld: ",sizeof(arr)/sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter Which no. you want to search:");
    scanf("%d", &x);
    int result = binarySearch(arr, 0, n - 1, x);
    if (result == -1)
        printf("Element is not present in array");
    else
        printf("Element is present at index %d", result);
    return 0;
}