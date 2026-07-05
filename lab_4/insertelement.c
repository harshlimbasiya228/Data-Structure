#include<stdio.h>
void main(){
    int n,i,index,element;
    printf("enter a value of n :\n");
    scanf("%d",&n);
    int a[n];
    printf("enter a element");
    for(i=0;i<n-1;i++){
        scanf("%d",&a[i]);
    }
    printf("enter a index :");
    scanf("%d",&index);
    printf("enter a element :");
    scanf("%d",&element);
    if(index<n && index>=0){
        for(i=n-1;i>=index;i--){     
                a[i+1]=a[i];
        }
         a[index]=element;
    }else{
        printf("enter a valid index");
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}