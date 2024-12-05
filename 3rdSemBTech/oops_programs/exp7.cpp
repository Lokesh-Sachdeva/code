#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    inline Rectangle(double l, double w) : length(l), width(w) {}

    friend double calculateArea(const Rectangle& rect) {
        return rect.length * rect.width;
    }
};

int main() {
    double l, w;
    cout << "Enter length and width of the rectangle: ";
    cin >> l >> w;

    Rectangle rect(l, w);

    double area = calculateArea(rect);

    cout << "Area of the rectangle: " << area << endl;

    return 0;
}
