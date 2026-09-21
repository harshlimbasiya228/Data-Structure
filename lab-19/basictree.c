// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int info;
//     struct node *left;
//     struct node *right;
// };
// void preorder(struct node *root);
// void inorder(struct node *root);
// void postorder(struct node *root);
// struct node *create(int item){
//     struct node *new;
//     new=(struct node*)malloc(sizeof(struct node));
//     new->info=item;
//     new->left=NULL;
//     new->right=NULL;
//     return new;
// }
// void main(){
//     struct node *root12,*root8,*root25,*root13,*root5,*root6,*root9;

//     root12=create(12);
//      root8=create(8);
//       root25=create(25);
//        root13=create(13);
//         root5=create(5);
//          root6=create(6);
//           root9=create(9);

//           root12->left=root8;
//           root8->left=root25;
//           root8->right=root13;
//           root12->right=root5;
//           root5->left=root6;
//           root5->right=root9;

//             printf("orignal Tree---\n");
//           printf("%d ",root12->info);
//            printf("%d ",root8->info);
//             printf("%d ",root25->info);
//              printf("%d ",root13->info);
//               printf("%d ",root5->info);
//                printf("%d ",root6->info);
//                 printf("%d ",root9->info);
//                 printf("\n");


//                 printf("Preorder Traversal----\n");
//                 preorder(root12);
//                 printf("\n");
//                  printf("Inorder Traversal----\n");
//                 inorder(root12);
//                 printf("\n");
//                  printf("Postorder Traversal----\n");
//                 postorder(root12);
// }
// void preorder(struct node *root){
//     if(root!=NULL){
//         printf("%d ",root->info);
//         preorder(root->left);
//         preorder(root->right);
//     }
// }
// void inorder(struct node *root){
//     if(root!=NULL){      
//         inorder(root->left);
//         printf("%d ",root->info);
//         inorder(root->right);
//     }
// }
// void postorder(struct node *root){
//     if(root!=NULL){
//         postorder(root->left);
//         postorder(root->right);
//         printf("%d ",root->info);
//     }
// }
