/*ii) Aim: To write a C program to demonstrate call by reference mechanism
Program:*/
#include<stdio.h>
void swapr(int*,int*);
void main()
{
 int a,b;
 printf("Enter the value of a: ");
 scanf("%d",&a);
 printf("\nEnter the value of b: ");
 scanf("%d",&b);
 printf("Before Swapping, FirstNumber=%d SecondNumber=%d",a,b);
 swapr(&a,&b);
 printf("\n\nAfter Swapping, FirstNumber=%d SecondNumber=%d",a,b);
}
void swapr(int *x,int *y)
{
 int t;
 t=*x;
 *x=*y;
 *y=t;
 }

