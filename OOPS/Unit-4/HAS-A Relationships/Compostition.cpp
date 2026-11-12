#include <iostream>
using namespace std;

class Engine{
    public:
        Engine(){
            cout<<"Engine created"<<endl ;
        }

        ~Engine(){
            cout<<"Engine destroyed"<<endl ;
        }
} ;

class Car{
    Engine e ;
    public:
        Car(){
            cout<<"Car created!"<<endl ;
        }
        ~Car(){
            cout<<"Car destroyed"<<endl ;
        }
};

int main() 
{
    Car c ;
    return 0;
}