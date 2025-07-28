#include<stdio.h>
#include<conio.h>

 void main()
{
 int password;
 clrscr();
 printf("\nEnter The password:");
 scanf("%d",&password);
 if(password==8469)
 {
  printf("\nPassword is Correct");
 }
 else
 {
  printf("\nPassword is InCorrect");
 }
 getch();
 }