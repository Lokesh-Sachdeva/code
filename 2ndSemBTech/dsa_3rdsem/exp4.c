#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct StudentNode {
    int rollNumber;
    char name[50];
    struct StudentNode* next;
};

struct StudentNode* head = NULL;

void insertStudent(int roll, const char* studentName) {
    struct StudentNode* newNode = (struct StudentNode*)malloc(sizeof(struct StudentNode));
    newNode->rollNumber = roll;
    strcpy(newNode->name, studentName);
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        struct StudentNode* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}
//revisit and understand it thouroughly
void deleteStudent(int roll) {
    struct StudentNode* current = head;
    struct StudentNode* prev = NULL;

    while (current != NULL && current->rollNumber != roll) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("Student with roll number %d not found.\n", roll);
        return;
    }

    if (prev == NULL) {
        head = current->next;
    } else {
        prev->next = current->next;
    }

    free(current);
}

void reverseList() {
    struct StudentNode* prev = NULL;
    struct StudentNode* current = head;
    struct StudentNode* nextNode;

    while (current != NULL) {
        nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }

    head = prev;
}

void displayList() {
    struct StudentNode* current = head;
    while (current != NULL) {
        printf("Roll Number: %d, Name: %s\n", current->rollNumber, current->name);
        current = current->next;
    }
}

int main() {
    insertStudent(101, "Alice");
    insertStudent(102, "Bob");
    insertStudent(103, "Charlie");

    printf("Original Linked List:\n");
    displayList();

    deleteStudent(102);
    printf("\nLinked List after deleting student with roll number 102:\n");
    displayList();

    reverseList();
    printf("\nReversed Linked List:\n");
    displayList();

    return 0;
}
