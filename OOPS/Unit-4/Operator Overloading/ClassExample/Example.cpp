#include<iostream>
using namespace std ;

class ComplexNum{
    
    public:
        int real ;
        int imag ;

        ComplexNum(int r, int i): real(r), imag(i){
            cout<<"Complex Number created!\n" ;
        }

        

        void Display(){
            cout<<real<<"+"<<imag<<"i\n" ;
        }
} ;

ComplexNum operator+(const ComplexNum first, ComplexNum &other){
        ComplexNum c(0,0) ;
        c.real= first.real + other.real ;
        c.imag = first.imag + other.imag ;
        return c ;
}

int main(){
    ComplexNum a(5,10 ) ;
    ComplexNum b(5, 10) ;
    ComplexNum c = a+b ;
    c.Display() ;
    return 0 ;
}




