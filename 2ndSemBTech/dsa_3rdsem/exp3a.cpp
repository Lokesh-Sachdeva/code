#include <iostream>
#include <unordered_map>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
public:
    Node* head;
    LinkedList() : head(nullptr) {}

    void insert(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    int countDuplicates() {
        unordered_map<int, int> frequency;
        Node* current = head;
        while (current != nullptr) {
            frequency[current->data]++;
            current = current->next;
        }
        int duplicatesCount = 0;
        for (auto element : frequency) {
            if (element.second > 1) {
                duplicatesCount++;
            }
        }
        return duplicatesCount;
    }
};

int main() {
    LinkedList list;
    int n, value;

    cout << "Enter the number of elements to insert: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> value;
        list.insert(value);
    }

    int duplicateCount = list.countDuplicates();
    cout << "Number of duplicate elements: " << duplicateCount << endl;

    return 0;
}
