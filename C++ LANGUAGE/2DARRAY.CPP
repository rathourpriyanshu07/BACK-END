#include<iostream.h>
#include<conio.h>

void main()
{
    int a[3][3], b[3][3], c[3][3], i, j;
    clrscr();

    cout << "\nEnter 2D Array A\n";
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cout << "Enter " << i << " Row & " << j << " Column : ";
            cin >> a[i][j];
        }
    }

    cout << "\n2D Array A\n";
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cout << "\t" << a[i][j];
        }
        cout << "\n";
    }

    cout << "\nEnter 2D Array B\n";
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cout << "Enter " << i << " Row & " << j << " Column : ";
            cin >> b[i][j];
        }
    }

    cout << "\n2D Array B\n";
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cout << "\t" << b[i][j];
        }
        cout << "\n";
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << "\n2D Array C (Sum of A and B)\n";
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cout << "\t" << c[i][j];
        }
        cout << "\n";
    }

    getch();
}
