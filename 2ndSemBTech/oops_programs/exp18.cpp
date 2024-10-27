#include <iostream>
using namespace std;

class SHAPE {
protected:
    double dimension1, dimension2;

public:
    void getdata(double d1, double d2) {
        dimension1 = d1;
        dimension2 = d2;
    }

    virtual void display() const {
        cout << "Display function in base class SHAPE" << endl;
    }
};

class TRIANGLE : public SHAPE {
public:
    void display() const override {
        double area = 0.5 * dimension1 * dimension2;
        cout << "Area of Triangle: " << area << endl;
    }
};

class RECTANGLE : public SHAPE {
public:
    void display() const override {
        double area = dimension1 * dimension2;
        cout << "Area of Rectangle: " << area << endl;
    }
};

int main() {
    SHAPE* shape;
    TRIANGLE triangle;
    RECTANGLE rectangle;
    int choice;
    double d1, d2;

    cout << "Enter 1 for Triangle or 2 for Rectangle: ";
    cin >> choice;
    cout << "Enter two dimensions: ";
    cin >> d1 >> d2;

    if (choice == 1) {
        shape = &triangle;
        shape->getdata(d1, d2);
    } else if (choice == 2) {
        shape = &rectangle;
        shape->getdata(d1, d2);
    } else {
        cout << "Invalid choice!";
        return 1;
    }

    shape->display();
    return 0;
}
