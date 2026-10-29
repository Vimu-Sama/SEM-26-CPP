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

class E: public B, public C{
    public:
        E(){
            cout<<"Class E constructor called"<<endl ;
        }

        void Display(){
            C::Display() ;
        }
};

int main(){
    D d ;
    //resolution using scope
    d.B::Display() ;

    //resolution in class itself
    E e ;
    e.Display() ;
    return 0 ;


}