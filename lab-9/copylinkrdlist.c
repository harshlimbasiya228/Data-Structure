#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node * link;
};
void main(){
    struct node * new;
    struct node * first=NULL,*last,*save;
    struct node * first1=NULL,*last1,*save1,*next;
    int i;
    for(i=1;i<=4;i++){
        new = (struct node *)malloc(sizeof(struct node));
        printf("enter a node info %d\n",i);
        scanf("%d",&new->info);
        new->link = NULL;
        if(first==NULL){
            first=new;
            last=new;
        }else{
            last->link=new;
            last=new;
        }
    }
    for(i=1;i<=4;i++){
        new = (struct node*)malloc(sizeof(struct node));
        new->info=0;
        new->link=NULL;
        if(first1==NULL){
            first1=new;
            last1=new;
        }else{
            last1->link=new;
            last1=new;
        }
    }
    save = first;
    printf("orignal linked list\n");
    while (save!=NULL)
    {
        printf("%d->",save->info);
        save = save->link;
    }
    printf("NULL ");
    save=first;
    save1 = first1;
    while (save!=NULL && save1!=NULL)
    {
      save1->info = save->info;
      save=save->link;
      save1=save1->link;
    }
    printf("copy linked list\n");
    save1 = first1;
    while (save1!=NULL)
    {
        printf("%d->",save1->info);
        save1 = save1->link;
    }
    printf("NULL");
}