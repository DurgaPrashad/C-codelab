/*ii) Given a string -a$bcd./fg? find its reverse without changing the position of special
characters. (Example input:a@gh%;j and output:j@hg%;a)
Aim: To write a C program to find the reverse without changing the position of special 
characters.
Program:*/
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
// Returns true if x is an aplhabetic
// character, false otherwise
bool isAlphabet(char x)
{
return ( (x >= 'A' && x <= 'Z') ||
(x >= 'a' && x <= 'z') );
}
void reverse(char str[])
{
// Initialize left and right pointers
int r = strlen(str) - 1, l = 0;
// Traverse string from both ends until
// 'l' and 'r'
while (l < r)
{
// Ignore special characters
if (!isAlphabet(str[l]))
l++;
else if(!isAlphabet(str[r]))
r--;
else
{
chartmp = str[l];
str[l] = str[r];
str[r] = tmp;
l++;
r--;
}
}
}
int main()
{
charstr[] = "a@gh%;j";
puts(str);
reverse(str);
puts(str);
return 0;
}

