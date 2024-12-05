#include <iostream>
using namespace std;

class Number {
private:
    double num1;
    double num2;
    double num3;

public:
    Number(double a, double b, double c) : num1(a), num2(b), num3(c) {}

    friend double findLargest(const Number& n);

    void display() {
        cout << "Numbers: " << num1 << ", " << num2 << ", " << num3 << endl;
    }
};


double findLargest(const Number& n) {
    return max(max(n.num1, n.num2), n.num3);
}

int main() {
    double a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    Number numObj(a, b, c);
    numObj.display();

    double largest = findLargest(numObj);
    cout << "Largest number: " << largest << endl;

    return 0;
}
