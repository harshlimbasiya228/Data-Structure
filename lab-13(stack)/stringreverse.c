#include<stdio.h>

#define N 5
int top = -1, top2 = -1;
char stack1[N];
char stack2[N];
void push(char);
char pop();
void push2(char);
void main(){
char x,y;
int i;
printf("enter a string\n");
for(i=0;i<N;i++){
    scanf(" %c", &x);
    push(x);
}
char temp;
for(i=0;i<N;i++){
    temp=pop();
    push2(temp);
}
int count=0;
for(i=0;i<N;i++){
    if(stack1[i]==stack2[i]){
        count++;
    }
}
if(count==N){
    printf("palindrom");
}else{
    printf("not palindrom");
}
}
void push(char x){
    
    if(top == N-1){
        printf("stack overflow");
    }
    top++;
    stack1[top]=x;
}
char pop(){
    if(top==-1){
        printf("stack is empty");
    }
    return stack1[top--];
}
void push2(char y){
    
    if(top2 == N-1){
        printf("stack overflow");
    }
    top2++;
    stack2[top2]=y;
}
