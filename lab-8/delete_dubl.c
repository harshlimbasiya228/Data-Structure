#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
};
void main(){
    struct node *new;
    struct node *first=NULL,*save,*last,*pred,*next;
    int i=1;
    for(i=1;i<=8;i++){
        new =(struct node *)malloc(sizeof(struct node));
        printf("enter a node %d : ",i);
        scanf("%d",&new->info);
        new->link=NULL;
        if(first==NULL){
            first=new;
            last=new;
        }else{
            last->link = new;
            last=new;
        }
    }
    save = first;
    pred=save;
    if(save==NULL){
        printf("linked list empty\n");
    }
    while (save->link!=NULL)
    {
      if(save->info==pred->info){
        pred=save->link->link;
        free(save->link);
        save->link=pred;
      }else{
        save=save->link;
      }
    }
    next=first;
    while (next!=NULL)
    {
        printf("%d->",next->info);
        next=next->link;
    }
    printf("NULL");
}