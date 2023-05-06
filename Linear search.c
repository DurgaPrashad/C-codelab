/*i) Linear search
ALGORITHM :
LINEAR_SEARCH(A, N, VAL)
Step 1: [INITIALIZE] SET POS = -1
Step 2: [INITIALIZE] SET I = 1
Step 3: Repeat Step 4 while I<=N
Step 4: IF A[I] = VAL
 SET POS = I
 PRINT POS
 Go to Step 6
 [END OF IF]
 SET I = I + 1
[END OF LOOP]
Step 5: IF POS = �1
"PRINT VALUE IS NOT PRESENT IN THE ARRAY"
[END OF IF]
Step 6: EXIT
Write a program to search an element in an array using the linear search technique.*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define size 20 // Added so the size of the array can be altered more easily
int main() 
{
int arr[size], num, i, n, found = 0, pos = -1;
printf("\n Enter the number of elements in the array : ");
scanf("%d", &n);
printf("\n Enter the elements: ");
for(i=0;i<n;i++)
{
scanf("%d", &arr[i]);
}
printf("\n Enter the number that has to be searched : ");
scanf("%d", &num);
for(i=0;i<n;i++)
{
if(arr[i] == num)
{
found =1;
pos=i;
printf("\n %d is found in the array at position= %d", num,pos+1);
/* +1 added in line 23 so that it would display the number in
the first place in the array as in position 1 instead of 0 */
break;
}
}
if (found == 0)
printf("\n %d does not exist in the array", num);
return 0;
}
OUTPUT:
Enter the number of elements in the array : 4
Enter the elements: 1015 72 20
Enter the number that has to be searched :72
72 is found in the array at position= 3
Week 14 ii) Binary search
ALGORITHM :
BINARY_SEARCH(A, lower_bound, upper_bound, VAL)
Step 1: [INITIALIZE] SET BEG = lower_bound
END = upper_bound, POS = - 1
Step 2: Repeat Steps 3 and 4 while BEG <= END
Step 3: SET MID = (BEG + END)/2
Step 4: IF A[MID] = VAL
SET POS = MID
PRINT POS
Go to Step 6
ELSE IF A[MID] > VAL
SET END = MID - 1
ELSE
SET BEG = MID + 1
[END OF IF]
[END OF LOOP]
Step 5: IF POS = -1
PRINT �VALUE IS NOT PRESENT IN THE ARRAY�
[END OF IF]
Step 6: EXIT
Write a program to search an element in an array using binary search.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define size 10 // Added to make changing size of array easier
int smallest(int arr[], int k, int n); // Added to sort array
void selection_sort(int arr[], int n); // Added to sort array
int main() 
{
int arr[size], num, i, n, beg, end, mid, found=0;
printf("\n Enter the number of elements in the array: ");
scanf("%d", &n);
printf("\n Enter the elements: ");
for(i=0;i<n;i++)
{
scanf("%d", &arr[i]);
}
selection_sort(arr, n); // Added to sort the array
printf("\n The sorted array is: \n");
for(i=0;i<n;i++)
printf(" %d\t", arr[i]);
printf("\n\n Enter the number that has to be searched: ");
scanf("%d", &num);
beg = 0, end = n-1;
while(beg<=end)
{
mid = (beg + end)/2;
if (arr[mid] == num)
{
printf("\n %d is present in the array at position %d", num, mid+1);
found =1;
break;
}
else if (arr[mid]>num)
end = mid-1;
else
beg = mid+1;
}
if (beg > end && found == 0)
printf("\n %d does not exist in the array", num);
return 0;
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

