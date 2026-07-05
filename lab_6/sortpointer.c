#include<stdio.h>
void main(){
    int n,i,j;
    printf("enter a value of n :");
    scanf("%d",&n);
    int s[n];
    int *p = s;
    for(i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    int temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(*(p+j) > *(p+j+1)){
                temp = *(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=temp;
            }
        }
    }
    printf("sorted array...\n");
    for(i=0;i<n;i++){
        printf("%d ",*(p+i));
    }
}