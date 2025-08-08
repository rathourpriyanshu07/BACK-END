#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
  char First_name[50],Last_name[50];
  clrscr();
  printf("Enter First_name: ");
  gets(First_name);
  printf("Enter Last_name: ");
  gets(Last_name);
  strcat(First_name,Last_name);
  printf("Fullname:%s",First_name);
  getch();
}