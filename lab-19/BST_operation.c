#include<stdio.h>
#include<stdlib.h>
struct tree{
    int info;
    struct tree *left;
    struct tree *right;
};
struct tree* insert(struct tree *node,int info);
void preorder(struct tree *root);
void inorder(struct tree *root);
void postorder(struct tree *root);
struct tree *serch(struct tree *root,int item);
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
void preorder(struct tree *root){
    if(root!=NULL){
        printf("%d ",root->info);
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(struct tree *root){
    if(root!=NULL){      
        inorder(root->left);
        printf("%d ",root->info);
        inorder(root->right);
    }
}
void postorder(struct tree *root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->info);
    }
}
//serct a node in tree
struct tree *serch(struct tree *root,int item){
    if(root==NULL || root->info==item){
        return root;
    }
    if(root->info < item){
        return serch(root->right,item);
    }
    return serch(root->left,item);
}
void main(){
    struct tree *root=NULL;
    struct tree *temp;
    int value,item;
   while(1)
{
    printf("Enter value (-1 to stop): ");
    scanf("%d",&value);

    if(value==-1)
        break;

    root=insert(root,value);
}

            printf("Preorder Traversal----\n");
                preorder(root);
                printf("\n");
            printf("Inorder Traversal----\n");
                inorder(root);
                printf("\n");
            printf("Postorder Traversal----\n");
                postorder(root);

            printf("enter a serch node\n");
            scanf("%d",&item);
            temp=serch(root,item);
            if(temp!=NULL){
                printf("%d is found in tree\n",temp->info);
            }else{
                printf("%d id not found in tree\n");
            }

   
}