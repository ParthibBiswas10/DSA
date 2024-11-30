#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
/*struct node* create();
void preorder(struct node* root);
void inorder(struct node* root);
void postorder(struct node* root);*/
struct node* create(){
    int x;
    struct node* new;
    
    scanf("%d",&x);
    if(x==-1) return 0;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=x;
    printf("Enter left child of %d: ",x);
    new->left=create();
    printf("Enter right child of %d: ",x);
    new->right=create();
    return new;
}
void preorder(struct node* root){
    if (root==0) return;
    printf("%d ",root->data);
    
    preorder(root->left);
    preorder(root->right);
}
void inorder(struct node* root){
    if (root==0) return;
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);

}
void postorder(struct node* root){
    if (root==0) return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);

}
void main(){
  struct node *root;
  printf("Enter data: ");
  root=create(); 
   printf("\nInorder: ");
    inorder(root);
    printf("\nPreorder: ");
    preorder(root);
     printf("\nPostorder: ");
    postorder(root);

}
