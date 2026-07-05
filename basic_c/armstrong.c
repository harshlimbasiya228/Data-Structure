#include<stdio.h>
void main(){
    int n;
    printf("enter a value of n : ");
    scanf("%d",&n);
    int orignal=n;
    int res=0;
    while (n>0)
    {
        int digit = n%10;
        res=res+(digit*digit*digit);
        n=n/10;
    }
    if(res==orignal){
        printf("armstrong number");
    }else{
        printf("not armstrong number");
    }
}