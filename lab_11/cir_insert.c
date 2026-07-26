#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node*link;
};

void cir_insert(int);
void cir_insertlast(int);

struct node*first=NULL,*last=NULL;
void cir_insert(int x){
    struct node *new;
    new =(struct node*)malloc(sizeof(struct node));
    new->info=x;
    if(first==NULL){
       first=new;
       last=new;
       new->link=first;
    }else{
        new->link=first;
        last->link=new;
       first=new;
    }
}
void cir_insertlast(int x){
    struct node *new;
    new =(struct node*)malloc(sizeof(struct node));
    new->info=x;
    if(first==NULL){
       first=new;
       last=new;
       new->link=first;
    }else{
        new->link=first;
        last->link=new;
       last=new;
    }
}

void main(){
    int i,x;
    for(i=1;i<=4;i++){
        printf("enter a node %d: ",i);
        scanf("%d",&x);
        cir_insert(x);
    }
    //insert first
    // printf("enter a info of first new node:\n");
    // scanf("%d",&x);
    // cir_insert(x);
    //insert last
     printf("enter a info of last new node:\n");
    scanf("%d",&x);
    cir_insertlast(x);
    struct node* temp =first;
    do{
        printf("%d->",temp->info);
        temp = temp->link;
    }while(temp!=first);
}
