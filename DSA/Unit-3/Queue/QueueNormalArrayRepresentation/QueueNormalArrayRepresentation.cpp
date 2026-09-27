#include<iostream>
using namespace std ;

typedef struct {
    int *arr ;
    int front  ;
    int rear ;
    int maxSize ;
} Queue;

void init(Queue &q, int n){
    q.arr = new int[n] ;
    q.front = -1 ;
    q.rear = -1 ;
    q.maxSize = n ;
}

void push(Queue &q, int val){
    if(q.rear==(q.maxSize-1)){
        cout<<"Queue overflow for "<<val<<endl ;
        return ;
    }
    if(q.front==-1){
        q.front= 0 ;
    }
    q.arr[++q.rear] = val ;
}

void pop(Queue &q){
    if(q.rear == (q.front-1) || q.rear==-1){
        cout<<"Queue underflow"<<endl ;
        return ;
    }
    q.front++ ;
}

int front(Queue &q){
    if(q.front==-1){
        cout<<"Empty queue" ;
        return -1 ;
    }
    return q.arr[q.front] ;
}

int rear(Queue &q){
    if(q.rear==-1){
        cout<<"Empty Queue" ;
        return -1 ;
    }
    return q.arr[q.rear] ;
}

bool empty(Queue &q){
    if(q.rear == (q.front-1) || q.rear==-1){
        return true ;
    } else {
        return false ;
    }
}

int main(){
    int n ;
    cin>>n ;
    Queue q ;
    init(q, n) ;
    push(q, 10) ;
    push(q, 20) ;
    push(q, 30) ;
    push(q, 40) ;
    pop(q) ;
    pop(q) ;
    push(q, 80) ;
    while(!empty(q)){
        cout<<front(q)<<" " ;
        pop(q) ;
    }
    pop(q) ;
    return 0 ;
}