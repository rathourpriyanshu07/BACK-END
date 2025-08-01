#include<stdio.h>
#include<conio.h>

void main()
{
  int a=0,b=0,c=0,d=0,result;
  clrscr();
  result=a++ + ++b + --c + d-- + ++a + --d;
  printf("\nA : %d",a);
  printf("\nB : %d",b);
  printf("\nC : %d",c);
  printf("\nD : %d",d);
  printf("\nResult : %d",result);
  getch();
}