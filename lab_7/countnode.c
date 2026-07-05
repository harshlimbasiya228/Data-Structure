#include<stdio.h>
#include<stdlib.h>
void count_node();
struct node
{
    int info;
    struct node* link;
};
void main(){
    count_node();
}
void count_node(){
    struct node *new;
    struct node *first=NULL,*save,*last;
    int i;
    int count=0;
    for(i=1;i<=6;i++){
        new = (struct node*)malloc(sizeof(struct node));
        printf("enter a node of linked list %d : ",i);
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
    if(first==NULL){
        printf("node_count = 0\n");
    }
    save=first;
    while(save!=NULL){
           count++;
        save=save->link;     
    }
    printf("NUmber of nodes in linked list...\n");
    printf("count_node : %d",count);
}