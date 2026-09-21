#include<stdio.h>
#define Max 10
int data[Max];
int priority[Max];
int n=0;
void insert(int,int);
void delete();
void display();
void insert(int x,int pr){
    if(n==Max){
        printf("queue overflow");
        return;
    }
    int i=n-1;
    while(i>=0 && (priority[i] < pr)){
        data[i+1]=data[i];
        priority[i+1]=priority[i];
        i--;
    }
    data[i+1]=x;
    priority[i+1]=pr;
    n++;
}
void delete(){
    if(n==0){
        printf("queue is empty");
        return;
    }
    printf("%d deleted element",data[0]);
    int i;
    for(i=0;i<n-1;i++){
        data[i]=data[i+1];
        priority[i]=priority[i+1];
    }
    n--;
    printf("\n");
}
void display(){
    int i;
    for(i=0;i<n;i++){
        printf("[%d | %d ]; ",data[i],priority[i]);
    }
}

void main(){
    insert(5,100);
    insert(1,300);
    insert(7,250);
    insert(56,700);
    delete();
    insert(12,1000);
    delete();
    display();
}