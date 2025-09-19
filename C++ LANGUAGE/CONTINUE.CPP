#include<iostream.h>
#include<conio.h>

void main()
{
    int i;
    clrscr();

    for(i = 0; i < 10; i++)
    {
        if(i == 5)
        {
            continue;   // skip printing when i = 5
        }
        else
        {
            cout << "\nI : " << i;
        }
    }

    getch();
}
