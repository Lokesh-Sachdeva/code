#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    char name[50];
    int age;
    char sex;
    float height;
    float weight;

    void getData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter sex (M/F): ";
        cin >> sex;
        cout << "Enter height (in cm): ";
        cin >> height;
        cout << "Enter weight (in kg): ";
        cin >> weight;
    }

    void displayData() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Sex: " << sex << endl;
        cout << "Height: " << height << " cm" << endl;
        cout << "Weight: " << weight << " kg" << endl;
    }
};

int main() {
    Student student;
    student.getData();

    ofstream outFile("student.dat", ios::binary);
    if (!outFile) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }

    outFile.write(reinterpret_cast<char*>(&student), sizeof(student));
    outFile.close();

    ifstream inFile("student.dat", ios::binary);
    if (!inFile) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    Student readStudent;
    inFile.read(reinterpret_cast<char*>(&readStudent), sizeof(readStudent));
    inFile.close();

    cout << "\nStudent Information Read from File:" << endl;
    readStudent.displayData();

    return 0;
}
