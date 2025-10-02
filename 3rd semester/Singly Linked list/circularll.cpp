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

    if(head == nullptr) {
        head = newNode;
        newNode->next = head; 
    } else {
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next; 
        }
        temp->next = newNode; 
        newNode->next = head; 
    }
    
}

void deleteNode(int value) {
    if(head == nullptr) {
        cout << "list is empty." << endl;
        return;

    }
    Node* temp = head;
    Node* prev = nullptr;

    if(head->data == value && head->next == head) {
        delete head;
        head = nullptr;
        return;
    }

    if(head->data == value) {
        while(temp->next != head) {
            temp = temp->next;
        }
        Node* toDelete = head;
        head = head->next;
        temp->next = head;
        delete toDelete;
        return;
    }



do{
    prev = temp;
    temp = temp->next;

    if(temp->data == value) {
        prev->next = temp->next;
        delete temp;
        return;
    }
} 
while(temp != head && temp->next != head);
}


void display() {
    if(head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }
    
    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while(temp != head);
    
    cout << "(back to head)" << endl;
}

void traverseAndCount() {
    Node* temp = head;
    int count = 0;

    if(temp == nullptr) {
        cout << "List is empty." << endl;
        return;
    }

    do {
        cout << temp->data << " ";
        temp = temp->next;
        count++;
    } while(temp != head);

    cout << "\nTotal nodes: " << count << endl;
}



int main(){
    insert(10);
    insert(20);
    insert(30);
    cout << "After inserting 10, 20, 30:" << endl;
    display();

    deleteNode(20);
    cout << "After deleting 20:" << endl;
    display();

    insert(40);
    cout << "After inserting 40:" << endl;
    display();

    deleteNode(10);
    cout << "After deleting 10:" << endl;
    display();
    traverseAndCount();
    return 0;
}