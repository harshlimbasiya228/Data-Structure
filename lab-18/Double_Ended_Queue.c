#include<stdio.h>
#define N 10
int queue[N];
int f=-1,r=-1;
void insertFront(int);
void insertRear(int);
void deleteFront();
void deleteRear();
void display();

void insertFront(int x){ //insertion from front
    if((f==0 && f==N-1) || (f==r+1)){
        printf("queue overflow");
        return;
    }
    if(f==-1){
        f=0;
        r=0;
    }else if(f==0){
        f=N-1;
    }else{
        f=f-1;
    }
    queue[f]=x;
}

void insertRear(int y){ //insertion from rear
    if((f==0 && r==N-1) || (f==r+1)){
        printf("queue overflow");
        return;
    }
    if(f==-1){
        f=0;
        r=0;
    }else if(r==N-1){
        r=0;
    }else{
        r=r+1;
    }
    queue[r]=y;
}

void deleteFront(){ //deletion from front
    if(f==-1){
        printf("queue is empty");
        return;
    }
    if(f == r){
        f=-1;
        r=-1;
    }else if(f==N-1){
        f=0;
    }else{
        f=f+1;
    }
}

void deleteRear(){ //deletion from rear
    if(f==-1){
        printf("queue is empty");
        return;
    }
    if(f==r){
        f=-1;
        r=-1;
    }else if(r==0){
       r=N-1;
    }else{
        r=r-1;
    }
}

void display(){
    int i=f;
    if(f==-1){
        printf("queue is empty");
        return;
    }
    while (1)
    {
        printf("%d ",queue[i]);
        if(i==r){
            break;
        }
        i=(i+1)%N;
    }
}

void main(){
    insertFront(1);
    insertRear(2);
    insertFront(3);
    insertRear(4);

    deleteFront();
    deleteRear();
    display();
}