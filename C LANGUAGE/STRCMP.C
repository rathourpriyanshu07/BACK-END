#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
  char s1[50],s2[50];
  int x;
  clrscr();
  printf("Enter String s1: ");
  gets(s1);
  printf("Enter String s2: ");
  gets(s2);
  x=strcmp(s1,s2);
  printf("\nX : %d",x);
  if(x==0)
  {
       printf("\nBoth Strings Are Equal");
  }
  else
  {
       printf("\nBoth Strings Are Different");
  }
  getch();
}