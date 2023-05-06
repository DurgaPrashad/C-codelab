/*Write a C program that uses Stack operations to Convertinfix expression into postfix 
expression.
Aim:- To write a C program to convert infix expression into postfix expression.
Program:-*/
#include<stdio.h>
#include<stdlib.h>
int stack[20];
int top = -1;
void push(char);
char pop();
int incmprc(char);
int instprc(char);
void IntoPost(char[], char[]);
int main()
{
char infix[20], postfix[20];
printf("Enter the valid infix expression : ");
scanf("%s",infix);
push('#');
IntoPost(infix,postfix);
printf("The corresponding postfix expression is : \n%s\n",postfix);
}
void push(char ch)
{
stack[++top]=ch;
}
char pop()
{
return stack[top--];
}
int incmprc(char ch)
{
switch(ch)
{
case '+' :
case '-' : return 1;
case '*' :
case '/' :
case '%' : return 2;
case '^' : return 3;
}
}
int instprc(char ch)
{
switch(ch)
{
case '#' :
case '(' : return 0;
case '+' :
case '-' : return 1;
case '*' :
case '/' :
case '%' : return 2;
case '^' : return 3;
}
}
Void IntoPost(char infix[20], char postfix[20])
{
int i=0,j=0;
charch;
ch = infix[i++];
while(ch !='\0')
{
switch(ch)
{
case '(': push(ch);
break;
case ')': while(stack[top]!='(')
postfix[j++] = pop();
pop();
break;
case '^':
case '+':
case '-':
case '*':
case '/':
case '%': while(incmprc(ch) <= instprc(stack[top]))
postfix[j++] = pop();
push(ch);
break;
default : postfix[j++] = ch;
}
ch = infix[i++];
}
while(stack[top] != '#')
postfix[j++] = pop();
postfix[j]= '\0';
}

