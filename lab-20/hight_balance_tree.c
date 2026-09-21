#include<stdio.h>
#include<stdlib.h>
struct Node {
    int info;
    struct Node *left,*right;
};
int max(int,int);
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
int height(struct Node *root){
    int left,right;
    if(root==NULL){
        return 0;
    }else{
         left=height(root->left);
         right=height(root->right);
    }
    return 1+max(left,right);
}
int height_balance(struct Node *root){
    if(root==NULL){
        return 1;
    }
    int left=height(root->left);
    int right=height(root->right);
    int diff=abs(left-right);
    if(diff <=1){
        int left_child=height_balance(root->left);
        int right_child=height_balance(root->right);
        if(left_child==1 && right_child==1){
            return 1;
        }else{
            return 0;
        }
    }else{
        return 0;
    }
}
int max(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}
void main(){
    struct Node *root;
    printf("create binary tree\n");
    root=insert();
    int temp=height_balance(root);
    if(temp==1){
        printf("true");
    }else{
        printf("false");
    }
}