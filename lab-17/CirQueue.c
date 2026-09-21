#include<stdio.h>
#define Max 7
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
      Enqueue(100);
      Dequeue();
      display();

}
void Enqueue(int x){
    if((R+1)%Max == F){
        printf("queue overflow");
        return;
    }
    R=(R+1)%Max;
    queue[R]=x;
    if(F==-1){
        F=0;
        return;
    }
}
int Dequeue(){
   int y;
   if(F==-1){
    printf("queue overflow");
    return -1;
   }
   y=queue[F];
   if(F==R){
    F=-1;
    R=-1;
    return y;
   }
   F=(F+1)%Max;
   return y;
}
void display(){
    int i=F;
    if(F==-1){
        printf("queue empty");
        return;
    }
    while(1){
        printf("%d ",queue[i]);
        if(i==R){
         break;
        }
        i=(i+1)%Max;
    }
}