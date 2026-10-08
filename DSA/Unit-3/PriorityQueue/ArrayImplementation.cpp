#include <iostream>
using namespace std;

struct PriorityQueue {
    int *arr;
    int size;
    int capacity; //maxSize
};

// Initialize Priority Queue
void initialize(PriorityQueue &pq, int capacity) {
    pq.capacity = capacity;
    pq.size = 0;
    pq.arr = new int[capacity];
    //pq.arr = (int*)malloc(sizeof(int) * capacity) ;
}

// Check if empty
bool isEmpty(PriorityQueue &pq) {
    return pq.size == 0;
}

// Check if full
bool isFull(PriorityQueue &pq) {
    return pq.size == pq.capacity;
}

// Insert element
// push()
void enqueue(PriorityQueue &pq, int value) {

    if (isFull(pq)) {
        cout << "Priority Queue is Full\n";
        return;
    }
    //pq.size=0
    pq.arr[pq.size] = value;
    pq.size++;
    //pq.size= 1
    cout << value << " inserted\n";
}

// Remove highest-priority element
//pop()
void dequeue(PriorityQueue &pq) {

    if (isEmpty(pq)) {
        cout << "Priority Queue is Empty\n";
        return;
    }

    // Larger value = higher priority
    int highestPriorityIndex = 0;

    for (int i = 1; i < pq.size; i++) {
        if (pq.arr[i] > pq.arr[highestPriorityIndex]) {
            highestPriorityIndex = i;
        }
    }

    cout << pq.arr[highestPriorityIndex]
         << " removed\n";

    // Shift elements
    for (int i = highestPriorityIndex;i < pq.size - 1; i++) {
        pq.arr[i] = pq.arr[i + 1];
    }

    pq.size--;
}

// View highest-priority element
void peek(PriorityQueue &pq) {

    if (isEmpty(pq)) {
        cout << "Priority Queue is Empty\n";
        return;
    }

    int highestPriorityIndex = 0;

    for (int i = 1; i < pq.size; i++) {
        if (pq.arr[i] > pq.arr[highestPriorityIndex]) {
            highestPriorityIndex = i;
        }
    }

    cout << "Highest Priority Element: "
         << pq.arr[highestPriorityIndex] << endl;
}

// Display
void display(PriorityQueue &pq) {

    if (isEmpty(pq)) {
        cout << "Priority Queue is Empty\n";
        return;
    }

    cout << "Priority Queue: ";

    for (int i = 0; i < pq.size; i++) {
        cout << pq.arr[i] << " ";
    }

    cout << endl;
}

// Free memory
void destroy(PriorityQueue &pq) {
    delete[] pq.arr;
    pq.arr = nullptr;
}


int main() {

    PriorityQueue pq;

    int capacity;

    cout << "Enter size of Priority Queue: ";
    cin >> capacity;

    initialize(pq, capacity);

    enqueue(pq, 30);
    enqueue(pq, 10);
    enqueue(pq, 50);
    enqueue(pq, 20);
    //30,10,50,20
    display(pq);

    peek(pq); //50

    dequeue(pq); //30,10,20

    display(pq);

    dequeue(pq);//10,20

    display(pq);

    destroy(pq);

    return 0;
}