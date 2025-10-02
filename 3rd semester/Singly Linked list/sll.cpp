#include <iostream>
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
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;    
        }
        temp->next = newNode;     
    }
}

void deleteNode(int value) {
    Node* temp = head;
    Node* prev = nullptr;
    if (temp == nullptr) {
        cout << "List is empty." << endl;
        return;
    }
    if (temp->data == value) {
        head = temp->next;
        delete temp;
        return;
    }

    while (temp != nullptr && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Value not found in the list." << endl;
        return;
    }

    prev->next = temp->next;
    delete temp;
}
void display() {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
} 
void traverseAndCount() {
    Node* temp = head;
    int count = 0;
    cout << "Traversing List: ";
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
    cout << "Linked List: ";
    display();
    deleteNode(20);
    cout << "After deleting 20: ";
    display();
    insert(40);
    cout << "After inserting 40: ";
    display();
    deleteNode(10);
    cout << "After deleting 10: ";
    display();
    deleteNode(100);
    traverseAndCount();
    return 0;
}
