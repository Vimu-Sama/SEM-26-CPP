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

class B: public A{
    public:
        B(){
            cout<<"Class B constructor called!"<<endl ;
        }

        void Display() override{
            cout<<"Display B"<<endl ;
        }
};

class C: public A{
    public:
        C(){
            cout<<"Class C constructor called!"<<endl ;
        }

        void Display() override{
            cout<<"Display C"<<endl ;
        }
};

class D: public B, public C{
    public:
        D(){
            cout<<"Class D constructor called!"<<endl ;
        }

        // void Display() override{
        //     cout<<"Display D"<<endl ;
        // }
};

int main(){
    D d ;
    d.Display() ;
    return 0 ;
}