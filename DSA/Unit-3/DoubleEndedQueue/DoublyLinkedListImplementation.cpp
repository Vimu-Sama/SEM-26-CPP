#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

struct Deque {
    Node* front;
    Node* rear;
    int size;
};

// Initialize Deque
void initialize(Deque &dq) {
    dq.front = nullptr;
    dq.rear = nullptr;
    dq.size = 0;
}

// Check if empty
bool isEmpty(Deque &dq) {
    return dq.size == 0;
}

// Insert at front
void insertFront(Deque &dq, int value) {

    Node* newNode = new Node;

    newNode->data = value;
    newNode->prev = nullptr;
    newNode->next = nullptr;

    // Empty Deque
    if (isEmpty(dq)) {

        dq.front = newNode;
        dq.rear = newNode;

    }
    else {

        newNode->next = dq.front;
        dq.front->prev = newNode;

        dq.front = newNode;
    }

    dq.size++;
}

// Insert at rear
void insertRear(Deque &dq, int value) {

    Node* newNode = new Node;

    newNode->data = value;
    newNode->prev = nullptr;
    newNode->next = nullptr;

    // Empty Deque
    if (isEmpty(dq)) {

        dq.front = newNode;
        dq.rear = newNode;

    }
    else {

        newNode->prev = dq.rear;
        dq.rear->next = newNode;

        dq.rear = newNode;
    }

    dq.size++;
}

// Delete from front
void deleteFront(Deque &dq) {

    if (isEmpty(dq)) {
        cout << "Deque is Empty\n";
        return;
    }

    Node* temp = dq.front;

    cout << temp->data
         << " deleted from front\n";

    // Only one element
    if (dq.front == dq.rear) {

        dq.front = nullptr;
        dq.rear = nullptr;

    }
    else {

        dq.front = dq.front->next;
        dq.front->prev = nullptr;
    }

    delete temp;

    dq.size--;
}

// Delete from rear
void deleteRear(Deque &dq) {

    if (isEmpty(dq)) {
        cout << "Deque is Empty\n";
        return;
    }

    Node* temp = dq.rear;

    cout << temp->data
         << " deleted from rear\n";

    // Only one element
    if (dq.front == dq.rear) {

        dq.front = nullptr;
        dq.rear = nullptr;

    }
    else {

        dq.rear = dq.rear->prev;
        dq.rear->next = nullptr;
    }

    delete temp;

    dq.size--;
}

// Get front element
void getFront(Deque &dq) {

    if (isEmpty(dq)) {
        cout << "Deque is Empty\n";
        return;
    }

    cout << "Front: "
         << dq.front->data << endl;
}

// Get rear element
void getRear(Deque &dq) {

    if (isEmpty(dq)) {
        cout << "Deque is Empty\n";
        return;
    }

    cout << "Rear: "
         << dq.rear->data << endl;
}

// Display Deque
void display(Deque &dq) {

    if (isEmpty(dq)) {
        cout << "Deque is Empty\n";
        return;
    }

    Node* temp = dq.front;

    cout << "Deque: ";

    while (temp != nullptr) {

        cout << temp->data << " ";

        temp = temp->next;
    }

    cout << endl;
}

// Free memory
void destroy(Deque &dq) {

    Node* temp;

    while (dq.front != nullptr) {

        temp = dq.front;

        dq.front = dq.front->next;

        delete temp;
    }

    dq.rear = nullptr;
    dq.size = 0;
}


int main() {

    Deque dq;

    initialize(dq);

    insertRear(dq, 10);
    insertRear(dq, 20);
    insertRear(dq, 30);

    display(dq);

    insertFront(dq, 5);

    display(dq);

    deleteFront(dq);

    display(dq);

    deleteRear(dq);

    display(dq);

    getFront(dq);
    getRear(dq);

    destroy(dq);

    return 0;
}