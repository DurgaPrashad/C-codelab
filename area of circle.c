
#include<stdio.h>
#include<conio.h>
#define PI 3.14
int main() 
{
int rad;
float area, circum;
printf("\nEnter radius of circle: ");
scanf("%d", &rad);
 area = PI * rad * rad;
printf("\nArea of circle : %f ", area);
circum= 2 * PI * rad;
printf("\nCircumference : %f ", circum);
getch();
}

