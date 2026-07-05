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
    int i;
    for(i=1;i<=4;i++){
        new = (struct node *)malloc(sizeof(struct node));
        printf("enter a node info %d\n");
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
    //delete a node at first position
    int x;
    printf("enter a value of X\n");
    scanf("%d",&x);

    if(first==NULL){
        printf("linked list is empty");
    }
    struct node * pred = NULL;
    save=first;
    // if(save->info==x){
    //     first = save->link;
    //     free(save);
    // }

    while(save!=NULL && save->info!=x){
        pred = save;
        save = save->link;
    }
    if(save==NULL){
        printf("node not found");
    }
    if(pred==NULL){
        first = save->link;
    }else{
         pred->link = save->link;
    }
    free(save);
    printf("node deleted sucessfully...\n");
     save = first;
    while(save != NULL )
    {
        printf("%d->",save->info);
        save = save->link;
    }
    printf("NULL");
}
