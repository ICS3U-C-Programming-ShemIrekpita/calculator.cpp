// Calculator Program
// Created by: Shem
// Created on: 2025/12/09
// This program performs basic arithmetic operations
// Copyright 2025 Shem
// Allows input and output using cin and cout
#include <iostream>  // Allows input and output
#include <string>    // Allows use of the string type
// Function that does the math
float calculate(char sign, float first_number, float second_number) {
    // Check if the operation is addition
    if (sign == '+') {
        return first_number + second_number;
    }
    // Check if the operation is subtraction
    else if (sign == '-') {
        return first_number - second_number;
    }
    // Check if the operation is multiplication
    else if (sign == '*') {
        return first_number * second_number;
    }
    // Check if the operation is division
    else if (sign == '/') {
        return first_number / second_number;
    }
}
// Main function where the program starts
int main() {
    // Variable to store the math operator
    char sign;
    // Variable to store user input as text
    std::string input;
    // Variable to store the first number
    double first_number;
    // Variable to store the second number
    double second_number;
    // Loop that keeps running until valid input is entered
    while (true) {
        // Ask the user for a math operation
        std::cout << "Enter operation (+, -, *, /): ";
        // Get the operation from the user
        std::cin >> sign;
        // Check if the operation is invalid
        if (sign != '+' && sign != '-' && sign != '*' && sign != '/') {
            // Display an error message
            std::cout << "Invalid operation. Please try again.\n\n";
            // Restart the loop
            continue;
        }
        // Try to get valid numbers from the user
        try {
            // Ask for the first number
            std::cout << "Enter first number: ";
            // Read the input as a string
            std::cin >> input;
            // Convert the string to a number
            first_number = std::stod(input);
            // Ask for the second number
            std::cout << "Enter second number: ";
            // Read the input as a string
            std::cin >> input;
            // Convert the string to a number
            second_number = std::stod(input);
        }
        // Catch any errors if the input is not a number
        catch (...) {
            // Display an error message
            std::cout << "Invalid number entered.\n\n";
            // Restart the loop
            continue;
        }
        // Check for division by zero
        if (sign == '/' && second_number == 0) {
            // Display an error message
            std::cout << "Error: Division by zero is not allowed.\n\n";
            // Restart the loop
            continue;
        }
        // Call the calculate function to get the result
        float result = calculate(sign, first_number, second_number);
        // Display the final result
        std::cout << "\nResult: " << first_number << " " << sign << " "
                << second_number << " = " << result << std::endl;
        // Exit the loop after a successful calculation
        break;
    }
}
