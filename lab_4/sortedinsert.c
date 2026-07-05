#include<stdio.h>
void main(){
    int n,insert,index,i;
    printf("enter a value of n:\n");
    scanf("%d",&n);
    int a[n];
    printf("enter a element");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter a insert element : ");
    scanf("%d",&insert);
    for(i=0;i<n;i++){
        if(insert<a[i]){
            index=i;
            printf("index=%d",index);
            break;
        }
    }
    for(i=n-1;i<index;i--){
        a[index]=insert;
        a[i+1]=a[i];
    }
    for(i=1;i<n;i++){
        printf("%d",a[i]);
    }
}