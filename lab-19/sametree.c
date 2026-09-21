#include<stdio.h>
#include<stdlib.h>
struct tree{
    int info;
    struct tree *left;
    struct tree *right;
};
struct tree* insertfirst(struct tree *node,int info);
struct tree* insertsecound(struct tree *node,int info);
int sametree(struct tree *root1,struct tree *root2);
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

struct tree* insertfirst(struct tree *node,int info){
    if(node==NULL){
       return createnode(info);
        
    }
    if(node->info==info){ //dublicate case
        printf("dublicate is not allowed in tree\n");
        return node;
    }
    if(node->info < info){
        node->right=insertfirst(node->right,info);
    }else{
        node->left=insertfirst(node->left,info);
    }
    return node;
}

struct tree* insertsecound(struct tree *node,int info){
    if(node==NULL){
       return createnode(info);
        
    }
    if(node->info==info){ //dublicate case
        printf("dublicate is not allowed in tree\n");
        return node;
    }
    if(node->info < info){
        node->right=insertsecound(node->right,info);
    }else{
        node->left=insertsecound(node->left,info);
    }
    return node;
}

int sametree(struct tree *root1,struct tree *root2){
    if(root1==NULL && root2==NULL){
        return 1; //tree empty
    }
    if(root1==NULL || root2==NULL){
        return 0; //tree not same
    }
    if(root1->info != root2->info){
        return 0;
    }
    //recursive check left-to-left subtree comper rigth-to-rigth suntree compare
    return sametree(root1->left,root2->left) && sametree(root1->right,root2->right);
}

void main(){
    struct tree *root1=NULL,*root2=NULL;
    struct tree *temp;
    int value,item;
    printf("enter a first tree...\n");
   while(1)
{
    printf("Enter value (-1 to stop): ");
    scanf("%d",&value);

    if(value==-1)
        break;

    root1=insertfirst(root1,value);
}

 printf("enter a secound tree...\n");
   while(1)
{
    printf("Enter value (-1 to stop): ");
    scanf("%d",&value);

    if(value==-1)
        break;

    root2=insertsecound(root2,value);
}
int solution = sametree(root1,root2);
if(solution==1){
    printf("tree are same\n");
}else{
    printf("tree are not same\n");
}
}