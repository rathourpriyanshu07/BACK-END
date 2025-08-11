#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
 char s1[50],s2[50],s3[50];
 clrscr();
 printf("\nEnter First name: ");
 gets(s1);
 printf("\nEnter Last name: ");
 gets(s2);
 strcat(s2,s1);
 printf("\nFullname:%s",s2);
 strrev(s2);
 printf("\nReversename:%s",s2);
 strcpy(s3,s1);
 printf("\ns3=%s",s3);
 getch();
}