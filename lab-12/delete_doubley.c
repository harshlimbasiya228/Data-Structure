#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *lptr;
    int info;
    struct node *rptr;
};
struct node *left=NULL,*right=NULL;
void insert_dou();
void main(){
    int i,x;
    for(i=1;i<=4;i++){
        insert_dou();  
    }

    struct node *temp=left; 
    while (temp!=NULL)
    {
        printf("%d-><-",temp->info);
        temp=temp->rptr;
    }
    printf("\n");
    printf("enter a delete info :");
    scanf("%d",&x);
    if(left==right){
        left->lptr=NULL;
        right->rptr=NULL;
    }

    struct node *save=left;
    while (save!=NULL && save->info!=x)
    {
        save=save->rptr;
    }
    if(save->info!=x){
        printf("node not found");
    }
    struct node *dump=save;
    if(save==left){
        save=save->rptr;
        left=save;
        save->lptr=NULL;
        free(dump);
    }else if(save==right){
        save=save->lptr;
        right=save;
        save->rptr=NULL;
        free(dump);
    }else{
        save->lptr->rptr=save->rptr;
        save->rptr->lptr=save->lptr;
        free(save);
    }
    temp=left; 
    while (temp!=NULL)
    {
        printf("%d-><-",temp->info);
        temp=temp->rptr;
    }
}
void insert_dou(){
    struct node *new;
    new = (struct node*)malloc(sizeof(struct node));
    printf("enter a node info : ");
    scanf("%d",&new->info); 
    new->lptr=NULL;
    new->rptr=NULL;
    if(left==NULL){
        left=new;
        right=new;
    }    
    else{
        right->rptr=new;
        new->lptr=right;
        right=new;
    }
       
}