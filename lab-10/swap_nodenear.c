#include<stdio.h>
#include<stdlib.h>

struct node {
 int info;
 struct node *link;
};
struct node* swap_node(struct node* first);
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
    printf("\n");
    printf("==== After Swap ===\n");
    first = swap_node(first);
    ptr=first;
    while (ptr!=NULL)
    {
        printf("%d->",ptr->info);
        ptr = ptr->link;
    }
    printf("NULL");
}
struct node* swap_node(struct node*first){
    if(first == NULL || first->link==NULL){
        return first;
    }
    struct node *secound = first->link;
    first->link = swap_node(secound->link); //recursion
    secound->link=first;
    return secound;
}