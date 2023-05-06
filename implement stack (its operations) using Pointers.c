/*Write C programs that implement stack (its operations) using Pointers
Aim: To write a C program to implement stack using Pointers.
Program:*/
#include<stdio.h>
#include<stdlib.h>
struct stack *push(struct stack *, int );
struct stack *push(struct stack *, int);
struct stack *display(struct stack *);
struct stack *pop(struct stack *);
int peek(struct stack *);
struct stack{
int data;
struct stack *next;
};
struct stack *top=NULL;
int main()
{
intval,choice;
do{
printf("\n*****Main Menu*****");
printf("\n1.Push");
printf("\n2.Pop");
printf("\n3.Peek");
printf("\n4.Display");
printf("\n5.Exit");
printf("\n\nEnter your choice: ");
scanf("%d",&choice);
switch(choice)
 {
case 1: printf("\nEnter the number to be pushed onto stack: ");
scanf("%d",&val);
top=push(top,val);
break;
case 2: top=pop(top);
break;
case 3: val=peek(top);
if(val!=-1)
printf("\nThe value at the top of the stack: %d",val);
else
printf("\nStack is empty");
break;
case 4:
top=display(top);
break;
 }
 //return 0;
}while(choice!=5);
}
struct stack *push(struct stack *top, intval)
{
struct stack *ptr;
ptr=(struct stack *)malloc(sizeof(struct stack));
ptr->data=val;
if(top==NULL)
{
ptr->next=NULL;
top=ptr;
}
else{
ptr->next=top;
top=ptr;
}
return top;
}
struct stack *pop(struct stack *top)
{
struct stack *ptr;
ptr=top;
if(top==NULL)
printf("\n STACK UNDERFLOW");
else{
top=top->next;
printf("\nThe value being deleted is:%d",ptr->data);
free(ptr);
 }
return top;
}
struct stack *display(struct stack *top)
{
struct stack *ptr;
ptr = top;
if(top == NULL)
printf("\n STACK IS EMPTY");
else
 {
while(ptr != NULL)
 {
printf("\n %d", ptr -> data);
ptr = ptr -> next;
 }
 }
return top;
}
int peek(struct stack *top)
{
if(top==NULL)
return -1;
else
return top ->data;
}

