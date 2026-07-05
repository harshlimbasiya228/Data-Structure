#include<stdio.h>

void main(){
    int n;
    printf("enter a value of n: ");
    scanf("%d",&n);
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        printf("prime number");
    }else{
        printf("not prime number");
    }
}