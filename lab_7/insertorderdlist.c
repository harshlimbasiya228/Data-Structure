#include<stdio.h>
#include<stdlib.h>
void Inserst_order(int);
struct node{
    int info;
    struct node *link;
};
void main(){
    int x;
    printf("enter a value of x: ");
    scanf("%d",&x);
    Inserst_order(x);
}
void Inserst_order(int x){
    struct node *new;
    struct node *first=NULL,*last,*save;
    int i;
    for(i=1;i<=5;i++){
        new = (struct node*)malloc(sizeof(struct node));
        printf("enter a value of info(new) %d :\n",i);
        scanf("%d",&new->info);
        new->link=NULL;
        if(first==NULL){
            first = new;
            last = new;
        }else{
            last->link=new;
            last = new;
        }
    }
    new = (struct node*)malloc(sizeof(struct node));
    new->info=x;
    if(first==NULL){
        first=new;
    }
    if(new->info <= first->info){
        new->link=first;
        first=new;
    }
    save = first;
    while (save->link!=NULL && new->info >= save->link->info)
    {
        save = save->link;
    }
    new->link=save->link;
    save->link = new;
    printf(" insert a node sucessfully...\n");
    save = first;
    while (save!=NULL)
    {
        printf("%d->",save->info);
        save = save->link;
    }
    printf("NULL");
}