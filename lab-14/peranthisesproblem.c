#include<stdio.h>
#define N 20
int top = -1;
char stack[N];
void push(char);
char pop();
void main(){
    int n;
    printf("enter a value of n\n");
    scanf("%d",&n);
    char orignal[n];
    char x;
    int i;
    printf("enter a parantheses string\n");
   for(i=0;i<n;i++){
     scanf(" %c",&orignal[i]);
   }
   for(i=0;i<n;i++){
     printf("%c",orignal[i]);
   }
   printf("\n");
   int temp=1;
    for(i=0;i<n;i++){
        if(orignal[i]=='(' || orignal[i]=='{' || orignal[i]=='['){
            push(orignal[i]);
        }else if(orignal[i]==')' || orignal[i]=='}' || orignal[i]==']'){
            if(top==-1){
                printf("0\n");
                break;;
            }
            char poped = pop();
            if((orignal[i]==')' && poped!='(') || 
              (orignal[i]==']' && poped!='[') || 
              (orignal[i]=='}' && poped!='{')){
                temp=0;
                break;
            }
        }else{
            temp=0;
            break;
        }
    }
    if(temp==1 &&top==-1){
        printf("1\n");
    }else{
       printf("0\n");
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

