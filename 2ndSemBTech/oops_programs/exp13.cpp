//overload ++ operator
#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    Counter(int c = 0) : count(c) {}

    Counter operator++() {
        ++count;
        return *this;
    }

    int getCount() const {
        return count;
    }
};

int main() {
    Counter c1(5);
    ++c1;
    cout << "Count after increment: " << c1.getCount() << endl;

    return 0;
}
