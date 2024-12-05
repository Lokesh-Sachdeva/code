#include <iostream>
#include <stdexcept>
using namespace std;

class Array {
private:
    int arr[5];
    int size;

public:
    Array() : size(5) {
        for (int i = 0; i < size; i++) {
            arr[i] = i + 1;
        }
    }

    int getElement(int index) {
        if (index < 0 || index >= size) {
            throw out_of_range("Index is out of bounds.");
        }
        return arr[index];
    }
};

int main() {
    Array myArray;
    int index;

    cout << "Enter index to access element: ";
    cin >> index;

    try {
        int element = myArray.getElement(index);
        cout << "Element at index " << index << " is: " << element << endl;
    } catch (const out_of_range& e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}
