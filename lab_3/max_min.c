#include<stdio.h>
void main(){
    int n,i;
    printf("enter a vlaue\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("max=%d\n",max);
    int min=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("min=%d\n",min);
}