
#include <iostream>
using namespace std;

#define SIZE 5
int queue[SIZE];
int front = -1, rear = -1;

bool isFull() {
    return (front == (rear + 1) % SIZE);
}

bool isEmpty() {
    return (front == -1);
}

void enqueue(int value) {
    if (isFull()) {
        cout << "Queue is Full!" << endl;
        return;
    }

    if (isEmpty()) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % SIZE;
    }

    queue[rear] = value;
    cout << value << " added to the queue." << endl;
}

void dequeue() {
    if (isEmpty()) {
        cout << "Queue is Empty!" << endl;
        return;
    }

    cout << queue[front] << " removed from the queue." << endl;

    if (front == rear) {
        // Queue has only one element
        front = rear = -1;
    } else {
        front = (front + 1) % SIZE;
    }
}

void peek() {
    if (isEmpty()) {
        cout << "Queue is Empty!" << endl;
    } else {
        cout << "Front element: " << queue[front] << endl;
    }
}

void display() {
    if (isEmpty()) {
        cout << "Queue is Empty!" << endl;
        return;
    }

    cout << "Queue: ";
    int i = front;
    while (true) {
        cout << queue[i] << " ";
        if (i == rear) break;
        i = (i + 1) % SIZE;
    }
    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    display();

    dequeue();
    dequeue();
    display();

    enqueue(50);
    enqueue(60);
    display();

    enqueue(70);  // Should show "Queue is Full!"

    peek();

    return 0;
}
