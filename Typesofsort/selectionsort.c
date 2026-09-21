#include<stdio.h>
void main(){
    int n;
    printf("enter a value of n:\n");
    scanf("%d",&n);
    int arr[n];
    int i,j,temp;
    int min_index;
    printf("enter a element :\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-2;i++){
        min_index=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        if(min_index!=i){
                temp=arr[i];
                arr[i]=arr[min_index];
                arr[min_index]=temp;
            }
    }
     printf("selection sorted array: \n");
    for(i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
}