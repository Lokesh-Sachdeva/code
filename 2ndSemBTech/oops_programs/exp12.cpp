//main programs ques 4 
#include <iostream>
#include <cstring>
using namespace std;

class MyString {
private:
    char* str;
public:
    MyString(const char* s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    MyString(const MyString& other) {
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
    }

    ~MyString() {
        delete[] str;
    }

    MyString operator+(const MyString& other) {
        MyString temp;
        delete[] temp.str; // Free old memory
        temp.str = new char[strlen(str) + strlen(other.str) + 1];
        strcpy(temp.str, str);
        strcat(temp.str, other.str);
        return temp;
    }

    MyString& operator=(const MyString& other) {
        if (this != &other) {
            delete[] str;
            str = new char[strlen(other.str) + 1];
            strcpy(str, other.str);
        }
        return *this;
    }

    bool operator<=(const MyString& other) {
        return strcmp(str, other.str) <= 0;
    }

    void displayLength() {
        cout << "Length: " << strlen(str) << endl;
    }

    void toLower() {
        for (int i = 0; str[i]; i++) {
            str[i] = tolower(str[i]);
        }
    }

    void toUpper() {
        for (int i = 0; str[i]; i++) {
            str[i] = toupper(str[i]);
        }
    }

    void display() {
        cout << str << endl;
    }
};

int main() {
    MyString str1("Hello");
    MyString str2(" World");

    MyString str3 = str1 + str2;
    str3.display();
    str3.displayLength();

    str3.toLower();
    str3.display();
    
    str3.toUpper();
    str3.display();

    if (str1 <= str3) {
        cout << "str1 is less than or equal to str3" << endl;
    } else {
        cout << "str1 is greater than str3" << endl;
    }
 return 0; }
