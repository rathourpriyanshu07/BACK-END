#include <iostream.h>
#include <conio.h>

int main() {
    int secretNumber = 42;  // you can change this or make it random
    int guess;

    clrscr();   // clear screen

    cout << "Guess the number between 1 and 100!\n";

    // loop until the user guesses correctly
    while (1) {
        cout << "\nEnter your guess: ";
        cin >> guess;

        if (guess == secretNumber) {
            cout << "🎉 Congratulations! You guessed the correct number!";
            break;   // exit loop
        }
        else if (guess > secretNumber) {
            cout << "Too high! Try again.";
        }
        else {
            cout << "Too low! Try again.";
        }
    }

    getch();   // wait for key press before closing
    return 0;
}
