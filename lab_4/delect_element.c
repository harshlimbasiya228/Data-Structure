#include<stdio.h>
void main(){
    int n,i,location;
    printf("enter a value of n :\n");
    scanf("%d",&n);
    int a[n];
    printf("enter a element");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter a location of delete index element\n");
    scanf("%d",&location);
    for(i=location;i<n-1;i++){
        a[i]=a[i+1];
    }
    printf("after delete element\n");
    for(i=0;i<n-1;i++){
        printf("%d ",a[i]);
    }
}