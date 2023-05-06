/*i)Write a Program to find the Largest among three numbers.

Aim: To write a C program to find the largest of three numbers.

Algorithm:
Step 1 : Start
Start 2 : Input a, b, c
Start 3 : if a > b goto step 4, otherwise goto step 5
Start 4 : if a > c goto step 6, otherwise goto step 8
Start 5 : if b > c goto step 7, otherwise goto step 8
Start 6 : Output "a is the largest", goto step 9
Start 7 : Output "b is the largest", goto step 9
Start 8 : Output " c is the largest", goto step 9
Start 9 : Stop
Program:*/
#include <stdio.h>
#include<conio.h>
int main() 
{
int a, b, c;

printf("Enter three different numbers: ");
scanf("%d %d %d", &a, &b, &c); 
if (a >= b && a >= c)
printf("%d is the largest number.", a); 
else if (b >= a && b >= c)
printf("%d is the largest number.", b);
else
printf("%d is the largest number.", c);;
getch();
}

