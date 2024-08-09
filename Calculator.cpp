#include <bits/stdc++.h>
using namespace std;

// Function to perform addition
double add(double a, double b) {
    return a + b;
}

// Function to perform subtraction
double subtract(double a, double b) {
    return a - b;
}

// Function to perform multiplication
double multiply(double a, double b) {
    return a * b;
}

// Function to perform division
double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cerr << "Error: Division by zero is not allowed." << endl;
        return 0;
    }
}

// Function to display the calculator menu and perform the chosen operation
void calculator() {
    double num1, num2, result;
    char operation;

    cout << "Welcome to the Calculator!" << endl;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        default:
            cerr << "Error: Invalid operation." << endl;
            return;
    }

    cout << "The result is: " << result << endl;
}

int main() {
    calculator();
    return 0;
}

