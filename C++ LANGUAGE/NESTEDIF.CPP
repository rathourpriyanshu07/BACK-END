#include<iostream.h>
#include<conio.h>

void main()
{
 int a,b,c;
 clrscr();
 cout<<"\n Enter A Value: ";
 cin>>a;
 cout<<"\n Enter B Value: ";
 cin>>b;
 cout<<"\n Enter C Value: ";
 cin>>c;

 if(a>b)
 {
 if(a>c)
 {
    cout<<"\n A is Greater";
 }
 else
 {
    cout<<"\n C is Greater";
 }
 }
 else
 {
 if(b>c)
 {
    cout<<"\n B is Greater";
 }
 else
 {
    cout<<"\n C is Greater";
 }
 }
 getch();
}
