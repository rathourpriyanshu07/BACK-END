#include <iostream.h>
#include <conio.h>

int main() {
    int num, i;

    clrscr();   // clear screen

    cout << "Enter a number to display its multiplication table: ";
    cin >> num;

    cout << "\nMultiplication Table of " << num << ":\n";

    for(i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << "\n";
    }

    getch();   // wait for key press before exit
    return 0;
}
