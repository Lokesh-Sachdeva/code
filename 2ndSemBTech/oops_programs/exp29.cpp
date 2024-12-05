#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream sourceFile("source.txt");
    ofstream destinationFile("destination.txt");

    if (!sourceFile || !destinationFile) {
        cout << "Error opening files!" << endl;
        return 1;
    }

    string line;
    while (getline(sourceFile, line)) {
        destinationFile << line << endl;
    }

    sourceFile.close();
    destinationFile.close();
    cout << "File copied successfully!" << endl;

    return 0;
}
