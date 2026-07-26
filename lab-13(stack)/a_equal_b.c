// Write a program to determine if an input character string is of the form a^ib^i
// where i >= 1 i.e., Number of ‘a’ should be equal to number of ‘b’.
#include<stdio.h>
#define N 6
int top = -1, top2 = -1;
char stack1[N];
char stack2[N];
void push(char);
char pop();
void push2(char);

void main(){
    char x,y;
    int i;
    printf("enter a only a and b\n");
for(i=0;i<N;i++){
    scanf(" %c", &x);
    push(x);
    }
    char temp;
    int count_a=0;
    for(i=0;i<N;i++){
        temp=pop();
        if(temp=='a'){
            count_a++;
        }else{
            push2(temp);
        }
    } 
    if(count_a>=1){
        if(count_a==(top2+1)){
            printf("a and b are equal");
        }else{
            printf("a and b are not equal");
    }
    }else{
        printf("enter i>=1");
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