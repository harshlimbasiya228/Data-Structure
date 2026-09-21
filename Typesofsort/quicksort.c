#include<stdio.h>

int partition(int arr[],int low,int high){
    int pivot = arr[high];
    int i=low-1;

    for(int j=low;j<high;j++){
        if(arr[j] <= pivot){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp1 = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = temp1;
    return i+1;
}

void quick_sort(int arr[],int low,int high){
    if(low<high){
        int pivotIndex = partition(arr,low,high);

        quick_sort(arr,low,pivotIndex-1);

        quick_sort(arr,pivotIndex+1,high);
    }
}

void main(){
    int arr[]={10,3,7,5,13};
    int n=5,i;

    quick_sort(arr,0,n-1);

    printf("sorted array:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}