//fibonacci using copy constructor 
#include <iostream>
using namespace std;

class Fibonacci {
private:
    int num;

public:
    
    Fibonacci(int n) : num(n) {}

  
    Fibonacci(const Fibonacci &prev) {
        num = prev.num;
    }

    
    Fibonacci next(Fibonacci &prev) {
        return Fibonacci(num + prev.num);
    }

    int getValue() const {
        return num;
    }
};

int main() {
    int terms;
    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> terms;

    Fibonacci first(0), second(1);
    cout << "Fibonacci Series: " << first.getValue() << " " << second.getValue() << " ";

    for (int i = 3; i <= terms; ++i) {
        Fibonacci nextTerm = second.next(first);
        cout << nextTerm.getValue() << " ";
        first = second;
        second = nextTerm;
    }

    cout << endl;
    return 0;
}
