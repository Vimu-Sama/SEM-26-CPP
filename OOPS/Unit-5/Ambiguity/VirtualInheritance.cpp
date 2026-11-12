#include<iostream>

using namespace std ;

class A{
    int count ;
    public:
        A(){
            cout<<"Class A constructor called!"<<endl ;
        }

        virtual void Display(){
            cout<<"Display A"<<endl ;
        }
};

//virtual inheritance
class B: virtual public A{
    public:
        B(){
            cout<<"Class B constructor called!"<<endl ;
        }
};

//virtual inheritance
class C: virtual public A{
    public:
        C(){
            cout<<"Class C constructor called!"<<endl ;
        }
};

class D: public B, public C{
    public:
        D(){
            cout<<"Class D constructor called!"<<endl ;
        }
};

int main(){
    D d ;
    d.Display() ;
    return 0 ;
}