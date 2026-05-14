#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter the operator (+, -, *, /, %): ";
    cin >> op;

    if(op == '+')
        cout << "Result = " << num1 + num2;

    else if(op == '-')
        cout << "Result = " << num1 - num2;

    else if(op == '*')
        cout << "Result = " << num1 * num2;

    else if(op == '/') {
        if(num2 != 0)
            cout << "Result = " << num1 / num2;
        else
            cout << "Division by zero is not allowed";
    }

    else if(op == '%')
        cout << "Result = " << (int)num1 % (int)num2;

    else
        cout << "Invalid operator";

    return 0;
}