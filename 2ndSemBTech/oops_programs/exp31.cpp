#include <iostream>
#include <stdexcept>
using namespace std;

double divide(double num1, double num2) {
    if (num2 == 0) {
        throw invalid_argument("Division by zero is not allowed.");
    }
    return num1 / num2;
}

int main() {
    double number1, number2;

    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;

    try {
        double result = divide(number1, number2);
        cout << "Result: " << result << endl;
    } catch (const invalid_argument& e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}
