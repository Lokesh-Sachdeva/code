#include <iostream>
using namespace std;

template <typename T>
T square(T number) {
    return number * number;
}

int main() {
    int intNum = 5;
    double doubleNum = 5.5;
    float floatNum = 4.3f;

    cout << "Square of integer 5: " << square(intNum) << endl;
    cout << "Square of double 5.5: " << square(doubleNum) << endl;
    cout << "Square of float 4.3: " << square(floatNum) << endl;

    return 0;
}
