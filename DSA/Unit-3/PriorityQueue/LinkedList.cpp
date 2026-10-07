#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

struct PriorityQueue {
    Node* front;
    int size;
};

// Initialize Priority Queue
void initialize(PriorityQueue &pq) {
    pq.front = nullptr;
    pq.size = 0;
}

// Check if empty
bool isEmpty(PriorityQueue &pq) {
    return pq.front == nullptr;
}

// Insert element
void enqueue(PriorityQueue &pq, int value) {

    Node* newNode = new Node;

    newNode->data = value;
    newNode->next = nullptr;

    // Case 1: Empty queue
    if (pq.front == nullptr) {

        pq.front = newNode;
        pq.size++;

        return;
    }

    // Case 2: New element has highest priority
    if (value > pq.front->data) {

        newNode->next = pq.front;
        pq.front = newNode;
        pq.size++;

        return;
    }

    // Case 3: Find correct position
    Node* temp = pq.front;

    while (temp->next != nullptr &&
           temp->next->data >= value) {

        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    pq.size++;
}

// Remove highest-priority element
void dequeue(PriorityQueue &pq) {

    if (isEmpty(pq)) {
        cout << "Priority Queue is Empty\n";
        return;
    }

    Node* temp = pq.front;

    cout << temp->data << " removed\n";

    pq.front = pq.front->next;

    delete temp;

    pq.size--;
}

// View highest-priority element
void peek(PriorityQueue &pq) {

    if (isEmpty(pq)) {
        cout << "Priority Queue is Empty\n";
        return;
    }

    cout << "Highest Priority Element: "
         << pq.front->data << endl;
}

// Display Priority Queue
void display(PriorityQueue &pq) {

    if (isEmpty(pq)) {
        cout << "Priority Queue is Empty\n";
        return;
    }

    Node* temp = pq.front;

    cout << "Priority Queue: ";

    while (temp != nullptr) {

        cout << temp->data << " ";

        temp = temp->next;
    }

    cout << endl;
}

// Free memory
void destroy(PriorityQueue &pq) {

    Node* temp;

    while (pq.front != nullptr) {

        temp = pq.front;

        pq.front = pq.front->next;

        delete temp;
    }

    pq.size = 0;
}


int main() {

    PriorityQueue pq;

    initialize(pq);

    enqueue(pq, 30);
    enqueue(pq, 10);
    enqueue(pq, 50);
    enqueue(pq, 20);

    display(pq);

    peek(pq);

    dequeue(pq);

    display(pq);

    dequeue(pq);

    display(pq);

    destroy(pq);

    return 0;
}