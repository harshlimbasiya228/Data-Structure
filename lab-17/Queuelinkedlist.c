#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *link;
};
struct node *f=NULL;
struct node *r=NULL;
void enqueue(int);
void dqueue();
void display();
void main(){
    enqueue(25);
    enqueue(50);
    enqueue(122);
    dqueue();
    display();
    
}
void enqueue(int x){
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    new->info=x;
    new->link=NULL;
    if(f==NULL){
        f=r=new;
    }else{
        r->link=new;
        r=new;
    }
}
void dqueue(){
    struct node *save;
    if(f==NULL){
        printf("queue underflow\n");
        return;
    }
    save=f;
    printf("Delete element = %d\n",f->info);
    f=f->link;
    if(f==NULL){
        r=NULL;
    }
    free(save);
}
void display(){
    struct node *temp=f;
    if(f==NULL){
        printf("list empty");
    }
    while (temp!=NULL)
    {
        printf("%d ",temp->info);
        temp=temp->link;
    }
    printf("Null");
}