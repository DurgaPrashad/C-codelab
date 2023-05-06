/*b) Write a C Program to demonstrate the following parameter passing mechanisms:
i) call-by-value ii) call-by-reference
i) Aim: To write a C program to demonstrate call by value mechanism
Program:*/
#include<stdio.h>
#include<conio.h>
void swapv(int,int);
void main()
{
 int a,b;
 clrscr();
 printf("Enter the value of a: ");
 scanf("%d",&a);
 printf("\nEnter the value of b: ");
 scanf("%d",&b);
 printf("Before Swapping, FirstNumber=%d SecondNumber=%d",a,b);
 swapv(a,b);
 getch();
}
void swapv(int x,int y)
{
 int t;
 t=x;
 x=y;
 y=t;
 printf("\nAfter Swapping, First Number=%d SecondNumber=%d",x,y);
}

