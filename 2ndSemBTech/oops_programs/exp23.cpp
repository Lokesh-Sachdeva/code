#include <iostream>
using namespace std;

template <typename T>
class Compare {
private:
    T num1;
    T num2;

public:
    Compare(T a, T b) {
        num1 = a;
        num2 = b;
    }

    T findBigger() {
        return (num1 > num2) ? num1 : num2;
    }

    ~Compare() {
        cout << "Destructor called. Comparing " << num1 << " and " << num2 << endl;
    }
};

int main() {
    int intNum1, intNum2;
    cout << "Enter two integers: ";
    cin >> intNum1 >> intNum2;

    Compare<int> intCompare(intNum1, intNum2);
    cout << "Bigger integer: " << intCompare.findBigger() << endl;

    float floatNum1, floatNum2;
    cout << "Enter two floats: ";
    cin >> floatNum1 >> floatNum2;

    Compare<float> floatCompare(floatNum1, floatNum2);
    cout << "Bigger float: " << floatCompare.findBigger() << endl;

    return 0;
}
