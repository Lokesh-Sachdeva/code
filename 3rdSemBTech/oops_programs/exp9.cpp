// greatest of 2 num in 2 different classes using friend fx
 #include <iostream>
using namespace std;

class ClassA;
class ClassB;

class ClassA {
private:
    int numA;

public:
    ClassA(int a) : numA(a) {}

    friend int findGreatest(ClassA, ClassB);
};

class ClassB {
private:
    int numB;

public:
    ClassB(int b) : numB(b) {}

    friend int findGreatest(ClassA, ClassB);
};

int findGreatest(ClassA a, ClassB b) {
    return (a.numA > b.numB) ? a.numA : b.numB;
}

int main() {
    ClassA objA(10);
    ClassB objB(20);

    cout << "The greatest number is: " << findGreatest(objA, objB) << endl;

    return 0;
}
