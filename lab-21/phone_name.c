#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    char name[50];
    char number[50];
    struct node *left;
    struct node *right;
};
struct node* createnode(char name[],char num[]){
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL){
        printf("memory allocation is failed");
    }
   strcpy(temp->name,name);
   strcpy(temp->number,num);
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
struct node* insert(struct node *root,char name[],char num[]){
     if(root==NULL){
       return createnode(name,num);
        
    }
    if(strcmp(root->name,name)== 0 ||strcmp(root->number,num)== 0){ //dublicate case
        printf("dublicate is not allowed in tree\n");
        return root;
    }
    if(strcmp(root->name,name)>0){
        root->right=insert(root->right,name,num);
    }else{
        root->left=insert(root->left,name,num);
    }
    return root;
}
struct node* serch(struct node* root,char name[],char num[]){
     if(root==NULL || strcmp(root->name,name)==0){
        return root;
    }
    if(strcmp(root->name,name) > 0){
        return serch(root->left,name,num);
    }
    return serch(root->right,name,num);
}
void inorder(struct node *root){
    if(root!=NULL){      
        inorder(root->left);
        printf("%s - %s\n", root->name, root->number);
        inorder(root->right);
    }
}

