#include<stdio.h>
#include<conio.h>

void main()
{
    int x;
    clrscr();
    Tops:
    printf("\n Enter X : ");
    scanf("%d",&x);
    if(x>0)
    {
	printf("\n Square of %d Is %d",x,x*x);
    }
    else
    {
	goto Tops;
    }
    getch();
}