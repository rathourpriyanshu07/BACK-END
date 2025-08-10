#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
   char s1[50],s2[50];
   int x;
   clrscr();
   printf("\n Enter String S1 : ");
   gets(s1);
   strcpy(s2,s1);
   strrev(s1);
   printf("\n S1 : %s",s1);
   printf("\n S2 : %s",s2);
   x=strcmp(s1,s2);
   if(x==0)
   {
       printf("\n Given String Is Palindrom");
   }
   else
   {
       printf("\n Given String Is Not Palindrom");
   }
   getch();
}