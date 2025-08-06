#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char S1[50];
  int x;
  clrscr();
  printf("Enter String S1 : ");
  gets(S1);
  x=strlen(S1);
  printf("length:%d",x);
  getch();
}