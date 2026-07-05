#include<stdio.h>
//1+(1+2)+(1+2+3)+...+(1+2+3+4+...+n)
void main(){
    int n;
    printf("enter a value of n:");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            sum = sum+j;
        }
    }
    printf("sum=%d",sum);
}