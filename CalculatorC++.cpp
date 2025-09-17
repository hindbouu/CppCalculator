// CalculatorC++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <cmath>
#include <limits>
#include <string>
using namespace std;

// Basic operations
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return (b != 0 ? a / b : NAN); }

// Function to display a mini ASCII calculator "UI"
void displayHeader() {
    cout << "============================\n";
    cout << " Console Calculator \n";
    cout << "Operators: + - * / ^ sqrt\n";
    cout << "Type 'q' anytime to quit\n";
    cout << "============================\n\n";
}

int main() {
    string input;
    double num1, num2, result;
    char op;
    bool running = true;

    displayHeader();

    while (running) {
        // Ask for first number
        cout << "Enter first number: ";
        cin >> input;
        if (input == "q") break; // quit anytime
        try {
            num1 = stod(input);
        }
        catch (...) {
            cout << "Invalid input! Try again.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        // Ask for operator
        cout << "Enter operator (+, -, *, /, ^, s for sqrt, q to quit): ";
        cin >> op;
        if (op == 'q') break;

        if (op == 's') { // sqrt only uses first number
            result = sqrt(num1);
            cout << "√" << num1 << " = " << result << endl;
            continue;
        }

        // Ask for second number
        cout << "Enter second number: ";
        cin >> input;
        if (input == "q") break;
        try {
            num2 = stod(input);
        }
        catch (...) {
            cout << "Invalid input! Try again.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        // Calculate result
        switch (op) {
        case '+': result = add(num1, num2); break;
        case '-': result = subtract(num1, num2); break;
        case '*': result = multiply(num1, num2); break;
        case '/': result = divide(num1, num2); break;
        case '^': result = pow(num1, num2); break;
        default:
            cout << "Invalid operator!\n";
            continue;
        }

        // Display result with a mini "GUI" box
        cout << "----------------------------\n";
        cout << "| " << num1 << " " << op << " " << num2 << " = " << result << " |\n";
        cout << "----------------------------\n\n";
    }

    cout << "\nGoodbye! \n";
    return 0;
}
