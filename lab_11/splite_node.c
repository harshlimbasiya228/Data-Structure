#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *link;
};
void main(){
    struct node*first=NULL,*last=NULL,*secound;
    struct node *new;
    struct node *save1,*pred1,*save2,*pred2;
    int i=1,count=0;
    for(i=1;i<=6;i++){
        new =(struct node*)malloc(sizeof(struct node));
        printf("enter a value of node ");
        scanf("%d",&new->info);
        count++;
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
        printf("count : %d",count);
        printf("\n");
        if(count<=1){
            printf("node not split\n");
        }
        save1=first;
        i=1;
        while (i<(count/2))
        {
            pred1=save1;
            save1=save1->link;
            i++;
        }
        secound=save1->link;
        save1->link=first;

        save2=secound;
        i=1;
        while (i<(count/2))
        {
            pred2=save2;
            save2=save2->link;
            i++;
        }
        last->link = secound;
        
 
        printf("===first part of linked list===\n");
        struct node* temp = first;
    if (temp == NULL) {
        printf("List is empty\n");
    }
    do {
        printf("%d->", temp->info);
        temp = temp->link;
    } while (temp != first);

    printf("\n");
     printf("===secound part of linked list===\n");
         temp = secound;
    if (temp == NULL) {
        printf("List is empty\n");
    }
    do {
        printf("%d->", temp->info);
        temp = temp->link;
    } while (temp != secound);
        
}

