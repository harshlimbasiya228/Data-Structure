#include<stdio.h>
void main(){
    int size;
    printf("enter the size of array\n");
    scanf("%d",&size);
    int arr[size];
    int i;
    printf("enter the element of array\n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int m,n;
    printf("enter a value of m and n: \n");
    scanf("%d %d",&m,&n);
    for(i=0;i<size;i++){
        if(arr[i]==m){
            printf("index :%d\n ",i);
            arr[i]=n;     
        }else{
            printf("element not found");
        }
}
    printf("\n");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}