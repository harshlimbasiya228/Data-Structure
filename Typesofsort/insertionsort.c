#include<stdio.h>
void main(){
    int n,i,j,key;
    printf("enter a value of n:\n");
    scanf("%d",&n);
    int arr[n];
     printf("enter a element :\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    i=1;
    while (i<n)
    {
        key=arr[i];
        j=i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
        i++;
    }
     printf("Insertion sorted array: \n");
    for(i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
}