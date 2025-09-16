#include <iostream.h>
#include <conio.h>

int main() {
    int rows, i, j;

    clrscr();   // clear screen

    cout << "Enter number of rows for the triangle: ";
    cin >> rows;

    cout << "\nRight-angled triangle pattern:\n\n";

    // Outer loop for rows
    for(i = 1; i <= rows; i++) {
        // Inner loop for stars in each row
        for(j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << "\n";  // move to next line
    }

    getch();   // wait for key press
    return 0;
}
