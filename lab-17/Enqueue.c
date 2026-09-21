#include<stdio.h>
#define Max 30
int queue[Max];
int F=-1,R=-1;
void Enqueue(int);
int Dequeue();
void display();
void main(){
    Enqueue(5);
     Enqueue(10);
      Enqueue(15);
      Dequeue();
      display();

}
void Enqueue(int x){
    if(R>(Max-1)){
        printf("Queue Overflow");
        return;
    }
    R=R+1;
    queue[R]=x;
    if(F==-1){
        F=0;
    }
}
int Dequeue(){
    int y;
    if(F==-1){
        printf("queue underflow");
    }
    y=queue[F];
    if(F==R){
        F=-1;
        R=-1;
    }else{
        F=F+1;
    }
    return y;
}
void display(){
    int i;
    for(i=F;i<=R;i++){
        printf("%d\t",queue[i]);
    }
}