#include <iostream>
using namespace std;

typedef struct {
    int *ar = nullptr ;
    int top ;
    int size ;
} Stack ;

void initStack(Stack &s, int n){
    s.ar = (int*)malloc(n*sizeof(int)) ;
    for(int i =0;i<n;i++){
        s.ar[i]= 0 ;
    }
    s.top= -1 ;
    s.size = n ;
}

void push(Stack &s, int val){
    if(s.top==s.size-1){
        cout<<"Stack Overflow!" ;
    } else {
        s.top++ ;
        s.ar[s.top] =val ;
        // s[++top] = val ;
    }
}

void pop(Stack &s){
    if(s.top==-1){
        cout<<"Stack Underflow!"<<endl ;
    } else {
        s.top-- ;
    }
}

int top(Stack &s){
    if(s.top==-1){
        return -1 ;
    }
    return s.ar[s.top] ;
}

bool empty(Stack &s){
    if(s.top==-1){
        return true ;
    } 
    return false ;
}

int main() 
{
    int n ;
    cin>>n ;
    Stack s ;
    initStack(s, n) ;
    int temp ;
    for(int i=0;i<n;i++){
        cin>>temp ;
        push(s, temp) ;
    }
    while(!empty(s)){
        cout<<top(s)<<" " ;
        pop(s) ;
    }
    return 0 ;
}

