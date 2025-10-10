#include<stdio.h>
#include<conio.h>
struct node
{
  int key;
  struct node *left,*right;
};
struct node *newnode(int item)
{
  struct node *temp=(struct node*)malloc(sizeof(struct node));
  temp->key=item;
  temp->left=temp->right=NULL;
  return temp;
}
struct node *insert(struct node *node,int key)
{
  if(node==NULL)
    return newnode(key);
  if(key<node->key)
    node->left=insert(node->left,key);
  else if(key>node->key)
    node->right=insert(node->right,key);
    return node;
}
void preorder(struct node *root)
{
  if(root!=NULL)
  {
    printf("%d\n",root->key);
    preorder(root->left);
    preorder(root->right);
  }
}
void inorder(struct node *root)
{
  if(root!=NULL)
  {
    inorder(root->left);
    printf("%d\n",root->key);
    inorder(root->right);
  }
}
void postorder(struct node *root)
{
  if(root!=NULL)
  {
    postorder(root->left);
    postorder(root->right);printf("%d\n",root->key);
  }
}
void main()
{
  struct node *root=NULL;
  clrscr();
  root=insert(root,15);
  insert(root,20);
  insert(root,10);
  insert(root,12);
  insert(root,8);
  insert(root,25);
  insert(root,17);
  printf("preorder traversal of binary search tree\n");
  preorder(root);
  printf("inorder traversal of binary search tree\n");
  inorder(root);
  printf("postorder traversal of binary search tree\n");
  postorder(root);
  getch();
}
