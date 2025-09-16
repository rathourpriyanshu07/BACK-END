#include <iostream.h>
#include <conio.h>

// Global variable
int globalVar = 100;

// Function to demonstrate local variable
void showLocal() {
    int localVar = 50;  // local variable
    cout << "\nInside showLocal():\n";
    cout << "Local variable = " << localVar << "\n";
    cout << "Global variable = " << globalVar << "\n";
}

// Function to demonstrate modification of global variable
void modifyGlobal() {
    globalVar = 200;  // modifying global variable
    cout << "\nInside modifyGlobal():\n";
    cout << "Global variable modified to " << globalVar << "\n";
}

int main() {
    clrscr();   // clear screen

    cout << "Demonstrating Local and Global Variables in C++\n";

    showLocal();

    // Trying to access localVar here will give error
    // cout << localVar; // Uncommenting this line will cause error

    cout << "\nGlobal variable in main before modification = " << globalVar;

    modifyGlobal();

    cout << "\nGlobal variable in main after modification = " << globalVar;

    getch();
    return 0;
}
