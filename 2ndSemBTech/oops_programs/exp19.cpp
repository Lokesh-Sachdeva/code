#include <iostream>
#include <vector>
using namespace std;

class LIST {
public:
    virtual void store(int value) = 0;
    virtual int retrieve() = 0;
};

class stack : public LIST {
    vector<int> stk;

public:
    void store(int value) override {
        stk.push_back(value);
    }

    int retrieve() override {
        if (!stk.empty()) {
            int value = stk.back();
            stk.pop_back();
            return value;
        } else {
            cout << "Stack is empty!" << endl;
            return -1;
        }
    }
};

class queue : public LIST {
    vector<int> que;

public:
    void store(int value) override {
        que.push_back(value);
    }

    int retrieve() override {
        if (!que.empty()) {
            int value = que.front();
            que.erase(que.begin());
            return value;
        } else {
            cout << "Queue is empty!" << endl;
            return -1;
        }
    }
};

int main() {
    LIST* list;
    stack s;
    queue q;
    list = &s;
    list->store(10);
    list->store(20);
    cout << "Stack retrieve: " << list->retrieve() << endl; // 20
    cout << "Stack retrieve: " << list->retrieve() << endl; // 10
    list = &q;
    list->store(30);
    list->store(40);
    cout << "Queue retrieve: " << list->retrieve() << endl; // 30
    cout << "Queue retrieve: " << list->retrieve() << endl; // 40

    return 0;
}
