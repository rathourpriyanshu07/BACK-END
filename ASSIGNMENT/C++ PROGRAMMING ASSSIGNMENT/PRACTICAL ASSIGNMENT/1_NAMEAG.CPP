#include <iostream.h>
#include <conio.h>

int main() {
    char name[50];   // to store the name
    int age;

    clrscr();  // clear screen (Turbo C++ specific)

    cout << "Enter your name: ";
    cin.getline(name, 50);   // reads name including spaces

    cout << "Enter your age: ";
    cin >> age;

    cout << "\nHello, " << name << "! You are " << age << " years old." << endl;

    getch();  // wait for key press before closing
    return 0;
}
