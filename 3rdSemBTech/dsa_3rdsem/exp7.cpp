#include <iostream>
using namespace std;

struct College {
    int id;
    string name;
    College* next;
};

class CircularLinkedList {
public:
    College* head;

    CircularLinkedList() : head(nullptr) {}

    void insertAtFront(int id, string name) {
        College* newCollege = new College();
        newCollege->id = id;
        newCollege->name = name;

        if (head == nullptr) {
            newCollege->next = newCollege;
            head = newCollege;
        } else {
            College* temp = head;
            while (temp->next != head)
                temp = temp->next;

            newCollege->next = head;
            temp->next = newCollege;
            head = newCollege;
        }
    }

    void deleteAtEnd() {
        if (head == nullptr)
            return;

        if (head->next == head) {
            delete head;
            head = nullptr;
            return;
        }

        College* temp = head;
        while (temp->next->next != head)
            temp = temp->next;

        College* lastNode = temp->next;
        temp->next = head;
        delete lastNode;
    }

    void display() {
        if (head == nullptr)
            return;

        College* temp = head;
        do {
            cout << "ID: " << temp->id << ", Name: " << temp->name << endl;
            temp = temp->next;
        } while (temp != head);
    }
};

int main() {
    CircularLinkedList list;
    list.insertAtFront(1, "Engineering College");
    list.insertAtFront(2, "Medical College");
    list.insertAtFront(3, "Business College");

    cout << "Circular Linked List after insertion at front:\n";
    list.display();

    list.deleteAtEnd();
    cout << "\nCircular Linked List after deletion at end:\n";
    list.display();

    return 0;
}
