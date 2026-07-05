#include<stdio.h>
void main(){
    int n;
    printf("enter a value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            printf("%d ",i);
        }
    }
    // area of circle
    // float r;
    // scanf("%f",&r);
    // printf("area = %f",r*r*3.14);
}