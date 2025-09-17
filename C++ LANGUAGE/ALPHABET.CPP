#include<iostream.h>
#include<conio.h>

void main()
{
    int i, j, k;
    clrscr();

    for(i = 65; i < 74; i++)   // ASCII 65 = A, loop until I (73)
    {
        for(k = 0; k < 74 - i; k++)   // Spaces
        {
            cout << " ";
        }

        for(j = 65; j <= i; j++)     // Characters
        {
            cout << " " << char(i);
        }

        cout << "\n";
    }

    getch();
}
