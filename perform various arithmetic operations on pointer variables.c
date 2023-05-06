/*a) Write a C Program to perform various arithmetic operations on pointer variables.
Aim: To write a C program to perform arithmetic operations on pointer variables
Program:*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int num1=2,num2=3,*ptr1,*ptr2,sum=0,mul=1,div=1;
 clrscr();
 ptr1=&num1;
 ptr2=&num2;
 sum=*ptr1+*ptr2;
 mul=sum*(*ptr2);
 *ptr1+=1;
 div=30+(*ptr1)/(*ptr2);
 printf("Sum=%d\n",sum);
 printf("Multiply=%d\n",mul);
 printf("Division=%d",div);
 getch();
}

