//physical fitness inheritence ques 1
#include <iostream>
using namespace std;

class BasicInfo {
protected:
    string name;
    int rollNo;
    char sex;

public:
    void getData() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Sex (M/F): ";
        cin >> sex;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Sex: " << sex << endl;
    }
};

class PhysicalFit : public BasicInfo {
private:
    float height;
    float weight;

public:
    void getData() {
        BasicInfo::getData();
        cout << "Enter Height (in cm): ";
        cin >> height;
        cout << "Enter Weight (in kg): ";
        cin >> weight;
    }

    void display() {
        BasicInfo::display();
        cout << "Height: " << height << " cm" << endl;
        cout << "Weight: " << weight << " kg" << endl;
    }
};

int main() {
    PhysicalFit student;
    student.getData();
    student.display();
    return 0;
}
