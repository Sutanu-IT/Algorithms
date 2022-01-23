#include <stdio.h>
void main()
{
    int n;
    printf("Enter No of element :");
    scanf("%d",&n);
    int a[n];
    int element;
    int flag=0;
    printf("\nEnter your elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter Item which is to be searched\n");
    scanf("%d", &element);

    for (int i = 0; i < n; i++)
    {
        if (a[i] == element)
        {
            printf("\nItem found at location %d\n", i+1);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("\n No Item found\n");
    }
}