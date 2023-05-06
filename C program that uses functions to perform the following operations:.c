/*WEEK -4
Write a C program that uses functions to perform the following operations:
i) To insert a sub-string in to a given main string from a given position.
ii) Given a string -a$bcd./fg? find its reverse without changing the position of special
characters. (Example input:a@gh%;j and output:j@hg%;a)
i) To insert a sub-string in to a given main string from a given position.
Aim: To write C Program to insert a sub-string into a given main string from a 
given position
Program:-*/
#include<stdio.h>
#include<conio.h>
void main()
{
char str[100], pat[100], insert_str[200];
inti,j,k,pos;
clrscr();
printf("\nEnter the main string: ");
gets(str);
printf("\nEnter the string to be in inserted: ");
gets(pat);
printf("\nEnter the position to be inserted: ");
scanf("%d",&pos);
for(i=0,k=0;i<pos;i++,k++)
insert_str[k]=str[i];
for(j=0;pat[j]!='\0';j++,k++)
insert_str[k]=pat[j];
for(;str[i]!='\0';i++,k++)
insert_str[k]=str[i];
insert_str[k]='\0';
printf("\nThe main string after inserting string is: ");
puts(insert_str);
getch();
}

