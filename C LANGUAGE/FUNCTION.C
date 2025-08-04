#include<stdio.h>
#include<conio.h>

void printline()
{
   int i;
   for(i=0;i<40;i++)
   {
	printf("*");
   }
}
void add(int a,int b)
{
       printf("\nAddition : %d",a+b);
       printf("\n");
}
int sub(int a,int b)
{
       return a-b;
}
void main()
{
       int x,y,ans;
       clrscr();
       printline();
       printf("\nWelcome to user Defined Function\n");
       printline();
       printf("\nEnter Value : ");
       scanf("%d",&x);
       printf("\nEnter Value : ");
       scanf("%d",&y);
       add(x,y);
       printline();
       printf("\nEnter Value : ");
       scanf("%d",&x);
       printf("\nEnter Value : ");
       scanf("%d",&y);
       ans=sub(x,y);
       printf("\nSubtraction : %d",ans);
       printf("\n");
       printline();
       getch();
}