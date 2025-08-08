#include <iostream>
using namespace std;

int main() {
    int number, reversed = 0;

    // Ask the user for a 3-digit number
    cout << "Enter a 3-digit number: ";
    cin >> number;

    // Check if it's a 3-digit number
    if (number < 100 || number > 999) {
        cout << "Please enter a valid 3-digit number." << endl;
        return 1; // Exit the program
    }

    // Reverse the digits
    while (number != 0) {
        int digit = number % 10;       // Get the last digit
        reversed = reversed * 10 + digit; // Add it to reversed
        number = number / 10;          // Remove the last digit
    }

    // Print the reversed number
    cout << "Reversed number: " << reversed << endl;

    return 0;
}
