#include<stdio.h>
#include<conio.h>

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void main()
{
    int a,b;
    clrscr();
    printf("\n Enter Value : ");
    scanf("%d",&a);
    printf("\n Enter value : ");
    scanf("%d",&b);
    printf("\n Value Before Swap Is %d & %d",a,b);
    swap(&a,&b);
    printf("\n Value After Swap Is %d & %d",a,b);
    getch();
}