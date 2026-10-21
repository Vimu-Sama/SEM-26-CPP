#include<iostream>
#include<cmath>
using namespace std ;

class Counter{
    int count ;

    public:
        Counter(int c): count(c){
            cout<<"Counter intialised"<<endl ;
        }

        void Display(){
            cout<<"Counter: "<<count<<endl ;
        }

        Counter operator+(){
            count = abs(count) ;
            return *this ;
        }

        void operator-(){
            count = count * (-1) ;
        }

        Counter operator!(){
            count = !count ;
            return *this ;
        }
        //Pre-increament
        void operator++(){
            count++ ;
        }

        //Post-increament
        Counter operator++(int){
            Counter temp = *this ;
            count++ ;
            return temp ;
        }

        Counter operator+(const Counter other) const {
            int newReal = this->count + other.count ;
            return Counter(newReal) ;
        }
} ;

int main(){
    Counter first(10) ;
    first = +first ;
    first.Display() ;
    -first ; // you can intialize without assigning it to itself
    first.Display() ;
    first = !first ;
    first.Display() ;
    ++first;
    first.Display() ;
    Counter second = first++;
    first.Display() ;
    cout<<"Second-> " ;
    second.Display() ;
    return 0 ;
}