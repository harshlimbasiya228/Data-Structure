#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node * link;
};
void main(){
    struct node * new;
    struct node * first=NULL,*save,*last;
    int i;
    //create a first four node
    for(i=1;i<=4;i++)
    {
        new = (struct node *)malloc(sizeof(struct node));
        printf("enter a node info %d\n");
        scanf("%d",&new->info);

        new->link = NULL;

        if(first == NULL){
            first = new;
            last = new;
        }else{
            last->link = new;
            last = new;
        }
    }
    //insert new node in front position

    new =(struct node*)malloc(sizeof(struct node));
    
    printf("enter a insert value of info : \n");
    scanf("%d",&new->info);
    new->link = first;
    first=new;

    //display all node

    save = first;
    while(save != NULL )
    {
        printf("%d->",save->info);
        save = save->link;
    }
    printf("NULL");
}