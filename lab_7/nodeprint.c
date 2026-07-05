#include<stdio.h>
#include<stdlib.h>

struct node
{
   int info;
   struct  node *link;
};
void main(){
    struct node * new;
    int i;
    for(i=0;i<4;i++){
    new = (struct node *) malloc(sizeof(struct node));
    printf("enter a info data : ");
    scanf("%d",&new->info);
    new->link = NULL; // last node of linked list
     printf("info of node = %d\n",new->info);
    free(new);
    }
   
}
