#include <iostream.h>
#include <conio.h>
#include <string.h>  // for strlen

int main() {
    char str[50];
    int length, i, flag = 0;

    clrscr();   // clear screen

    cout << "Enter a string to check for palindrome: ";
    gets(str);  // read string including spaces

    length = strlen(str);

    // Check palindrome
    for(i = 0; i < length / 2; i++) {
        if(str[i] != str[length - i - 1]) {
            flag = 1;  // not a palindrome
            break;
        }
    }

    if(flag == 0) {
        cout << "\nThe string \"" << str << "\" is a palindrome.";
    } else {
        cout << "\nThe string \"" << str << "\" is NOT a palindrome.";
    }

    getch();   // wait for key press
    return 0;
}
