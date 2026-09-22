#include <iostream>
using namespace std;

typedef struct ListNode {
    int data ;
    ListNode *next ;
} ListNode ;

typedef struct {
    ListNode *top= nullptr ;
} Stack ;

void initialization(Stack *s){
    s->top=nullptr ;
}

void push(Stack *s, int val){
    ListNode *temp = (ListNode*)malloc(sizeof(ListNode)) ;
    temp->data = val ;
    temp->next = s->top ;
    s->top = temp ;
}

void pop(Stack *s){
    if(s->top==nullptr){
        cout<<"Stack Underflow" ;
    } else {
        ListNode *temp = s->top ;
        s->top= s->top->next ;
        free(temp) ;
        temp = nullptr ;
    }
}

bool isEmpty(Stack *s){
    if(s->top==nullptr){
        return true ;
    } else {
        return false ;
    }
}

int top(Stack *s){
    if(s->top==nullptr){
        cout<<"Stack is empty"<<endl ;
        return -1 ;
    }
    return s->top->data ;
}

int main() 
{
    int n ;
    cin>>n ;
    Stack *s = (Stack*)malloc(sizeof(Stack)) ;
    initialization(s) ;
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