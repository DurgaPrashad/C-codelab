/*    i) Program to add two integer numbers

Aim:   To write a C program to add two numbers

Algorithm:

Algorithm to find the sum of two numbers:
Step 1: Start
Step 2: Declare variables num1, num2 and sum.
Step 3: Read values for num1, num2.
Step 4: Add num1 and num2 and assign the result to a variable sum.
Step 5: Display sum
Step 6: Stop
Program:
*/
#include <stdio.h>
#include<conio.h>
int main()
{
int num1, num2, sum;

printf("Enter first number: ");
scanf("%d", &num1);
printf("Enter second number: ");
scanf("%d", &num2);
 sum = num1 + num2;
printf("Sum of the entered numbers: %d", sum);
return 0;
}

