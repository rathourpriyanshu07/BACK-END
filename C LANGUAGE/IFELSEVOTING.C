#include<stdio.h>
#include<conio.h>
void main()
{
 int age;
 clrscr();
 printf("\nEnter Age:");
 scanf("%d",&age);
 if(age>=18)
 {
   printf("\nElegible for vote");
 }
 else
 {
   printf("\nNot Elegible for vote");
 }
 getch();
 }
