/*a) Write a C program to find both the largest and smallest number in a list of integers.
Aim: To write a C program to find the largest and smallest number in a list of 
integers.
Algorithm:
1. Input the array elements.
2. Initialize small = large = arr[0]
3. Repeat from i = 2 to n
4. if(arr[i] > large) 
5. large = arr[i]
6. if(arr[i] < small)
7. small = arr[i]
8. Print small and large.
Program:*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int a[50],i,n,large,small;
printf(�\nEnter the number of elements�);
scanf(�%d�,&n);
printf(�\nInput the array elements : �);
for(i=0;i<n;++i)
scanf(�%d�,&a[i]);
large=small=a[0];
for(i=1;i<n;++i)
{
if(a[i]>large)
large=a[i];
if(a[i]<small)
small=a[i];
}
printf(�\nThe smallest element is %d\n�,small);
printf(�\nThe largest element is %d\n�,large);
getch();
}

