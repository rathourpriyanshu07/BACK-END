#include<stdio.h>
#include<conio.h>
 void main()
 {
     int num;
     int *ptr;
     clrscr();
     num=10;
     ptr=&num;
     printf("\n original value of num=%d\n",num);
     *ptr=20;
     printf("\n modified valueof num using pointer=%d\n",num);
     getch();
 }