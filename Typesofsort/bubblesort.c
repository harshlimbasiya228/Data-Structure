#include<stdio.h>
void main(){
    int n;
    printf("enter a value of n:\n");
    scanf("%d",&n);
    int arr[n];
    int i,j,temp;
    printf("enter a element :\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("sorted array: \n");
    for(i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
}