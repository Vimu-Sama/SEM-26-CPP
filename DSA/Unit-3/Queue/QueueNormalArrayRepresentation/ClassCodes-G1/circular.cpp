#include<iostream>

using namespace std;

typedef struct {
    int *ar ;
    int currSize ;
    int front ;
    int rear ;
    int maxSize ;
} Queue ;

void init(Queue &q, int totalSize){
    q.ar = (int*)malloc(sizeof(int) * totalSize) ;
    q.currSize = 0 ;
    q.front = -1 ;
    q.rear = -1 ;
    q.maxSize = totalSize ;
}

void push(Queue &q, int val){
    if(q.currSize == q.maxSize){
        cout<<"Queue Overflow!" ;
        return ;
    }
    ++q.rear ;
    q.rear = (q.rear)%q.maxSize ;
    q.ar[q.rear]= val ;
    if(q.front==-1){
        q.front= 0 ;
    }
    q.currSize++ ;
}

void pop(Queue &q){
    if(q.currSize == 0){
        cout<<"Queue Underflow!" ;
    }
    ++q.front ;
    q.front = (q.front)%q.maxSize ;
    q.currSize-- ;
}

bool empty(Queue &q){
    if(q.currSize==0){
        return true ;
    } else {
        return false ;
    }
}

int front(Queue &q){
    if(q.currSize==0){
        cout<<"Queue empty!" ;
        return -1 ;
    }
    return q.ar[q.front] ;
}


int rear(Queue &q){
    if(q.currSize==0){
        cout<<"Queue empty!" ;
        return -1 ;
    }
    return q.ar[q.rear] ;
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