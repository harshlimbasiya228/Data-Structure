#include<stdio.h>
#include<stdlib.h>
void reverse();
struct node
{
    int info;
    struct node * link;
};
void main(){
 reverse();
}
void reverse(){
    struct node *new;
    struct node *first=NULL,*last,*save,*pred;
    
    int i;
    for(i=1;i<=5;i++){
        new=(struct node*)malloc(sizeof(struct node));
        printf("node : %d\n",i);
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
    save=first;
    while (save!=NULL)
    {
         printf("%d->",save->info);
        save = save->link;
    }
    printf("NULL");
    printf("\n");
    save=NULL;
    pred=NULL;
    while (first!=NULL)
    {
       pred=first->link;
       first->link=save;
       save=first;
       first=pred;
    }
    first=save;
    struct node *ptr = first;
    printf("NULL->");
    while (ptr!=NULL)
    {
        printf("%d->",ptr->info);
        ptr = ptr->link;
    }
    
}