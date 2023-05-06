/*Write a C program that uses Stack operations to evaluating the postfix expression
Aim: To write a C program to evaluate the postfix expression
Program:*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
int stack[50];
int top = -1;
void push(int);
int pop();
void push(intnum)
{
stack[++top] = num;
}
int pop()
{
return stack[top--];
}
int main()
{
char suffix[50],ch;
int p1,p2,p3,i;
printf("Enter the valid suffix expression : ");
gets(suffix);
//scanf("%s",suffix);
for(i=0;suffix[i]!='\0';i++)
{
ch = suffix[i];
if(isdigit(ch))
push(ch-'0');//ascii value of ch -ascii value of 0
else
{
p2 = pop();
p1 = pop();
switch(ch)
{
case '+': push(p1+p2);
 //printf("%d",pop());
break;
case '-': push(p1-p2);
break;
case '*': push(p1*p2);
break;
case '/': if(p2 == 0)
 {
printf("Divide by Zero error\n");
exit(0);
 }
push(p1/p2);
break;
case '%': if(p2 == 0)
 {
printf("Divide by Zero error\n");
exit(0);
 }
push(p1%p2);
break;
case '^': push(pow(p1,p2));
break;
default :printf("Invalid Expression\n");
}
}
}
printf("The value of given suffix expression is : %d\n",pop());
}

