#include<stdio.h>
void delete(int[],int,int,int);
void main(){
    int n,i,element;
    printf("enter a value of n:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter a element : ");
    scanf("%d",&element);
    int index;
    for(i=0;i<n;i++){
        if(element==a[i]){
            index=i;
            printf("index =%d\n",index);
           break;
        }
    }
  delete(a,n,index,i);
}
void delete(int a[],int n,int index,int i){
    for(i=index;i<n-1;i++){
        a[i]=a[i+1];
    }
   printf("after delete element\n");
   for(i=0;i<n-1;i++){
    printf("%d ",a[i]);
   }
}