#include <iostream.h>
#include <conio.h>

int main() {
    int n, i, sum = 0;
    float average;

    clrscr();   // clear screen

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[50];   // assuming max 50 elements

    // Input array elements
    for(i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Calculate sum
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Calculate average
    average = (float)sum / n;

    // Display results
    cout << "\nSum of array elements = " << sum;
    cout << "\nAverage of array elements = " << average;

    getch();   // wait for key press
    return 0;
}
