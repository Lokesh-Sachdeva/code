#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    if (!inputFile || !outputFile) {
        cout << "Error opening files!" << endl;
        return 1;
    }

    char ch;
    while (inputFile.get(ch)) {
        if (ch != ' ' && ch != '\t' && ch != '\n' && ch != '\v' && ch != '\f' && ch != '\r') {
            outputFile.put(ch);
        }
    }

    inputFile.close();
    outputFile.close();
    cout << "Whitespace removal completed. Check output.txt for results." << endl;

    return 0;
}
