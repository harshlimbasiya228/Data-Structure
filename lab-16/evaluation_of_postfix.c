#include<stdio.h>
#include<ctype.h>
#define N 20
int stack[N];
int top=-1;
void push(int);
int pop();
void main(){
    int n,i,operend2, operend1;
    printf("enter a value of n:\n");
    scanf("%d",&n);
    char str[n];
    printf("enter a evalution string :\n");
    scanf("%s",str);
    int result=0;
    for(i=0;str[i]!='\0';i++){
        char ch =str[i];
        if(isdigit(ch)){
            push(ch-'0');
        }else{
             operend2=pop();
             operend1=pop();

        switch (ch)
        {
        case '+':
            result=operend1+operend2;
            break;
        case '-':
            result=operend1-operend2;
            break;
        case '*':
            result=operend1*operend2;
            break;
        case '/':
            result=operend1/operend2;
            break;
        default:
        printf("enter a valid operatior +,-,*,/");
            break;
        }
         push(result);
        } 
    }
    int ans=pop(top);
    printf("%d : ",ans);
    
}
void push(int x){
    
    if(top == N-1){
        printf("stack overflow");
        return;
    }
    top++;
    stack[top]=x;
}
int pop(){
    if(top==-1){
        return '\0';
    }
    return stack[top--];
}
