#include<stdio.h>
#include<stdlib.h>

struct node {
 int info;
 struct node *link;
};
void main(){
    struct node *new;
    struct node *first=NULL,*last,*ptr;
    struct node*current,*next,*save;
    int i,temp;
    for(i=1;i<=5;i++){
        new=(struct node*)malloc(sizeof(struct node));
        printf("enter node %d\n",i);
        scanf("%d",&new->info);
        new->link=NULL;
        if(first==NULL){
             first=new;
             last=new;
        }else{
            last->link=new;
            last=new;
        }
    }
    ptr=first;
    while (ptr!=NULL)
    {
        printf("%d->",ptr->info);
        ptr = ptr->link;
    }
    printf("NULL");
    
    current=first;
    while (current!=NULL)
    {
        next=current->link;
        while(next!=NULL){
            if(current->info >= next->info){
                temp=current->info;
                current->info=next->info;
                next->info=temp;
            }
            next=next->link;
        }
        current=current->link;
    }
    printf("\n");
    save=first;
    while (save!=NULL)
    {
        printf("%d->",save->info);
        save = save->link;
    }
    printf("NULL");

}

    