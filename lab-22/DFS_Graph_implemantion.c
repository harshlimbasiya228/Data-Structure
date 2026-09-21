#include<stdio.h>
#include<stdlib.h>

#define N 10
struct node{
    int info;
    struct node * link;
};
struct node *arr[N];
int visited[N];
int n;

void setgraph(){
    int i;
    for(i=0;i<N;i++){
        arr[i]=NULL;
        visited[i]=0;
    }
}

struct node *create(int ver){
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    new->info=ver;
    new->link=NULL;
    return new;
}

void insert(int sou,int des){
    struct node *new;
    new=create(des);
    new->link=arr[sou];
    arr[sou]=new;
}
void add_edg(int sou,int des){
    insert(sou,des);
    insert(des,sou);
}
void display(){
    int i;
    struct node *temp;
    for(i=0;i<n;i++){
        printf("%d - > ",i);
        temp=arr[i];
            while(temp!=NULL){
                printf("%d ",temp->info);
                temp=temp->link;
            }
            printf("\n");
    }
}

void DFS_IMP(int ver){
    struct node *temp;
    visited[ver]=1;
    printf("%d ",ver);
    temp=arr[ver];
    while(temp!=NULL){
        if(visited[temp->info]==0){
            DFS_IMP(temp->info);
        }
        temp=temp->link;
    }
}
void main(){
    setgraph();
    n=5;
    add_edg(0,1);
    add_edg(0,2);
    add_edg(1,3);
    add_edg(1,4);

    display();
    printf("\nDFS : ");
    DFS_IMP(0);
}