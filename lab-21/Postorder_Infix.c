#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *left;
    struct node *right;
};
int priIndex=0;
struct node *create(int info){
    struct node *new;
    new=(struct node *)malloc(sizeof(struct node));
    new->info=info;
    new->left=NULL;
    new->right=NULL;
    return new;
}
int serch(int Infix[],int i,int j,int value){
    int k;
    for(k=i;k<=j;k++){
        if(Infix[k]==value){
            return k;
        }
    }
    return -1;
}
struct node* insert(int Infix[],int Prifix[],int i,int j){
    struct node *root;
    if(i>j){
        return NULL;
    }
    if(j==0){
        root->left=NULL;
        root->right=NULL;
    }
    int info = Prifix[priIndex];
    priIndex++;

    root=create(info);
    if(i==j){
        return root;
    }
    int position = serch(Infix,i,j,info);
    root->left=insert(Infix,Prifix,i,position-1);
    root->right=insert(Infix,Prifix,position+1,j);
    return root;
}
void inorder(struct node *root){
    if(root!=NULL){      
        inorder(root->left);
        printf("%d ",root->info);
        inorder(root->right);
    }
}
void main(){
    int size=10;
    int Infix [] = {2,4,10,12,20,21,25,27,30,31};
    int Prifix [] = {12,10,4,2,25,21,20,30,27,31}; 
    struct node *root=insert(Infix,Prifix,0,size-1);
    printf("Insert Sucessfully....\n");
    inorder(root);
    printf("\n");
    printf("Inorder Sucessfull.... \n");
}
