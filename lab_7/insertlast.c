#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
};
void main(){
    struct node * new;
    struct node *first = NULL,*save,*last;
    int i;
    for(i=1;i<=5;i++){
        new = (struct  node*)malloc(sizeof(struct node));
        printf("enter a node of info %d\n");
        scanf("%d",&new->info);
        new->link=NULL;

        if(first==NULL)
        {
            first=new;
            last=new;
        }else
        {
            last->link=new;
            last=new;
        }
    }
    //delete a last node;
    new =(struct node*)malloc(sizeof(struct node));
    printf("enter a value of info :");
    scanf("%d",&new->info);
    new->link=NULL;

    save=first;
    while (save->link!=NULL)
    {
        save = save->link;
    }
    save->link=new;
    printf("node insert last sucessfully...\n");
     save = first;
    while(save != NULL )
    {
        printf("%d->",save->info);
        save = save->link;
    }
    printf("NULL");
    
}
