#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
   
    Complex() : real(0.0), imag(0.0) {}

    Complex(double value) : real(value), imag(value) {}

    Complex(double r, double i) : real(r), imag(i) {}
    Complex add(const Complex& other) {
        Complex result;
        result.real = real + other.real;
        result.imag = imag + other.imag;
        return result;
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    cout<<"enter the real and imaginary part of the complex number:"<<endl;
    int real,img;
    cin>>real>>img;
    Complex num1; 
    Complex num2(real);
    Complex num3(real, img);

    Complex sum = num1.add(num2).add(num3);

    cout << "Complex number 1: ";
    num1.display();

    cout << "Complex number 2: ";
    num2.display();

    cout << "Complex number 3: ";
    num3.display();

    cout << "Sum of all three complex numbers: ";
    sum.display();

    return 0;
}
