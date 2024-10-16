// Write a program to find the sum of two numbers declared in a class and display the numbers and sum using friend class.
#include <iostream>
using namespace std;

class SumCalculator; 
class Number {
private:
    double num1;
    double num2;

public:
    Number(double a, double b) : num1(a), num2(b) {}

    friend class SumCalculator;

    void displayNumbers() {
        cout << "Number 1: " << num1 << endl;
        cout << "Number 2: " << num2 << endl;
    }
};

class SumCalculator {
public:
    static double calculateSum(const Number& n) {
        return n.num1 + n.num2;
    }
};

int main() {
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    Number numObj(a, b);
    numObj.displayNumbers();

    double sum = SumCalculator::calculateSum(numObj);
    cout << "Sum: " << sum << endl;

    return 0;
}
