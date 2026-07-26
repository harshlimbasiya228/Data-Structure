#include<stdio.h>
int n=5;
int stack[5];
int top=-1;
void push(int);
int pop();
void display();
void peep(int);
void change(int,int);
void main(){
    
    int x,y=28;
    push(10);
    push(20);
    push(30);
    push(50);
    pop();
    display();
    printf("\n");
    int position;
    printf("enter a position:\n");
    scanf("%d",&position);
    peep(position);
    change(y,position);

}
void push(int x){
    
    if(top > n-1){
        printf("stack overflow");
    }
    top++;
    stack[top]=x;
}
void display(){
    if(top==-1){
        printf("stack underflow");
    }
    int i;
    for(i=top;i>=0;i--){
        printf("%d\t",stack[i]);
    }
}
void peep(int position){
    if(position > top+1 || top==-1 || position<=0){
        printf("position not found");
    }
    int index=top-position+1;
   printf("peep : %d", stack[index]);

}
void change(int y,int position){
    if(top==-1){
        printf("stack empty");
    }
    int temp = top-position+1;
    stack[temp]=y;
    printf("\n");
    printf("===new element change===\n");
    display();
}
int pop(){
    if(top==-1){
        printf("stack is empty");
    }
    return stack[top--];
}