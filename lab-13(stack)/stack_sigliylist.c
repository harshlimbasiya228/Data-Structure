#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *link;
};
struct node *first=NULL,*last=NULL;
struct node* push_stack();
void pop_stack();
void main(){
    
    push_stack();
    struct node*temp=first;
    while (temp!=NULL)
    {
        printf("|%d| -",temp->info);
        temp=temp->link;
    }
    printf("\n");
    pop_stack();
    temp=first;
    while (temp!=NULL)
    {
        printf("|%d|-",temp->info);
        temp=temp->link;
    }
}
struct node* push_stack(){
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    printf("enter a info ");
    scanf("%d",&new->info);
    new->link=NULL;
    if(first==NULL){
        first=new;
        last=new;
    }else{
        last->link=new;
        last=new;
    }
    return first;
}
void pop_stack(){
    struct node*save,*pred;
    save=first;
    while (save->link!=NULL)
    {
       pred=save;
       save=save->link;
    }
    pred->link=NULL;
    free(save);

}