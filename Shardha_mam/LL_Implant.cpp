#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

class list
{
    Node *head;
    Node *tail;

public:
    list()
    {
        head = nullptr;
        tail = nullptr;
    }
    void push_front(int val)
    {
        Node *newNode = new Node(val); // dyanmic memory allocation
        if (head == nullptr)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val); // dyanmic memory allocation
        if (head == nullptr)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    void printList()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "NULL\n"; // To indicate the end of the list
    }

    void insert(int val, int pos)
    {
        Node *newNode = new Node(val); // dynamic memory allocation

        Node *temp = head;
        for (int i = 0; i < pos - 1; i++){
            if (temp == nullptr) {
                cout << "Position out of INVALID\n";
                delete newNode; // Clean up memory if position is invalid
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
    ll.push_front(20);
    ll.push_front(30);
    ll.push_back(40);
    ll.push_back(50);
    ll.printList();
    ll.insert(25, 2); 
    return 0;
}