#include <iostream.h>
#include <conio.h>

// Function to calculate area
int area(int length, int width) {
    return length * width;
}

int main() {
    int length, width;

    clrscr();   // clear screen

    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
    cin >> width;

    cout << "\nArea of Rectangle = " << area(length, width);

    getch();    // wait for key press
    return 0;
}
