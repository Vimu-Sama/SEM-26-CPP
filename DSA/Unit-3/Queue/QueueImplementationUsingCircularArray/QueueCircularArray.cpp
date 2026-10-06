#include<iostream>
using namespace std;

typedef struct {
    int *ar ;
    int front ;
    int rear ;
    int maxSize ;
    int elementCount ;
} Queue ;

void init(Queue &q, int n){
    q.ar = (int*)malloc(sizeof(int)*n) ;
    q.front = -1 ;
    q.rear = -1 ;
    q.maxSize = n ;
    q.elementCount= 0 ;
}

void push(Queue &q, int val){
    if(q.elementCount == q.maxSize){
        cout<<"\nQueue overflow"<<endl ;
        return ;
    }
    if(q.rear==-1){
        q.front=0 ;
    }
    q.rear = ((q.rear+1)%(q.maxSize)) ;
    q.ar[q.rear] = val ;
    q.elementCount++ ;
}

void pop(Queue &q){
    if(q.elementCount==0){
        cout<<"\nQueue underflow"<<endl ;
    } else {
        q.front = (q.front+1)%q.maxSize ;
        q.elementCount-- ;
    }
}

int front(Queue &q){
    if(q.elementCount==0){
        cout<<"\nQueue empty!"<<endl ;
        return -1 ;
    }
    return q.ar[q.front] ;
}

int rear(Queue &q){
    if(q.elementCount==0){
        cout<<"\nQueue empty!"<<endl ;
        return -1 ;
    }
    return q.ar[q.rear] ;
}

bool empty(Queue &q){
    if(q.elementCount==0){
        return true ;
    } else {
        return false ;
    }
}


int main(){
    Queue q ;
    int n;
    cout<<"Enter number of elements->" ;
    cin>>n;
    init(q, n) ;
    int temp ;
    for(int i=0;i<n;i++){
        cin>>temp ;
        push(q, temp) ;
    }
    while(!empty(q)){
        cout<<front(q)<<" " ;
        pop(q) ;
    }
    pop(q) ;
    return 0 ;
}