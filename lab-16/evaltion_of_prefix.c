#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define N 20
int stack[N];
int top=-1;
void push(int);
int pop();
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
        return 0;
    }
    return stack[top--];
}
void main(){
     int n,operend2, operend1;
     printf("enter a value of n \n");
     scanf("%d",&n);
    char str[n+1];
    int i;
    printf("enter a evalution string :\n");
   scanf("%s",str);
    int result=0;
    i=strlen(str)-1;
    while(i>=0){
        char ch =str[i];
        if(isdigit(ch)){
            push(ch-'0');
        }else{
             operend1=pop();
             operend2=pop();

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
        i--;
    }
    int ans=pop();
    printf("result = %d\n ",ans);
}