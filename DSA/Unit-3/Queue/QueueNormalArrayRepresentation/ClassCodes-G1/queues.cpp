#include<iostream>
using namespace std;

typedef struct {
    int *ar ;
    int front ;
    int rear ;
    int size ;
} Queue ;

void init(Queue &q, int n){
    q.ar = new int[n] ;
    q.front = -1 ;
    q.rear = -1 ;
    q.size = n ;
}

void push(Queue &q, int val){
    if(q.rear == q.size-1){
        cout<<"Overflow!" ;
        return ;
    }
    q.ar[++q.rear]= val;
    if(q.front==-1){
        q.front++ ;
    }
}

void pop(Queue &q){
    if(q.front==-1 || q.front>q.rear){
        cout<<"Underflow!" ;
        return ;
    }
    q.front++ ;
}

bool empty(Queue &q){
    if(q.front==-1 || q.front>q.rear){
        return true ;
    }
    return false ;
}

int size(Queue &q){
    if(q.front==-1){
        return 0;
    }
    return (q.rear-q.front+1) ;
}

int front(Queue &q){
    if(q.front==-1){
        cout<<"The queue is empty!" ;
        return -1 ;
    }
    return q.ar[q.front] ;
}

int rear(Queue &q){
    if(q.rear==-1){
        cout<<"The queue is empty!" ;
        return -1 ;
    }
    return q.ar[q.rear];
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