#include<stdio.h>
#include<stdlib.h>
// Insert a node at the front of the linked list.
// Display all nodes.
// Delete a first node of the linked list.
// Insert a node at the end of the linked list.
// Delete a last node of the linked list.
// Delete a node from specified position.
// Count the no. of nodes in the linked list.

struct node
{
    int info;
    struct node * link;
};
void main(){
    //create a new node
    struct node * first=NULL;
    struct node * new,*save;
    int choice;
    printf("enter your choice");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
    new = (struct node*)malloc(sizeof(struct node));
    int x;
    printf("enter insert x:");
    scanf("%d",&x);
    //store a info and link;
    new->info=x;
    new->link=first;
    first=new;
    printf("first node info :%d",first->info);
        break;
        
        case 2:
        if(first==NULL){
            printf("Linked list is empty\n");
        }else{
            save = first;
            while (save!=NULL){
                printf("%d",save->info);
            save = save ->link;
            }
            printf("Null\n");     
        }
        break;
    default:
    printf("Invalid choice");
        break;
    }
    
    

}
