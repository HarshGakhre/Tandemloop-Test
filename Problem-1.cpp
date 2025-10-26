
#include <iostream>
using namespace std;

class Calculator {
public:
    double add(double a, double b) {
        return a + b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    double divide(double a, double b) {
        if (b == 0) {
            cout << "Cannot divide by zero" << endl;
            return 0;
        }
        return a / b;
    }
};

int main() {
    double num1, num2;
    char op;
    Calculator calc;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter operation (+, -, *, /): ";
    cin >> op;

    double result;

    if (op == '+')
        result = calc.add(num1, num2);
    else if (op == '-')
        result = calc.subtract(num1, num2);
    else if (op == '*')
        result = calc.multiply(num1, num2);
    else if (op == '/')
        result = calc.divide(num1, num2);
    else {
        cout << "Invalid operation entered" << endl;
        return 0;
    }

    cout << "Result: " << result << endl;

    return 0;
}
