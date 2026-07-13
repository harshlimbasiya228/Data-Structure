#include<stdio.h>
#include<stdlib.h>
struct node {
 int info;
 struct node *link;
};
void swap_kth(struct node *first, int, int);
void main(){
    struct node *new;
    struct node *first=NULL,*last,*ptr;
    int i,temp;
    for(i=1;i<=7;i++){
        new=(struct node*)malloc(sizeof(struct node));
        printf("enter node %d\n",i);
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
    ptr=first;
    int count=0;
    while (ptr!=NULL)
    {
        count++;
        printf("%d->",ptr->info);
        ptr = ptr->link;
    }
    printf("NULL");
    printf("\n");
    int k;
    printf("enter a value of k: ");
    scanf("%d",&k);
    swap_kth(first,k,count);
}
void swap_kth(struct node*first,int k,int count){
    struct node*save1,*save2,*pred1,*pred2,*temp1;
    save1 = first;
    pred1=NULL;
    int i=1;
    if(k>count || k<0){
        printf("invalid k");
    }
    while (save1!=NULL && i<k)
    {
       pred1=save1;
       save1=save1->link;
       i++;
    }
    
    save2 = first;
    pred2=NULL;
     i=1;
    while (save2!=NULL && i<count-k+1)
    {
       pred2=save2;
       save2=save2->link;
       i++;
    }
    temp1=save2->link;
    pred1->link=save2;
    save2->link=save1->link;
    pred2->link=save1;
    save1->link=temp1;
   

   temp1=first;
    while (temp1!=NULL)
    {
        printf("%d->",temp1->info);
        temp1=temp1->link;
    }
    printf("NULL");
}