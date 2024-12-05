#include <iostream>
using namespace std;

template <typename T>
class SumCalculator {
private:
    T num1;
    T num2;

public:
    void readData() {
        cout << "Enter two values: ";
        cin >> num1 >> num2;
    }

    T calculateSum() {
        return num1 + num2;
    }
};

int main() {
    SumCalculator<int> intSum;
    intSum.readData();
    cout << "Sum of integers: " << intSum.calculateSum() << endl;

    SumCalculator<float> floatSum;
    floatSum.readData();
    cout << "Sum of floats: " << floatSum.calculateSum() << endl;

    return 0;
}
