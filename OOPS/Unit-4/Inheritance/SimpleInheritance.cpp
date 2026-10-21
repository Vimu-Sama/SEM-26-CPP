#include<iostream>
using namespace std ;

class Animal{
    protected:
        int name ;
        int age ;
    public:
        Animal(){
            cout<<"Animal created no argument type constructor\n" ;
        }
        Animal(int name, int age): name(name), age(age){
            cout<<"Animal created"<<endl ;
        }

        int eats(){
            cout<<"Animal eats" ;
        }

        virtual void Eats(){
            cout<<"Animal Eats" ;
        }

        virtual void Display(){
            cout<<"Name-> "<<name ;
            cout<<" Age-> "<<age<<endl ;
        }
} ;

class Dog: public Animal{
    public:
        Dog(int name, int age){
            cout<<"Dog class object created"<<endl ;
            Animal(name, age) ;
        }

        void Eats(){
            cout<<"Dog eats"<<endl ;
        }
};

int main(){
    Dog *d = new Dog(10, 20) ;
    d->Eats() ;
    Animal *a = (Animal*)d ;
    a->Eats() ;
    a->Display() ;
    return 0;
}