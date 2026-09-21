#include<stdio.h>
#include<stdlib.h>
struct Node {
    int info;
    struct Node *left,*right;
};
struct Node *create(int info){
    struct Node *new;
    new=(struct Node *)malloc(sizeof(struct Node));
    new->info=info;
    new->left=NULL;
    new->right=NULL;
    return new;
}
struct Node *insert(){
    int x;
    printf("enter a value of (-1 for NULL):\n");
    scanf("%d",&x);
    if(x==-1){
        return NULL;
    }
    struct Node *root=create(x);
    printf("Enter a left child of tree :%d \n",x);
    root->left=insert();

    printf("Enter a right child of tree :%d \n",x);
    root->right=insert();
    return root;
}
int isSymentric(struct Node *r1,struct Node *r2){
    if(r1==NULL && r2==NULL){
        return 1;
    }
    if(r1==NULL || r2==NULL){
        return 0;
    }
    if(r1->info != r2->info){
        return 0;
    }
    return isSymentric(r1->left,r2->right) && isSymentric(r1->right,r2->left);
}
void main(){
    struct Node *root;
    printf("create binary tree\n");
    root=insert();
    if(root==NULL){
        printf("Tree is symentric\n");
    }else if(isSymentric(root->left,root->right)){
        printf("Tree is symentric\n");
    }else{
        printf("tree is not symentric\n");
    }
}