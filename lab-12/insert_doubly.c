#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node* lptr;
    struct node* rptr;
};
struct node *left=NULL,*right=NULL;
void insert_dou();
void main(){
    int i;
    for(i=1;i<=4;i++){
        insert_dou();
        
    }
    //insert last
    // struct node *temp=left; 
    // while (temp!=NULL)
    // {
    //     printf("%d-><-",temp->info);
    //     temp=temp->rptr;
    // }
    //insert first and dispaly node
    struct node *temp=right;
    while (temp!=NULL)
    {
        printf("%d-><-",temp->info);
        temp=temp->lptr;
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
