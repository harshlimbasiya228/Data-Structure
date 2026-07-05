#include<stdio.h>
void main(){
    int i,j,k;
    int n;
    printf("enter a value of n : ");
    scanf("%d",&n);
    int num;
    for(i=0;i<n;i++){
        for(k=n;k>i;k--){
            printf(" ");
        }
        num=1;
        for(j=0;j<=i;j++){
            printf("%d ",num);
            num=num*(i-j)/(j+1);
        }
        printf("\n");
    }
}