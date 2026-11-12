#include<iostream>
#include<memory>

using namespace std ;

int main(){
    shared_ptr<int> ptr1 = make_shared<int>(10) ;
    weak_ptr<int> ptr2 = ptr1 ;
    if(shared_ptr<int> temp = ptr2.lock()){
        cout<<"temp-> "<<*temp ;
    } else {
        cout<<"No pointers there!" ;
    }
    return 0 ;
}