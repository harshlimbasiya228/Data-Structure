#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *link;
};
int gcd(int,int);
void main(){
struct node *new;
struct node *first=NULL,*save,*last,*temp;
int i;
for(i=1;i<=4;i++){
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
    save=first;
   while(save->link!=NULL){
    new=(struct node*)malloc(sizeof(struct node));
     int x = gcd(save->info, save->link->info);
     new->info=x;
    new->link=save->link;
    save->link=new;
    save=new->link; 
   }
  temp = first;
  while (temp!=NULL)
  {
    printf("%d->",temp->info);
    temp=temp->link;
  }
  printf("NULL");
    
}
int gcd(int n1,int n2){
    int i;
    int gcd;
    for(i=1;i<=n1 && i<=n2;i++){
        if(n1%i==0 && n2%i==0){
            gcd=i;
        }
    }
    return gcd;
}