#include<stdio.h>
void main(){
    int n,i;
    int sum=0;
    printf("enter a value of n :");
    scanf("%d",&n);
    int s[n];
    int *p = s;
    for(i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    //sum
    // printf("print array  sum using pointer...\n");
    //  for(i=0;i<n;i++){
    //   sum+=*(p+i);
    // }
    //printf("sum=%d ",sum);

    // largest
    int max = s[0];
 for(i=0;i<n;i++){
       if(max < *(p+i)){
        max= *(p+i);
       }
    }
    printf("max=%d ",max);
}