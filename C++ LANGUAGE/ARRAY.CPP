#include<iostream.h>
#include<conio.h>

void main()
{
    int a[10], i;
    clrscr();

    cout << "\nEnter Array Elements\n";
    for(i = 0; i < 10; i++)
    {
        cout << " Enter " << i << " Element : ";
        cin >> a[i];
    }

    cout << "\nArray Elements Are\n";
    for(i = 0; i < 10; i++)
    {
        cout << "\n A[" << i << "] = " << a[i];
    }

    getch();
}
