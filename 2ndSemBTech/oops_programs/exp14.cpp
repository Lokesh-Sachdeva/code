// overload new and delete operator
#include <iostream>
using namespace std;

class MemoryTracker {
public:
    void* operator new(size_t size) {
        cout << "Allocating " << size << " bytes." << endl;
        return malloc(size);
    }

    void operator delete(void* pointer) {
        cout << "Deallocating memory." << endl;
        free(pointer);
    }

    void display() {
        cout << "Memory Tracker in use." << endl;
    }
};

int main() {
    MemoryTracker* obj = new MemoryTracker();
    obj->display();
    delete obj;

    return 0;
}
