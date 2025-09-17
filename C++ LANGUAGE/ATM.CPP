#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

class ATM {
private:
    int balance;
    int pin;

public:
    // Constructor
    ATM(int initialBalance, int pinCode) {
        balance = initialBalance;
        pin = pinCode;
    }

    // Function to display welcome screen
    void displayWelcome() {
        clrscr();
        cout << "======================================" << endl;
        cout << "      WELCOME TO ATM BANKING SYSTEM   " << endl;
        cout << "======================================" << endl;
        cout << "1. Enter ATM PIN" << endl;
        cout << "2. Help" << endl;
        cout << "3. Exit" << endl;
    }

    // Function to validate PIN
    int validatePin() {
        int enteredPin;
        cout << "\nEnter ATM PIN: ";
        cin >> enteredPin;

        if (enteredPin == pin) {
            cout << "\nPIN Correct. Access Granted!\n";
            return 1;
        } else {
            cout << "\nIncorrect PIN! Exiting...\n";
            return 0;
        }
    }

    // Help screen
    void helpScreen() {
        clrscr();
        cout << "\n================ HELP ================\n";
        cout << "1. Your ATM PIN is 12345\n";
        cout << "2. You can check balance, deposit & withdraw money\n";
        cout << "3. Only one attempt allowed for PIN entry\n";
        cout << "======================================\n";
        getch();
    }

    // Menu after login
    void menu() {
        int choice;
        do {
            clrscr();
            cout << "\n=========== MAIN MENU ===========\n";
            cout << "1. Check Balance\n";
            cout << "2. Deposit Money\n";
            cout << "3. Withdraw Money\n";
            cout << "4. Exit\n";
            cout << "Enter choice: ";
            cin >> choice;

            switch (choice) {
                case 1: checkBalance(); break;
                case 2: deposit(); break;
                case 3: withdraw(); break;
                case 4: cout << "Exiting... Thank you!\n"; break;
                default: cout << "Invalid choice!\n";
            }
            getch();
        } while (choice != 4);
    }

    // Check balance
    void checkBalance() {
        cout << "\nYour Current Balance: Rs. " << balance << endl;
    }

    // Deposit money
    void deposit() {
        int amount;
        cout << "\nEnter amount to deposit: ";
        cin >> amount;
        if (amount > 0) {
            balance += amount;
            cout << "Deposited Successfully!\n";
            checkBalance();
        } else {
            cout << "Invalid deposit amount!\n";
        }
    }

    // Withdraw money
    void withdraw() {
        int amount;
        cout << "\nEnter amount to withdraw: ";
        cin >> amount;
        if (amount > balance) {
            cout << "Insufficient Balance! Withdrawal Failed.\n";
        } else if (amount <= 0) {
            cout << "Invalid amount!\n";
        } else {
            balance -= amount;
            cout << "Withdrawal Successful!\n";
            checkBalance();
        }
    }
};

// Scope resolution operator example (outside class)
void runATM() {
    ATM atm(20000, 12345);  // Initial balance Rs. 20000, PIN 12345
    int choice;

    atm.displayWelcome();
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        if (atm.validatePin()) {
            atm.menu();
        }
    } else if (choice == 2) {
        atm.helpScreen();
    } else {
        cout << "Exiting ATM. Goodbye!\n";
    }
    getch();
}

// Main function
void main() {
    clrscr();
    runATM();
}
