#include<stdio.h>
#define N 20
int top = -1;
char stack[N];
void push(char);
char pop();

void main(){
    int i,x,n;
    printf("enter a value of n: \n");
    scanf("%d",&n);
    char str[n];
    printf("enter a string : \n");
    for(i=0;i<n;i++){
        scanf(" %c",&str[i]);
    }
    for(i=0;i<n;i++){
        if(str[i]=='*'){
            pop();
        }else{
            push(str[i]);
        }
    }
    for(i=0;i<n;i++){
        printf(" %c",str[i]);
    }
    printf("\n");
    printf("output string :\n");
    for(i=0;i<=top;i++){
        printf(" %c",stack[i]);
    }
}
void push(char x){
    
    if(top == N-1){
        printf("stack overflow");
        return;
    }
    top++;
    stack[top]=x;
}
char pop(){
    if(top==-1){
        return '\0';
    }
    return stack[top--];
}
