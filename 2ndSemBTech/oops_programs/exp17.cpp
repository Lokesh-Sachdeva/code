#include <iostream>
#include <string>
using namespace std;

class STUDENT {
protected:
    int roll_no;
    string name;

public:
    void getdata() {
        cout << "Enter roll number: ";
        cin >> roll_no;
        cout << "Enter name: ";
        cin >> name;
    }

    void display() const {
        cout << "Roll Number: " << roll_no << endl;
        cout << "Name: " << name << endl;
    }
};

class EXAM : public STUDENT {
protected:
    int marks[6];

public:
    void getdata() {
        STUDENT::getdata();
        for (int i = 0; i < 6; ++i) {
            cout << "Enter marks for subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    int* getMarks() const {
        return (int*)marks;
    }
};

class RESULT : public EXAM {
    int total_marks;

public:
    void calculateTotal() {
        total_marks = 0;
        for (int i = 0; i < 6; ++i) {
            total_marks += marks[i];
        }
    }

    void display() const {
        STUDENT::display();
        cout << "Total Marks: " << total_marks << endl;
    }
};

int main() {
    RESULT student;
    student.getdata();
    student.calculateTotal();
    cout << "\nDisplaying Student Result:\n";
    student.display();

    return 0;
}
