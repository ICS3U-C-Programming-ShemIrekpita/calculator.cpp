// Calculator Program
// Created by: Shem
// Created on: 2025/12/09
// This program performs basic arithmetic operations
// Copyright 2025 Shem

#include <iostream>

using namespace std;

// This function performs the calculation
float calculate(char sign, float first_number, float second_number) {
    if (sign == '+') {
        return first_number + second_number;
    } else if (sign == '-') {
        return first_number - second_number;
    } else if (sign == '*') {
        return first_number * second_number;
    } else if (sign == '/') {
        return first_number / second_number;
    }
}
int main() {
    char sign;
    float first_number;
    float second_number;
    // Loop until valid input is entered
    while (true) {
        // Ask for the operation
        cout << "Enter operation (+, -, *, /): ";
        cin >> sign;
        // Check if the operation is valid
        if (sign != '+' && sign != '-' && sign != '*' && sign != '/') {
            cout << "Invalid operation. Please try again.\n\n";
            continue;
        }
        // Ask for the first number
        cout << "Enter first number: ";
        cin >> first_number;
        // Check if input failed
        if (cin.fail()) {
            cout << "Invalid number entered.\n\n";
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }
        // Ask for the second number
        cout << "Enter second number: ";
        cin >> second_number;
        // Check if input failed
        if (cin.fail()) {
            cout << "Invalid number entered.\n\n";
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }
        // Prevent division by zero
        if (sign == '/' && second_number == 0) {
            cout << "Error: Division by zero is not allowed.\n\n";
            continue;
        }
        // Calculate and display result
        float result = calculate(sign, first_number, second_number);
        cout << "\nResult: " << first_number << " " << sign << " "
            << second_number << " = " << result << endl;
        break;
    }

}
