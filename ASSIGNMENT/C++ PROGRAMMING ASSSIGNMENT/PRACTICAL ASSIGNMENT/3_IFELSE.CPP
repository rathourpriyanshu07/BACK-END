#include <iostream.h>
#include <conio.h>

int main() {
    int marks;

    clrscr();   // clear the screen

    cout << "Enter student marks (0-100): ";
    cin >> marks;

    if(marks >= 90) {
        cout << "Grade: A";
    }
    else if(marks >= 75) {
        cout << "Grade: B";
    }
    else if(marks >= 50) {
        cout << "Grade: C";
    }
    else if(marks >= 35) {
        cout << "Grade: D";
    }
    else {
        cout << "Grade: Fail";
    }

    getch();   // wait for a key press
    return 0;
}
