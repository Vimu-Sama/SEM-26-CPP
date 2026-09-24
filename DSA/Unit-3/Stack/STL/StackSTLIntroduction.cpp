#include<iostream>
#include<stack>

using namespace std; 

//main functions in Stack STL are->
// push(dataType val)
// pop()
// empty()
// top() 

int main(){
    stack<int> s ;
    s.push(10) ;
    s.push(12) ;
    s.push(13) ;
    s.push(14) ;
    s.push(15) ;
    while(!s.empty()){
        cout<<s.top()<<" " ;
        s.pop() ;
    }
    return 0 ;
}