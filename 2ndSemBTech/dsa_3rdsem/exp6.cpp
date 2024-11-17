#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    Employee* next;
    Employee* prev;
};

class DoublyLinkedList {
public:
    Employee* head;

    DoublyLinkedList() : head(nullptr) {}

    void insertAtFront(int id, string name) {
        Employee* newEmployee = new Employee();
        newEmployee->id = id;
        newEmployee->name = name;
        newEmployee->next = head;
        newEmployee->prev = nullptr;
        
        if (head != nullptr)
            head->prev = newEmployee;
        
        head = newEmployee;
    }

    void deleteAtEnd() {
        if (head == nullptr)
            return;

        Employee* temp = head;
        while (temp->next != nullptr)
            temp = temp->next;

        if (temp->prev != nullptr)
            temp->prev->next = nullptr;
        else
            head = nullptr;

        delete temp;
    }

    void display() {
        Employee* temp = head;
        while (temp != nullptr) {
            cout << "ID: " << temp->id << ", Name: " << temp->name << endl;
            temp = temp->next;
        }
    }
};

int main() {
    DoublyLinkedList list;
    list.insertAtFront(1, "Alice");
    list.insertAtFront(2, "Bob");
    list.insertAtFront(3, "Charlie");

    cout << "Doubly Linked List after insertion at front:\n";
    list.display();

    list.deleteAtEnd();
    cout << "\nDoubly Linked List after deletion at end:\n";
    list.display();

    return 0;
}
