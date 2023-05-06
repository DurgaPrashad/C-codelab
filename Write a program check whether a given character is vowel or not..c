/*ii) Write a program check whether a given character is vowel or not.

Aim:- To write a program in C to check whether the character entered by the user is 
vowel or not.

Algorithm:
Step 1: Start
Step 2: Declare character type variable ch
Step 3: Read ch from User
Step 4: // Checking both lower and upper case vowels.
 IF (ch == 'a' || ch == 'A' ||
ch == 'e' || ch == 'E' ||
ch == 'i' || ch == 'I' ||
ch == 'o' || ch == 'O' ||
ch == 'u' || ch == 'U' )
 Print "Vowel"
 ELSE
 Print "Consonant"
Step 5: Stop
Program :
*/
#include <stdio.h>
#include<conio.h>
Void main()
{
charch;
clrscr();
printf("\n Enter any character : ");
scanf("%c", &ch);
switch(ch)
{
case �A�:
case �a�:
printf("\n %c is VOWEL", ch);
break;
case �E�:
case �e�:
printf("\n %c is VOWEL", ch);
break;
case �I�:
 case �i�:
printf("\n %c is VOWEL", ch);
break;
case �O�:
case �o�:
printf("\n %c is VOWEL", ch);
break;
case �U�:
case �u�:
printf("\n %c is VOWEL", ch);
break;
default: printf("\n %c is not a vowel", ch);
 }
 getch();
 }

