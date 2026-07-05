#include<stdio.h>
void main(){
    int x,y;
    printf("enter a value of x and y :");
    scanf("%d  %d",&x,&y);
    int result;
    for(int i=1;i<=y;i++){
        result=x*i;
    }
    printf("power=%d",result);
}