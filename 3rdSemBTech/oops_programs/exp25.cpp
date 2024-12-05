#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream file;
    string filename, line;

    cout << "Enter the filename to save: ";
    cin >> filename;

    file.open(filename); // Directly using filename without .c_str()

    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    cout << "Enter text (type 'END' to stop):" << endl;
    cin.ignore();

    while (true) {
        getline(cin, line);
        if (line == "END") break;
        file << line << endl;
    }

    file.close();
    cout << "File saved successfully!" << endl;

    return 0;
}
