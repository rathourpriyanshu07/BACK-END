#include<stdio.h>
#include<conio.h>
void main()

{
  int i;
  clrscr();

  for(i=0;i<10;i++)
  {
     if(i==5)
  {
       continue;
  }
     else
  {
       printf("\nI : %d",i);
  }
  }
  getch();
}