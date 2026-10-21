#include<iostream>
using namespace std ;

class ComplexNumber{
    int real ;
    int imag ;

    public:
        ComplexNumber(int real, int imag): real(real), imag(imag){
            cout<<"Complex Number created\n" ;
        }

        //For addition using +
        ComplexNumber operator+(const ComplexNumber other) const {
            int newReal = this->real + other.real ;
            int newImag = this->imag + other.imag ;
            return ComplexNumber(newReal, newImag) ;
        }

        //For subtraction using -
        ComplexNumber operator-(const ComplexNumber other) const {
            int newReal = this->real - other.real ;
            int newImag = this->imag - other.imag ;
            return ComplexNumber(newReal, newImag) ;
        }

        void Display(){
            cout<<real<<"+"<<imag<<"i" ;
        }
} ;

int main(){
    ComplexNumber a(5, 6) ;
    ComplexNumber b(5, 4) ;
    ComplexNumber c = a+b ;
    c.Display() ;
    return 0;
}