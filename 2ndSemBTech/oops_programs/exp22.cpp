#include <iostream>
using namespace std;

template <typename T>
void display(T value) {
    cout << "Displaying value: " << value << endl;
}
template <typename T>
void display(T* arr, int size) {
    cout << "Displaying array elements: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intValue = 42;
    float floatValue = 3.14f;
    char charValue = 'A';
    
    display(intValue);
    display(floatValue);
    display(charValue);

    int intArray[] = {1, 2, 3, 4, 5};
    display(intArray, 5);
    
    float floatArray[] = {1.1f, 2.2f, 3.3f};
    display(floatArray, 3);

    return 0;
}
