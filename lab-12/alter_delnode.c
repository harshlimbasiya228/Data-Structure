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
    int i;
    for(i=1;i<=6;i++){
        insert_dou();  
    }
    struct node *temp=left; 
    while (temp!=NULL)
    {
        printf("%d-><-",temp->info);
        temp=temp->rptr;
    }
    
    struct node *dump;
    struct node *save=left;
    while(save!=NULL){
        dump=save->rptr;
        save->rptr=save->rptr->rptr;
        if(save->rptr!=NULL){ //point it mistack not check it save->rpte NULL
             save->rptr->lptr=save;
        }
        free(dump);
        save=save->rptr;
    }
    printf("\n");
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