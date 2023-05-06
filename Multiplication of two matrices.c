/*ii) Multiplication of two matrices
Aim: To write a C Program to multiply two matrices
Flowchart:
Algorithm:
Step 1: Start the Program.
Step 2: Enter the row and column of the first (a) matrix.
Step 3: Enter the row and column of the second (b) matrix.
Step 4: Enter the elements of the first (a) matrix.
Step 5: Enter the elements of the second (b) matrix.
Step 6: Print the elements of the first (a) matrix in matrix form.
Step 7: Print the elements of the second (b) matrix in matrix form.
Step 8: Set a loop up to row.
Step 9: Set an inner loop up to the column.
Step 10: Set another inner loop up to the column.
Step 11: Multiply the first (a) and second (b) matrix and store the element in the third matrix 
(c)
Step 12: Print the final matrix.
Step 13: Stop the Program.
Program:*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main(){
int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;
clrscr();
printf("enter the number of row=");
scanf("%d",&r);
printf("enter the number of column=");
scanf("%d",&c);
printf("enter the first matrix element=\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
 {
 scanf("%d",&a[i][j]);
 }
}
printf("enter the second matrix element=\n");
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
 scanf("%d",&b[i][j]);
 }
}
printf("multiply of the matrix=\n");
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
 mul[i][j]=0;
 for(k=0;k<c;k++)
 {
 mul[i][j]+=a[i][k]*b[k][j];
 }
 }
}
//for printing result
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
 printf("%d\t",mul[i][j]);
 }
 printf("\n");
}
getch();
}

