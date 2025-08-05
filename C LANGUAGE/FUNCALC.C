#include<stdio.h>
#include<conio.h>

void add(int a,int b)
{
  printf("\nAddition : %d",a+b);
  printf("\n");
}
void sub(int a, int b)
{
  printf("\nSubtraction : %d ",a-b);
  printf("\n");
}
void mul(int a, int b )
{
  printf("\nMultipication : %d",a*b);
  printf("\n");
}
void div(int a,int b)
{
  printf("\nDivision : %d",a/b);
  printf("\n");
}
void main()
{
  int a,b;
  clrscr();
  printf("\nEnter Value :");
  scanf("%d",&a);
  printf("\nEnter Value :");
  scanf("%d",&b);
  add(a,b);
  sub(a,b);
  mul(a,b);
  div(a,b);
  getch();
}