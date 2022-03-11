#include <stdio.h>

int main()
{
    int a;
    printf("hello");
    scanf("%d", &a);
    printf("Array size");
    int arr[a];
    printf("Enter Array element of sized %ld: ",sizeof(arr)/sizeof(int));
    // int n;
    // printf("Enter Array size :");
    // scanf("%d", &n);
    // int arr[n];
    // printf("Enter Array element of sized %ld: ",sizeof(arr)/sizeof(int));
    return 0;
}