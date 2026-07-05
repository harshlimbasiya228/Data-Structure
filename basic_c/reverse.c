#include<stdio.h>
void main(){
    int n;
    printf("enter a value of n:");
    scanf("%d",&n);
    int res=0;
    while(n>0){
        int digit = n%10;
        res = res*10+digit;
        n=n/10;
    }
    printf("reverse=%d",res);
}