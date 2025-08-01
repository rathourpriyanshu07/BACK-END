#include<stdio.h>
#include<conio.h>

void main()
{
   int a[10],i;
   clrscr();
   printf("\nEnter Array Elements\n");
   for(i=0;i<10;i++)
   {
	printf(" Enter %d Element : ",i);
	scanf("%d",&a[i]);
   }

   printf("\nArray Element Are\n");
   for(i=0;i<10;i++)
   {
       printf("\n A[%d] = %d",i,a[i]);
   }
   getch();
}