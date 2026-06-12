#include <iostream>
#include <cmath>   // For mathematical functions like pow, sqrt, sin, cos, log
using namespace std;

int main() {
    int choice;          // Variable to store user's menu choice
    double num1, num2;   // Variables to store user input numbers

    // Display the calculator menu
    cout << "--- Scientific Calculator ---\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Power (x^y)\n";
    cout << "6. Square Root\n";
    cout << "7. Logarithm (base e)\n";
    cout << "8. Sin (in radians)\n";
    cout << "9. Cosine (in radians)\n";
    cout << "10. Exit\n";

    // Ask user for choice
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1: // Addition
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << num1 + num2 << endl;
            break;

        case 2: // Subtraction
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << num1 - num2 << endl;
            break;

        case 3: // Multiplication
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << num1 * num2 << endl;
            break;

        case 4: // Division
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            if(num2 != 0) // Prevent division by zero
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero is not allowed." << endl;
            break;

        case 5: // Power
            cout << "Enter base and exponent: ";
            cin >> num1 >> num2;
            cout << "Result: " << pow(num1, num2) << endl;
            break;

        case 6: // Square Root
            cout << "Enter number: ";
            cin >> num1;
            if(num1 >= 0) // Square root only valid for non-negative numbers
                cout << "Result: " << sqrt(num1) << endl;
            else
                cout << "Error: Square root of negative number is not real." << endl;
            break;

        case 7: // Logarithm
            cout << "Enter number: ";
            cin >> num1;
            if(num1 > 0) // Logarithm only valid for positive numbers
                cout << "Result: " << log(num1) << endl;
            else
                cout << "Error: Logarithm of non-positive number is undefined." << endl;
            break;

        case 8: // Sin
            cout << "Enter angle (in radians): ";
            cin >> num1;
            cout << "Result: " << sin(num1) << endl;
            break;

        case 9: // Cosine
            cout << "Enter angle (in radians): ";
            cin >> num1;
            cout << "Result: " << cos(num1) << endl;
            break;

        case 10: // Exit
            cout << "Exiting calculator..." << endl;
            break;

        default: // Invalid choice
            cout << "Invalid choice. Please run the program again." << endl;
    }

    return 0;
}
