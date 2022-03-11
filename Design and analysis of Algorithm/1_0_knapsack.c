#include<stdio.h>

int max(int a, int b) { 
    return (a > b)? a : b;
}

int knapsack(int cap,int val[],int wei[],int n){
    int k[n+1][cap+1];

    for(int i=0;i<=n;i++){
        for(int j=0;j<=cap;j++){
            if(i==0||j==0)
              k[i][j]=0;
            else if(wei[i-1]<=j)
               k[i][j] = max(val[i-1] + k[i-1][j-wei[i-1]],  k[i-1][j]);
            else
                k[i][j] = k[i-1][j];
        }
    }
    return k[n][cap];
}

int main(){
    int n=4;
    int val[n];
    int wei[n];
    int bag;

    printf("Enter your value array in assending order :\n");
    for(int i=0; i<n;i++){
        scanf("%d",&val[i]);
    }

    printf("Enter your weight array in accending order :\n");
    for(int i=0; i<n;i++){
        scanf("%d",&wei[i]);
    }
    
    int capacity;
    printf("Enter the capacity : \n");
    scanf("%d",&capacity);

    int totalprofit = knapsack(capacity,val,wei,n);
    printf("Total profit is : %d \n",totalprofit);
    return 0 ;
}
