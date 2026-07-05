#include<stdio.h>
void push_stack(int [],int);
void main(){
    int x,y;
    int a[5]={3,5,1};
   
    printf("enter a push element : \n");
    scanf("%d",&x);
    push_stack(a,x);
    printf("enter a push element : \n");
    scanf("%d",&y);  
    push_stack(a,y);
}
void push_stack(int a[],int x){
    int i;
    int top=2;
    if(top==4){
        printf("stack overflow!");
    }
    if(top>-1){      
        top++;
        a[top]=x;
    }
     printf("stack push sucessfully\n");
     for(i=0;i<=top;i++){
        printf("%d ",a[i]);
     }   
}