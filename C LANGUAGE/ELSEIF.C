#include<stdio.h>
#include<conio.h>
void main()
{
 int marks;
 clrscr();
 printf("\n Enter Marks:");
 scanf("%d",&marks);

 if(marks>=90)
  {
    printf("\nExcellent");
  }
 else if(marks>=70)
  {
    printf("\nGood");
  }
 else if(marks>=50)
  {
    printf("\nAverage");
  }
 else
  {
    printf("\nfail");
  }
 getch();
}