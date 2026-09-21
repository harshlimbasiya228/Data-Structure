#include<stdio.h>
#define N 20
char stack[N];
int top=-1;
void push(char);
char pop();
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
void reversed(){
    char temp;
    if(top==-1){
        return;
    }else{
        int i;
        for(i=0;i<(top+1)/2;i++){
            temp=stack[i];
            stack[i]=stack[top-i];
            stack[top-i]=temp;
        }
    }
}
void main(){
    int n,i;
    printf("enter a value of n:\n");
    scanf("%d",&n);
    char str[n];
    printf("enter a string :\n");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
        char ch = str[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o' ||ch=='u'){            
            reversed();  
            push(ch);
        }else{
            push(ch);
        }
    }
    printf("output is :\n");
    printf("%s",stack);
}