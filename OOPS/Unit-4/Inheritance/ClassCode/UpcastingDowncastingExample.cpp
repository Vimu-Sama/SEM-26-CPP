#include<iostream>
using namespace std ;

class Animal{
    public:
        string color ;
        int age ;

    Animal(){
        cout<<"Default constructor called"<<endl ;
    }

    Animal(string c, int a): color(c), age(a){
        cout<<"Animal created"<<endl ;
    }
    
    virtual void eats(){
        cout<<"Animal eats"<<endl ;
    }

    virtual void sleep(){
        cout<<"Animal sleeps!"<<endl ;
    }

    virtual void getData(){
            cout<<"Color-> "<<color<<endl ;
            cout<<"Age-> "<<age<<endl ;
    }
};

class Dog: public Animal{
    private:
        string breed ;
    public:
        Dog(){
            cout<<"Dog default constructor"<<endl ;
        }
        Dog(string s, int a): breed(s), Animal("brown", a){
            cout<<"Overridden constructor called"<<endl ;
        }
        void sleep() override{
            cout<<"Dog Sleeps!"<<endl ;
        }
        void wagsTail(){
            cout<<"Dog wags tail"<<endl ;
        }

        void getData() override{
            cout<<"Breed-> "<<breed<<endl ;
            cout<<"Color-> "<<color<<endl ;
            cout<<"Age-> "<<age<<endl ;
        }
};

int main(){
    Dog d("german shepherd", 5) ;
    //pointer referencing
    Animal *a = &d ;
    a->sleep() ;
    a->getData() ;
    //object slicing
    Animal a2 = d ;
    a2.getData() ;

    //upcasting
    Animal &a3 = d ;
    cout<<"\nUpcasting-> "<<endl ; 
    a3.getData() ;

    //downcasting
    Dog &d2 = (Dog&) a3 ;
    cout<<"\nDowncasting-> "<<endl ; 
    d2.wagsTail() ;

    // Animal &a = d ; //upcasting
    // Dog &b = dynamic_cast<Dog&>(a) ;   //downcasting
    // a.sleep() ;
    // b.sleep() ;
    return  0;
}

