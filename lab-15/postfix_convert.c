#include<stdio.h>
#include<string.h>
#define N 50
char stack[N];
int top=-1;
void push(char);
char pop();
int inpp(char ch){
    if(ch=='+' || ch=='-'){
        return 1;
    }
    if(ch=='*' || ch=='/'){
        return 3;
    }
    if(ch=='^'){
        return 6;
    }
    if(ch=='('){
        return 9;
    }if(ch==')'){
        return 0;
    }
    return 7;
}
int stpp(char ch){
    if(ch=='+' || ch=='-'){
        return 2;
    }
    if(ch=='*' || ch=='/'){
        return 4;
    }
    if(ch=='^'){
        return 5;
    }
    if(ch=='('){
        return 0;
    }
    return 8;
}
void main(){
    char temp;
    char postfix[50];
    char str[50];
    printf("enter a infix string :\n");
    scanf("%s",str);
    strcat(str,")");
    push('(');
    int i=0,k=0;
    while (i!=strlen(str))
    {
        char ch = str[i];
        if(top <0){
            printf("invalid infix\n");
        }
        while (stpp(stack[top])>inpp(ch))
        {
           postfix[k++]=pop();
        }
        if(stpp(stack[top])!=inpp(ch)){
            push(ch);
        }else{
            temp=pop();
        }
        i++;
    }
    postfix[k]='\0';
    printf("postfix exprestion ....\n");
    printf("%s ",postfix);
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