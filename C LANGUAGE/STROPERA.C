#include <stdio.h>
#include <string.h>
#include <conio.h>

// Function to reverse a string
void reverseString(char str[]) {
    int len = strlen(str);
    int i;
    printf("\nReversed String: ");
    for (i = len - 1; i >= 0; i--) {
	printf("%c", str[i]);
    }
    printf("\n");
}

// Function to concatenate two strings
void concatenateString(char str[]) {
    char str2[100];
    printf("Enter another string to concatenate: ");
    scanf(" %[^\n]", str2);
    strcat(str, str2);
    printf("Concatenated String: %s\n", str);
}

// Function to check if a string is palindrome
void checkPalindrome(char str[]) {
    int len = strlen(str), flag = 1, i;
    for (i = 0; i < len / 2; i++) {
	if (tolower(str[i]) != tolower(str[len - i - 1])) {
	    flag = 0;
	    break;
	}
    }
    if (flag)
	printf("The string is a Palindrome.\n");
    else
	printf("The string is NOT a Palindrome.\n");
}

// Function to copy a string
void copyString(char str[]) {
    char copy[100];
    strcpy(copy, str);
    printf("Copied String: %s\n", copy);
}

// Function to find length of string
void stringLength(char str[]) {
    printf("Length of String: %d\n", strlen(str));
}

// Function to find frequency of a character
void charFrequency(char str[]) {
    char ch;
    int count = 0, i;
    printf("Enter character to find frequency: ");
    scanf(" %c", &ch);
    for (i = 0; str[i] != '\0'; i++) {
	if (str[i] == ch)
	    count++;
    }
    printf("Frequency of '%c' = %d\n", ch, count);
}

// Function to count vowels and consonants
void countVowelsConsonants(char str[]) {
    int vowels = 0, consonants = 0, i;
    char ch;
    for (i = 0; str[i] != '\0'; i++) {
	ch = tolower(str[i]);
	if (isalpha(ch)) {
	    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
		vowels++;
	    else
		consonants++;
	}
    }
    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);
}

// Function to count spaces and digits
void countSpacesDigits(char str[]) {
    int spaces = 0, digits = 0, i;
    for (i = 0; str[i] != '\0'; i++) {
	if (isspace(str[i]))
	    spaces++;
	else if (isdigit(str[i]))
	    digits++;
    }
    printf("Spaces: %d, Digits: %d\n", spaces, digits);
}

void main() {
    char str[100];
    int choice, repeat;

    clrscr();

    do {
        // Input string from user
        printf("\nEnter a string: ");
        scanf(" %[^\n]", str);

        // Menu for string operations
        printf("\n--- String Operations Menu ---\n");
        printf("1. Reverse String\n");
        printf("2. Concatenate String\n");
        printf("3. Check Palindrome\n");
        printf("4. Copy String\n");
        printf("5. Length of String\n");
        printf("6. Frequency of Character\n");
        printf("7. Count Vowels and Consonants\n");
        printf("8. Count Spaces and Digits\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform operation based on user choice
        switch (choice) {
            case 1: reverseString(str); break;
            case 2: concatenateString(str); break;
            case 3: checkPalindrome(str); break;
            case 4: copyString(str); break;
            case 5: stringLength(str); break;
            case 6: charFrequency(str); break;
            case 7: countVowelsConsonants(str); break;
            case 8: countSpacesDigits(str); break;
            default: printf("Invalid Choice! Please select from menu.\n");
        }

        // Ask user if they want to continue
        printf("\nDo you want to perform another operation? (1-Yes / 0-No): ");
        scanf("%d", &repeat);

    } while (repeat == 1);

    printf("\nThank you! Exiting program.\n");

    getch(); // wait for key press
}
