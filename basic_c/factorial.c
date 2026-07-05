#include<stdio.h>
int fact(int);
void main(){
    int n;
    printf("enter a value od n: ");
    scanf("%d",&n);
    // int fact=1;
    // for(int i=1;i<=n;i++){
    //     fact=fact*i;
    // }
    // printf("factorial:%d",fact);
    int result = fact(n);
    printf("factorial : %d",result);

}
int fact(int n){
    if(n==0 || n==1){
        return 1;
    }else{
        return n*fact(n-1);
    }
}