#include <iostream>
using namespace std;

typedef struct {
    int *ar = nullptr ;
    int top ;
    int size ;
} Stack ;

void initialization(Stack *s, int n){
    s->ar= new int[n] ;
    s->size = n ;
    for(int i=0;i<n-1;i++){
        s->ar[i]= 0 ;
    }
    s->top= -1 ;
}

void push(Stack *s, int val){
    if(s->top==(s->size)-1){
        cout<<"Stack Overflow" ;
        return ;
    }
    s->ar[++s->top] = val;
}

void pop(Stack *s){
    if(s->top==-1){
        cout<<"Stack Underflow" ;
        return ;
    }
    s->ar[s->top]==0 ;
    (s->top)-- ;
}

bool isEmpty(Stack *s){
    if(s->top==-1){
        return true ;
    } else {
        return false ;
    }
}

int top(Stack *s){
    if(s->top==-1){
        cout<<"Stack is empty"<<endl ;
        return -1 ;
    }
    return s->ar[s->top];
}

int main() 
{
    int n ;
    cin>>n ;
    Stack *s= (Stack*)malloc(sizeof(Stack)) ;
    initialization(s, n) ;
    int temp ;
    for(int i=0;i<n;i++){
        cin>>temp ;
        push(s, temp) ;
    }
    cout<<endl ;
    while(!isEmpty(s)){
        cout<<top(s) ;
        cout<<" " ;
        pop(s) ;
    }
    return 0;
}