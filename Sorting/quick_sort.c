#include <stdio.h>

void swap(int *s, int *t) {
  int temp = *s;
  *s = *t;
  *t = temp;
}
int partition(int arr[], int lb, int hb) {
  int pivot = arr[lb];
  int start = lb;
  int end = hb;
  while (start<end){
    while(arr[start]<=pivot)
     start++;
    while(arr[end]>pivot)
     end--;
    if(start<end)
     swap(&arr[start],&arr[end]);
  }
  swap(&arr[end],&arr[lb]);
  return end;
}

void quickSort(int array[], int lb, int hb) {
  if (lb < hb) {
    int loc = partition(array, lb, hb);
    quickSort(array, lb, loc - 1);
  
    quickSort(array, loc + 1, hb);
  }
}

void Display(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
}

int main() {
  int num;
  printf("Enter the number of element in the array:\n");
  scanf("%d",&num);

  int data[num];
  printf("Enter your element:");
  for(int i =0;i<num;i++){
    scanf("%d",& data[i]);
  }
  int n = sizeof(data) / sizeof(data[0]);
  
  printf("Unsorted array\n");
  Display(data, n);
  
  quickSort(data, 0, n - 1);
  
  printf("\nSorted array: \n");
  Display(data, n);
}