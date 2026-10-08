#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* frontNode = NULL;
Node* rearNode = NULL;


// Function prototypes
bool isEmpty();
bool isFull();


// Push
void push(int value)
{
    Node* newNode = new Node;

    newNode->data = value;
    newNode->next = NULL;

    if (frontNode == NULL)
    {
        frontNode = newNode;
        rearNode = newNode;
    }
    else
    {
        rearNode->next = newNode;
        rearNode = newNode;
    }
}


// Pop
void pop()
{
    if (isEmpty())
    {
        cout << "Queue is Empty!" << endl;
        return;
    }

    Node* temp = frontNode;

    cout << "Deleted: " << temp->data << endl;

    frontNode = frontNode->next;

    if (frontNode == NULL)
        rearNode = NULL;

    delete temp;
}


// Front
void front()
{
    if (isEmpty())
    {
        cout << "Queue is Empty!" << endl;
        return;
    }

    cout << "Front: " << frontNode->data << endl;
}


// Rear
void rear()
{
    if (isEmpty())
    {
        cout << "Queue is Empty!" << endl;
        return;
    }

    cout << "Rear: " << rearNode->data << endl;
}


// Is Empty
bool isEmpty()
{
    return frontNode == NULL;
}


// Is Full
bool isFull()
{
    return false;
}


int main()
{
    push(10);
    push(20);
    push(30);

    front();    // 10
    rear();     // 30

    pop();      // removes 10

    front();    // 20
    rear();     // 30

    cout << "Empty: " << isEmpty() << endl;
    cout << "Full: " << isFull() << endl;

    return 0;
}