#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

Node* head = nullptr;

void insert(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->prev = nullptr;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

void deleteNode(int value) {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }

    Node* temp = head;

    if (temp->data == value) {
        head = temp->next;
        if (head != nullptr)
            head->prev = nullptr;
        delete temp;
        return;
    }

    while (temp != nullptr && temp->data != value) {
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Value not found in the list." << endl;
        return;
    }

    if (temp->next != nullptr)
        temp->next->prev = temp->prev;
    if (temp->prev != nullptr)
        temp->prev->next = temp->next;

    delete temp;
}

void displayForward() {
    Node* temp = head;
    cout << "Forward: ";
    while (temp != nullptr) {
        cout << temp->data << " <-> ";
        if (temp->next == nullptr) break; 
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void displayBackward() {
    Node* temp = head;
    if (temp == nullptr) {
        cout << "Backward: List is empty" << endl;
        return;
    }

    while (temp->next != nullptr) {
        temp = temp->next;
    }

    cout << "Backward: ";
    while (temp != nullptr) {
        cout << temp->data << " <-> ";
        temp = temp->prev;
    }
    cout << "NULL" << endl;
}

void traverseAndCount() {
    Node* temp = head;
    int count = 0;
    cout << "Traversing: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
        count++;
    }
}

int main() {
    insert(10);
    insert(20);
    insert(30);
    cout << "\nAfter inserting 10, 20, 30:" << endl;
    displayForward();
    displayBackward();

    deleteNode(20);
    cout << "\nAfter deleting 20:" << endl;
    displayForward();
    displayBackward();

    insert(40);
    cout << "\nAfter inserting 40:" << endl;
    displayForward();
    displayBackward();

    deleteNode(10);
    cout << "\nAfter deleting 10:" << endl;
    displayForward();
    displayBackward();

    deleteNode(100); 

    traverseAndCount();

    return 0;
}


