/*b) Write a C program that uses functions to perform the following:
i) Addition of Two Matrices ii) Multiplication of Two Matrices
i) Addition of Two Matrices

Aim: To write a C program to add matrices
Flowchart:
Algorithm:
Step 1: Start
Step 2: Declare matrix A[r][c];
and matrix B[r][c];
and matrix C[r][c]; r= no. of rows, c= no. of columns
Step 3: Read r, c, A[][] and B[][]
Step 4: Declare variable i=0, j=0 
Step 5: Repeat until i < r
 5.1: Repeat until j < c
 C[i][j]=A[i][j] + B[i][j]
 
Set j=j+1
5.2: Set i=i+1
Step 6: C is the required matrix after addition
 
Step 7: Stop
Program:-*/
#include <stdio.h>
#include<conio.h>
int main() {
 int r, c, a[100][100], b[100][100], sum[100][100], i, j;
 
 printf("Enter the number of rows (between 1 and 100): ");
 scanf("%d", &r);
 printf("Enter the number of columns (between 1 and 100): ");
 scanf("%d", &c);
 printf("\nEnter elements of 1st matrix:\n");
 for (i = 0; i < r; ++i)
 for (j = 0; j < c; ++j) {
 printf("Enter element a[%d][%d]: ", i , j );
 scanf("%d", &a[i][j]);
 }
 printf("Enter elements of 2nd matrix:\n");
 for (i = 0; i < r; ++i)
 for (j = 0; j < c; ++j) {
 printf("Enter element b[%d][%d]: ", i , j );
 scanf("%d", &b[i][j]);
 }
 // adding two matrices
 for (i = 0; i < r; ++i)
 for (j = 0; j < c; ++j) {
 sum[i][j] = a[i][j] + b[i][j];
 }
 // printing the result
 printf("\nSum of two matrices: \n");
 for (i = 0; i < r; ++i)
 {
 printf("\n");
 for (j = 0; j < c; ++j) {
 printf("%d ", sum[i][j]);
 }
 }
 getch();
}

