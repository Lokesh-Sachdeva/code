 #include <iostream>
#include <string>
using namespace std;

class First {
protected:
    int book_no;
    string book_name;

public:
    void getdata() {
        cout << "Enter book number: ";
        cin >> book_no;
        cout << "Enter book name: ";
        cin >> book_name;
    }

    void putdata() const {
        cout << "Book Number: " << book_no << endl;
        cout << "Book Name: " << book_name << endl;
    }
};

class Second {
protected:
    string author_name;
    string publisher;

public:
    void getdata() {
        cout << "Enter author name: ";
        cin >> author_name;
        cout << "Enter publisher: ";
        cin >> publisher;
    }

    void showdata() const {
        cout << "Author Name: " << author_name << endl;
        cout << "Publisher: " << publisher << endl;
    }
};

class Third : public First, public Second {
    int pages;
    int year;

public:
    void getdata() {
        First::getdata();
        Second::getdata();
        cout << "Enter number of pages: ";
        cin >> pages;
        cout << "Enter year of publication: ";
        cin >> year;
    }

    void display() const {
        putdata();
        showdata();
        cout << "Pages: " << pages << endl;
        cout << "Year of Publication: " << year << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of books: ";
    cin >> n;

    Third* books = new Third[n];

    for (int i = 0; i < n; ++i) {
        cout << "\nEnter details for book " << i + 1 << ":\n";
        books[i].getdata();
    }

    cout << "\nDisplaying Book Information:\n";
    for (int i = 0; i < n; ++i) {
        cout << "\nBook " << i + 1 << " details:\n";
        books[i].display();
    }

    delete[] books;
    return 0;
}
