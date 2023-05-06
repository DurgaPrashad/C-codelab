/*a. Find the total number of words.
Aim: To write a C Program to find the total number of words in a given paragraph.
Program:*/
#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
intwc,i=0;
charstr[100];
clrscr();
printf("Enter the string :");
gets(str);
while(str[i]!='\0')
 {
if(str[i]==' ' &&str[i+1]!=' ')
wc++;
i++;
 }
wc++;
printf("World count=%d",wc);
getch();
}
Output
