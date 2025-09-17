#include<iostream.h>
#include<conio.h>

void main()
{
    int a[5], i, j, temp;
    clrscr();

    cout << "\nEnter Array Elements\n";
    for(i = 0; i < 5; i++)
    {
        cout << "Enter " << i << " Element : ";
        cin >> a[i];
    }

    cout << "\nArray Elements Are\n";
    for(i = 0; i < 5; i++)
    {
        cout << "\nA[" << i << "] = " << a[i];
    }

    // Ascending Order
    for(i = 0; i < 5; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    cout << "\nArray Elements Are In Ascending Order\n";
    for(i = 0; i < 5; i++)
    {
        cout << "\nA[" << i << "] = " << a[i];
    }

    // Descending Order
    for(i = 0; i < 5; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if(a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    cout << "\nArray Elements Are In Descending Order\n";
    for(i = 0; i < 5; i++)
    {
        cout << "\nA[" << i << "] = " << a[i];
    }

    getch();
}
