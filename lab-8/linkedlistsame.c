#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
};
void main(){
    struct node*new;
    struct node*first1=NULL,*last1,*save1;
    struct node*first2=NULL,*last2,*save2;

    int i;
    int first_count=0;
    for(i=1;i<=3;i++){
        new = (struct node*)malloc(sizeof(struct node));
        printf("enter a info %d \n",i);
        scanf("%d",&new->info);
        first_count++;
        new->link = NULL;
        if(first1==NULL){
            first1=new;
            last1=new;
        }else{
            last1->link=new;
            last1=new;
        }
    }  
    printf("secound linked list\n");
    int seco_cound=0;
    for(i=1;i<=3;i++){
        new = (struct node*)malloc(sizeof(struct node));
        printf("enter a info %d \n",i);
        scanf("%d",&new->info);
        seco_cound++;
        new->link = NULL;
        if(first2==NULL){
            first2=new;
            last2=new;
        }else{
            last2->link=new;
            last2=new;
        }
    }
     save1=first1;
     save2=first2;
    
      if(first_count==seco_cound){
     while(save1!=NULL && save2!=NULL){
     
         if(save1->info == save2->info){
           
            save1=save1->link;
            save2=save2->link;
           
       }
        else{
            printf("linked list not same");
            break;
        }
     }
    }else{
        printf("node not same");
    }
     if(save1==NULL && save2==NULL){
        printf("same linked list");
     }
   
}