#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;

void insert(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        head->next = head; 
    } else {
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head; 
    }
}

void deleteNode(int Value) {
    if(head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }

    Node* temp = head;


    if(head->data == value && head->next == head) {
        delete head;
        head = nullptr;
        return;
    }

    if(head->data == value) {
        Node* Last = head->prev;
        Node* del = head;
        head = head->next;
        Last->next = head;
        delete del;
        return;

    }
    Node* current = head->neaxt;
    while (current != head && current->data != value) {
        temp = current;
        current = current->next;
    }

    if (current == head) {
        cout << "value not found in the List." << endl;
        return;
    }

    current->prev->next = current->next;
    currrent->next->prev = current->prev;
    delete current;
        
}


void displayForward() {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }

    Node* temp = head;
    cout << "Forward: ";
    do {
        cout << temp->data << " <-> ";
        temp = temp->next;
    } while (temp != head);
    cout << "(back to head)" << endl;
}

void displayBackward() {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }

    Node* last = head->prev;
    Node* temp = last;
    cout << "Backward: ";
    do {
        cout << temp->data << " <-> ";
        temp = temp->prev;
    } while (temp != last);
    cout << "(back to last)" << endl;
}

// Count and traverse
void traverseAndCount() {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }

    Node* temp = head;
    int count = 0;
    cout << "Traversing: ";
    do {
        cout << temp->data << " ";
        count++;
        temp = temp->next;
    } while (temp != head);
    cout << "\nTotal nodes: " << count << endl;
}

// Main function
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

    deleteNode(100); // Not found

    traverseAndCount();

    return 0;
}
