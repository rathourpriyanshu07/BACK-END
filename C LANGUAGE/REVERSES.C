#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
  char s1[50],s2[50];
  int i,length;
  clrscr();
  printf("\n Enter String :");
  scanf("%s",&s1);
  length=strlen(s1);
  for(i=0;i<length;i++)
  {
  s2[i]=s1[length-1-i];
  }
  s2[length]='\0';
  printf("\n Reversed String : %s",s2);
  getch();
}

