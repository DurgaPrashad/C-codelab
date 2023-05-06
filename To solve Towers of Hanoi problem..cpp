/*ii) To solve Towers of Hanoi problem.
Aim: To write a C program to solve the Tower of Hanoi problem
Flowchart:
Algorithm:
START
Procedure Hanoi(disk, source, dest, aux)
 IF disk == 1, THEN
 move disk from source to dest 
 ELSE
 Hanoi(disk - 1, source, aux, dest) // Step 1
 move disk from source to dest // Step 2
 Hanoi(disk - 1, aux, dest, source) // Step 3
 END IF
 
END Procedure
STOP
Program: */
#include<stdio.h>
#include<conio.h>
void towers(int, char, char, char);
int main()
{
int n;
char source,dest, aux;
 
printf("Enter the number of disks : ");
scanf("%d", &n);
printf("\nSOURCE = %c DESTINATION = %c AUXILIARY = %c\n", 'A', 'C', 'B');
towers(n,'A','C','B');
 getch();
}
void towers(int n, char source, char dest, char aux)
{
if(n == 1)
printf("\nMove from %c to %c", source,dest);
else
{
towers(n-1,source, aux, dest);
printf("\nMove from %c to %c", source,dest);
towers(n-1,aux, dest, source);
}
printf("\n");
}
