#include<stdio.h>
#include<stdlib.h>
struct tree{
    int info;
    struct tree *left;
    struct tree *right;
};
struct tree* insert(struct tree *node,int info);
struct tree* createnode(int item){
    struct tree *temp;
    temp=(struct tree*)malloc(sizeof(struct tree));
    if(temp==NULL){
        printf("memory allocation is failed");
    }
    temp->info=item;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}

struct tree* insert(struct tree *node,int info){
    if(node==NULL){
       return createnode(info);
        
    }
    if(node->info==info){ //dublicate case
        printf("dublicate is not allowed in tree\n");
        return node;
    }
    if(node->info < info){
        node->right=insert(node->right,info);
    }else{
        node->left=insert(node->left,info);
    }
    return node;
}
 struct tree *smallest(struct tree *root){
    if(root==NULL){
        return root;
    }
    if( root->left==NULL){
       return root;
    }
    struct tree *small;
    small=smallest(root->left);
   return small;
}
struct tree *largest(struct tree *root){
    if(root==NULL){
        return root;
    }
    if( root->right==NULL){
       return root;
    }
    struct tree *large;
    large=largest(root->right);
   return large;
}
void main(){
    struct tree *root=NULL;
    struct tree *temp1,*temp2;
    int value,item;
   while(1)
{
    printf("Enter value (-1 to stop): ");
    scanf("%d",&value);

    if(value==-1)
        break;

    root=insert(root,value);
}
temp1=smallest(root);
if(temp1!=NULL){
    printf("Smallest element of BST : %d",temp1->info);
}else{
    printf("tree is empty");
}
printf("\n");
temp2=largest(root);
if(temp2!=NULL){
    printf("largest element of BST : %d",temp2->info);
}else{
    printf("tree is empty");
}
}
