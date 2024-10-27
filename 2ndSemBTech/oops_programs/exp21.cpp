#include <iostream>
using namespace std;

template <typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int intA = 10, intB = 20;
    float floatA = 1.5f, floatB = 2.5f;
    char charA = 'X', charB = 'Y';

    cout << "Before swapping (int): a = " << intA << ", b = " << intB << endl;
    swap(intA, intB);
    cout << "After swapping (int): a = " << intA << ", b = " << intB << endl;

    cout << "Before swapping (float): a = " << floatA << ", b = " << floatB << endl;
    swap(floatA, floatB);
    cout << "After swapping (float): a = " << floatA << ", b = " << floatB << endl;

    cout << "Before swapping (char): a = " << charA << ", b = " << charB << endl;
    swap(charA, charB);
    cout << "After swapping (char): a = " << charA << ", b = " << charB << endl;

    return 0;
}
