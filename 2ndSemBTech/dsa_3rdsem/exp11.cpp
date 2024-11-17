#include <iostream>
#include <list>
using namespace std;

class HashTable {
private:
    int size;
    list<int>* table;

public:
    HashTable(int size) {
        this->size = size;
        table = new list<int>[size];
    }

    int hashFunction(int key) {
        return key % size;
    }

    void insert(int key) {
        int index = hashFunction(key);
        table[index].push_back(key);
    }

    bool search(int key) {
        int index = hashFunction(key);
        for (auto x : table[index]) {
            if (x == key) {
                return true;
            }
        }
        return false;
    }

    void display() {
        for (int i = 0; i < size; i++) {
            cout << "Bucket " << i << ": ";
            for (auto x : table[i]) {
                cout << x << " ";
            }
            cout << endl;
        }
    }

    ~HashTable() {
        delete[] table;
    }
};

int main() {
    HashTable hashTable(7);

    hashTable.insert(10);
    hashTable.insert(20);
    hashTable.insert(15);
    hashTable.insert(7);

    cout << "Hash Table:\n";
    hashTable.display();

    int key = 10;
    if (hashTable.search(key)) {
        cout << "Key " << key << " found in the hash table." << endl;
    } else {
        cout << "Key " << key << " not found in the hash table." << endl;
    }

    return 0;
}
