#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *link;
};
struct node*first=NULL,*last=NULL;
void ci_insert();
struct node* ci_delete(struct node *first,int);
void main(){
    int i,x;
    for(i=1;i<=5;i++){
        ci_insert();
    }
    printf("enter a value of node x: \n");
    scanf("%d",&x);
   first= ci_delete(first,x);

    struct node* temp = first;
    if (temp == NULL) {
        printf("List is empty\n");
        return;
    }
    do {
        printf("%d->", temp->info);
        temp = temp->link;
    } while (temp != first);
}
struct node* ci_delete(struct node *first,int x){
    struct node*save,*pred;
    if(first==NULL){
        return first;
    }
    save=first;
    pred=last;

     do{
        if(save->info == x){
            break;
        }
        pred=save;
        save=save->link;
        }while(save!=first);
   
        if(save==first && save->info!=x)
        {
            printf("node not found\n");
            return first;
        }
        if(first==last)
        {
            free(save);
            first=NULL;
            last=NULL;
            return first;
        }
        if(save==first)
        {
            first=first->link;
            last->link=first;
        }else{
            pred->link=save->link;
            if(save==last){
                last=pred;
                last->link=first;
            }
        }
        free(save);
        return first;
}

void ci_insert(){
     struct node *new;
    new =(struct node*)malloc(sizeof(struct node));
     printf("enter a value of node ");
        scanf("%d",&new->info);
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