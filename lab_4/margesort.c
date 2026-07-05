#include<stdio.h>
void main(){
    int n1,n2,n3,i;
    printf("enter a value n1:\n");
    scanf("%d",&n1);
    int a[n1];
    printf("enter a value n2:\n");
    scanf("%d",&n2);
    int b[n2];
    n3=n1+n2;
    int c[n3];
    printf("enter a element of a\n");
    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    printf("enter a element of b\n");
    for(i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<n1;i++){
        c[i]=a[i];
    }
    for(i=n1;i<n3;i++){
        c[i]=b[i-n1];
    }
    printf("marge array\n");
    for(i=0;i<n3;i++){
        printf("%d ",c[i]);
    }
}