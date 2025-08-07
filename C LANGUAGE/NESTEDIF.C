#include<stdio.h>
#include<conio.h>

void main()
{
 int a,b,c;
 clrscr();
 printf("\n Enter A Value: ");
 scanf("%d",&a);
 printf("\n Enter B Value: ");
 scanf("%d",&b);
 printf("\n Enter C Value: ");
 scanf("%d",&c);

 if(a>b)
 {
 if(a>c)
 {
    printf("\n A is Greater");
 }
 else
 {
    printf("\n C is Greater");
 }
 }
 else
 {
 if(b>c)
 {
    printf("\n B is Greater");
 }
 else
 {
    printf("\n C is Greater");
 }
 }
 getch();
}
