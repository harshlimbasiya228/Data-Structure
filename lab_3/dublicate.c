#include<stdio.h>
void main(){
    int n,i,j;
    printf("enter a vlaue\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   int dublicate=0;
   for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            dublicate=1;
        }
    }
   }
   if(dublicate==1){
    printf("dublicate is found");
   }else{
    printf("dublicate is not found");
   }
}