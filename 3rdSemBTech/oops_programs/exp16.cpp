
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
        cin.ignore(); // Clears newline character left in buffer
        cout << "Enter book name: ";
        getline(cin, book_name);
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
        getline(cin, author_name);
        cout << "Enter publisher: ";
        getline(cin, publisher);
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
        cin.ignore(); // Clears newline character left in buffer
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
    cin.ignore(); // Clears newline character left in buffer
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

