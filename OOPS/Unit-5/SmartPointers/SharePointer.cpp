#include<iostream>
#include<memory>

using namespace std ;

int main(){
    shared_ptr<int> ptr1 = make_shared<int>(100) ;
    {
        shared_ptr<int> ptr2 = ptr1 ;
        cout<<"ptr count-> "<<ptr1.use_count()<<endl ;
    }
    cout<<"ptr count-> "<<ptr1.use_count()<<endl ;
    cout<<*ptr1<<endl ;
    return 0 ;
}