#include<stdio.h>
void main(){
    int n,i;
    printf("enter a value of n :");
    scanf("%d",&n);
    int s[n];
    int *p = s;
    for(i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    printf("print array using pointer...\n");
     for(i=0;i<n;i++){
       printf("%d ",*(p+i));
    }
}