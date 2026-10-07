#include <iostream>
using namespace std;

struct Deque {
    int *arr;
    int front;
    int rear;
    int size;
    int capacity;
};

// Initialize Deque
void initialize(Deque &dq, int capacity) {

    dq.capacity = capacity;
    dq.size = 0;

    dq.front = -1;
    dq.rear = -1;

    dq.arr = new int[capacity];
}

// Check if empty
bool isEmpty(Deque &dq) {
    return dq.size == 0;
}

// Check if full
bool isFull(Deque &dq) {
    return dq.size == dq.capacity;
}

// Insert at front
void insertFront(Deque &dq, int value) {

    if (isFull(dq)) {
        cout << "Deque is Full\n";
        return;
    }

    // First element
    if (isEmpty(dq)) {

        dq.front = 0;
        dq.rear = 0;

        dq.arr[dq.front] = value;

        dq.size++;

        return;
    }

    // Move front backwards circularly
    dq.front = (dq.front - 1 + dq.capacity)
               % dq.capacity;

    dq.arr[dq.front] = value;

    dq.size++;
}

// Insert at rear
void insertRear(Deque &dq, int value) {

    if (isFull(dq)) {
        cout << "Deque is Full\n";
        return;
    }

    // First element
    if (isEmpty(dq)) {

        dq.front = 0;
        dq.rear = 0;

        dq.arr[dq.rear] = value;

        dq.size++;

        return;
    }

    // Move rear forward circularly
    dq.rear = (dq.rear + 1)
              % dq.capacity;

    dq.arr[dq.rear] = value;

    dq.size++;
}

// Delete from front
void deleteFront(Deque &dq) {

    if (isEmpty(dq)) {
        cout << "Deque is Empty\n";
        return;
    }

    cout << dq.arr[dq.front]
         << " deleted from front\n";

    // Only one element
    if (dq.size == 1) {

        dq.front = -1;
        dq.rear = -1;

        dq.size--;

        return;
    }

    // Move front forward
    dq.front = (dq.front + 1)
               % dq.capacity;

    dq.size--;
}

// Delete from rear
void deleteRear(Deque &dq) {

    if (isEmpty(dq)) {
        cout << "Deque is Empty\n";
        return;
    }

    cout << dq.arr[dq.rear]
         << " deleted from rear\n";

    // Only one element
    if (dq.size == 1) {

        dq.front = -1;
        dq.rear = -1;

        dq.size--;

        return;
    }

    // Move rear backwards
    dq.rear = (dq.rear - 1 + dq.capacity)
              % dq.capacity;

    dq.size--;
}

// Get front element
void getFront(Deque &dq) {

    if (isEmpty(dq)) {
        cout << "Deque is Empty\n";
        return;
    }

    cout << "Front: "
         << dq.arr[dq.front] << endl;
}

// Get rear element
void getRear(Deque &dq) {

    if (isEmpty(dq)) {
        cout << "Deque is Empty\n";
        return;
    }

    cout << "Rear: "
         << dq.arr[dq.rear] << endl;
}

// Display Deque
void display(Deque &dq) {

    if (isEmpty(dq)) {
        cout << "Deque is Empty\n";
        return;
    }

    cout << "Deque: ";

    int index = dq.front;

    for (int i = 0; i < dq.size; i++) {

        cout << dq.arr[index] << " ";

        index = (index + 1)
                % dq.capacity;
    }

    cout << endl;
}

// Free memory
void destroy(Deque &dq) {

    delete[] dq.arr;

    dq.arr = nullptr;
    dq.front = -1;
    dq.rear = -1;
    dq.size = 0;
}


int main() {

    Deque dq;

    int capacity;

    cout << "Enter size of Deque: ";
    cin >> capacity;

    initialize(dq, capacity);

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