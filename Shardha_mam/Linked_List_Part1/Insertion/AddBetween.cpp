#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;


    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

class list
{
    Node* head;
    Node* tail;

public:
    list()
    {
        head = nullptr;
        tail = nullptr;
    }
    void push_front(int val){
        Node *newNode = new Node(val); // dyanmic memory allocation
        if (head == nullptr)
        {
            head = tail = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val){
        Node *newNode = new Node(val); // dyanmic memory allocation
        if (head == nullptr)
        {
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    void printList() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " --> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
 
    void insert(int val, int pos){
        Node* newNode  = new Node(val);
          Node* temp = head;
        for(int i=0;i<pos-1;i++){
            if(temp == NULL){
                cout << "position is invalid\n";
                return;
            }
            temp = temp->next;
        }
    newNode->next = temp->next;
    temp->next = newNode;
    }
};

int main()
{
    list ll;

    ll.push_front(10);
    ll.push_front(30);
    ll.push_back(40);
    ll.push_back(50);   
    ll.printList();
    ll.insert(100,2);
        ll.printList();

    return 0;
}