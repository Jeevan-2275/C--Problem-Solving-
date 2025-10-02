#include <iostream>
using namespace std;

#define SIZE 5
int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == SIZE - 1) {
        cout << "Queue is Full!" << endl;
    } else {
        if (front == -1) front = 0; 
        rear++;
        queue[rear] = value;
        cout << value << " added to the queue." << endl;
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue is Empty!" << endl;
    } else {
        cout << queue[front] << " removed from the queue." << endl;
        front++;
    }
}

void peek() {
    if (front == -1 || front > rear) {
        cout << "Queue is Empty!" << endl;
    } else {
        cout << "Front element: " << queue[front] << endl;
    }
}

void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is Empty!" << endl;
    } else {
        cout << "Queue: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();       

    dequeue();       
    display();      

    peek();           

    enqueue(40);
    enqueue(50);
    enqueue(60);      
    display();       

    return 0;
}
