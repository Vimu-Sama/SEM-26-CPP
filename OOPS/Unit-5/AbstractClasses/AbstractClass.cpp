#include<iostream>

using namespace std ;

class Animal{
    public: 
        virtual void sleeps() = 0;
        void Eats(){
            cout<<"Animal eats!" ;
        }
};

class Dog: public Animal{
    void sleeps(){
        cout<<"Dog sleeps!" ;
    }
};

int main(){
    Dog d ;
    d.Eats() ;
    return 0 ;
}