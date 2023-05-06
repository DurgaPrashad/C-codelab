/*i) Bubble sort
ALGORITH:
BUBBLE_SORT(A, N)
Step 1: Repeat Step 2 For I = 0 to N-1
Step 2: Repeat For J = 0 to N - I
Step 3: IF A[J] > A[J + 1]
SWAP A[J] and A[J+1]
 [END OF INNER LOOP]
[END OF OUTER LOOP]
Step 4: EXIT
Write a program to enter n numbers in an array. Redisplay the array with elements being 
sorted in ascending order.*/
#include <stdio.h>
#include <conio.h>
int main()
{
int i, n, temp, j, arr[10];
clrscr();
printf("\n Enter the number of elements in the array : ");
scanf("%d", &n);
printf("\n Enter the elements: ");
for(i=0;i<n;i++)
{
scanf("%d", &arr [i]);
}
for(i=0;i<n;i++)
{
 for(j=0;j<n�i�1;j++)
{
if(arr[j] > arr[j+1])
{
temp = arr[j];
arr[j] = arr[j+1];
arr[j+1] = temp;
}
}
}
printf("\n The array sorted in ascending order is :\n");
for(i=0;i<n;i++)
printf("%d\t", arr[i]);
getch();
return 0;
}
Output
Enter the number of elements in the array : 10
Enter the elements : 8 9 6 7 5 4 2 3 1 10
The array sorted in ascending order is :
1 2 3 4 5 6 7 8 9 10
Week 15 ii) Selection sort
ALGORITHM :
SMALLEST (ARR, K, N, POS)
Step 1: [INITIALIZE] SET SMALL = ARR[K]
Step 2: [INITIALIZE] SET POS = K
Step 3: Repeat for J = K+1 to N-1
 IF SMALL > ARR[J]
 SET SMALL = ARR[J]
SET POS = J
 [END OF IF]
[END OF LOOP]
Step 4: RETURN POS
SELECTION SORT(ARR, N)
Step 1: Repeat Steps 2 and 3 for K = 1 to N-1
Step 2: CALL SMALLEST(ARR, K, N, POS)
Step 3: SWAP A[K] with ARR[POS]
[END OF LOOP]
Step 4: EXIT
Write a program to sort an array using selection sort algorithm.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int smallest(int arr[], int k, int n);
void selection_sort(int arr[], int n);
void main() 
{
int arr[10], i, n;
printf("\n Enter the number of elements in the array: ");
scanf("%d", &n);
printf("\n Enter the elements of the array: ");
for(i=0;i<n;i++)
{
scanf("%d", &arr[i]);
}
selection_sort(arr, n);
printf("\n The sorted array is: \n");
for(i=0;i<n;i++)
printf(" %d\t", arr[i]);
}
int smallest(int arr[], int k, int n)
{
int pos = k, small=arr[k], i;
for(i=k+1;i<n;i++)
{
if(arr[i]< small)
{
 small = arr[i];
 pos = i;
}
}
return pos;
}
void selection_sort(int arr[],int n)
{
int k, pos, temp;
for(k=0;k<n;k++)
{
pos = smallest(arr, k, n);
temp = arr[k];
arr[k] = arr[pos];
arr[pos] = temp;
}
}
Week 15 iii) Insertion sort
ALGORITHM :
INSERTION-SORT (ARR, N)
Step 1: Repeat Steps 2 to 5 for K = 1 to N � 1
Step 2: SET TEMP = ARR[K]
Step 3: SET J = K - 1
Step 4: Repeat while TEMP <= ARR[J]
SET ARR[J + 1] = ARR[J]
SET J = J - 1
[END OF INNER LOOP]
Step 5: SET ARR[J + 1] = TEMP
[END OF LOOP]
Step 6: EXIT
Write a program to sort an array using insertion sort algorithm.
#include <stdio.h>
#include <conio.h>
#define size 5
void insertion_sort(int arr[], int n);
void main()
{
int arr[size], i, n;
printf("\n Enter the number of elements in the array: ");
scanf("%d", &n);
printf("\n Enter the elements of the array: ");
for(i=0;i<n;i++)
{
scanf("%d", &arr[i]);
}
insertion_sort(arr, n);
printf("\n The sorted array is: \n");
for(i=0;i<n;i++)
printf(" %d\t", arr[i]);
getch();
}
void insertion_sort(int arr[], int n)
{
int i, j, temp;
for(i=1;i<n;i++)
{
temp = arr[i];
j = i-1;
while((temp < arr[j]) && (j>=0))
{
 arr[j+1] = arr[j];
 j--;
}
arr[j+1] = temp;
}
}
