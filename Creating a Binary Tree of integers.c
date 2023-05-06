/*Write a C program that uses functions to perform the following:
i) Creating a Binary Tree of integers
ii) Traversing the above binary tree in preorder, inorder and postorder.
Aim:- To write a C program to implement a Binary Tree and traverse the binary tree.
Program:*/
#include<stdio.h>
#include <stdlib.h>
#define MAX 20
struct node
{
int data;
struct node *lchild, *rchild;
};
typedef struct node *NODE;
NODE tree = NULL;
voidCreateBST (int a[MAX], int n)
{
NODE temp, p, q;
int i;
for(i=0;i<n;i++)
{
temp =(struct node *)malloc(sizeof(struct node*));
temp->data = a[i];
temp->lchild = temp->rchild = NULL;
if(tree == NULL)
tree = temp;
else
{
p = q = tree;
while(q != NULL)
{
p=q;
if(a[i] < p->data)
q = p->lchild;
else if(a[i] > p->data)
q = p->rchild;
else
{
free(temp);
break;
}
}
if( q == NULL)
{
if(a[i] < p->data)
p->lchild = temp;
else
p->rchild = temp;
}
}
}
printf("Binary Search Tree created\n\n");
}
void Inorder(NODE tree)
{
if(tree != NULL)
{
Inorder(tree->lchild);
printf("%d ",tree->data);
Inorder(tree->rchild);
}
}
void Preorder(NODE tree)
{
if(tree != NULL)
{
printf("%d ",tree->data);
Preorder(tree->lchild);
Preorder(tree->rchild);
}
}
void Postorder(NODE tree)
{
if(tree != NULL)
{
Postorder(tree->lchild);
Postorder(tree->rchild);
printf("%d ",tree->data);
}
}
int main()
{
int a[MAX], n, i, choice;
while(1)
{
printf("\n\n**********************MENU*****************");
printf("\n1. Create a BST of n integers\n2. Traverse the BST in Inorder\n3. Traverse the BST in Preorder\n4. Traverse the BST in Postorder\n5. Exit\n");
printf("Enter your choice : ");
scanf("%d",&choice);
switch(choice)
{
case 1 : printf("Enter the number of integers : ");
scanf("%d",&n);
printf("Enter the elements\n");
for(i=0; i<n; i++)
scanf("%d",&a[i]);

break;
case 2 : printf("Inorder Traversal :\n");
Inorder(tree);
break;
case 3 : printf("Preorder Traversal :\n");
Preorder(tree);
break;
case 4 : printf("Postoder Traversal :\n");
Postorder(tree);
break;
case 5 : exit(0);
break;
}
}
}

