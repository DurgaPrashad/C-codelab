/* Write a program to swap two numbers

Aim: To write a C program to swap two numbers

Algorithm:-
Step 1 : Start
Step 2 : READ X and Y
Step 3 :Z = X
Step 4 :X = Y
Step 5 :Y = Z
Step 6 : PRINT X , Y
Step 7 : Stop
Program:--------------------------------------*/

#include<stdio.h>
#include<conio.h>
void main() 
{
int x, y, z;
clrscr();
printf("\nEnter the values of x and y \n");
scanf("%d%d", &x,&y);
printf("Values before swapping - \n x = %d, y = %d \n\n", x, y);
z = x;
x = y;
y = z;
printf("Values after swapping - \n x = %d, y = %d \n", x, y);
getch();
}

