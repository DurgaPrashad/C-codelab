/*Write C programs that implement Queue (its operations) using
i) Arrays
ii) Pointers
Write C programs that implement Queue (its operations) using Arrays
Aim: To write a C program to implement Queue using Arrays
Program:*/
#include<stdio.h>
#include<stdlib.h>
int q[4];
int n=4;
int f=0,r=-1;
void insert();
void delete();
void disp();
void main()
{
 int choice;
 while(1)
 {
 printf("\n\nPress 1 to insert\nPress 2 to delete\nPress 3 to display\nPress 4 to stop\n");
 printf("\nEnter the choice: ");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1: insert();
 break;
 case 2: delete();
 break;
 case 3: disp();
 break;
 case 4:exit(0);
 default: printf("Invalid choice\n");
 break;
 }
 }
}
 void insert()
 {
 int elem;
 if(r==n-1)
 printf("Insertion not possible\n");
 else if(f==-1 && r==-1)
 f=r=0;
 else
 {
 printf("\nEnter the element to be inserted: ");
 scanf("%d",&elem);
 q[++r]=elem;
 }
 }
 void delete()
 {
 if(f==-1 || f>r)
 printf("Deletion not possible");
 else
 {
 printf("Element deleted is %d",q[f]);
 ++f;
 }
 }
 void disp()
 {
 int i;
 if(f==-1 || f>r)
 {
 printf("Queue is empty");
 }
 else
 {
 for(i=f;i<=r;i++)
 {
 printf("%d ",q[i]);
 }
 }
}

