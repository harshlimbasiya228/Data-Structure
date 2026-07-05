#include<stdio.h>

void main(){
   int n1,n2;
   printf("enter a n1 and n2 : ");
   scanf("%d %d",&n1,&n2);
   for(int i=n1;i<=n2;i++){
   int count=0;
    for(int j=1;j<=i;j++){
        if(i%j==0){
            count++;
        }
    }
    if(count==2){
        printf("%d ",i);
    }
   }
}