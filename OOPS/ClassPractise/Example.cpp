#include<iostream>
using namespace std ;

class Weight{
    int kg ;
    int gms ;

    public:
        Weight(int k, int g): kg(k), gms(g){
        }

        void WeightNormalize(int &temp){
            if(this->gms>=1000){
                this->gms -= 1000 ;
                temp = 1 ;
            }
        }

        Weight operator+(const Weight &other) const {
            Weight w(0,0) ;
            int temp = 0 ;
            w.gms = this->gms + other.gms ;
            w.WeightNormalize(temp) ;
            w.kg = this->kg + other.kg + temp ;
            return w ;
        }

        void operator++(int){
            int temp = 0;
            this->gms+= 100 ;
            WeightNormalize(temp) ;
            this->kg += temp ;
        }

        operator double() const{
            double kgPart = (double) this->kg ;
            double gmPart = ((double)this->gms)/1000 ;
            return kgPart + gmPart ;
        }

        void Display(){
            cout<<"Weight-> "<<kg<<"kg "<<gms<<" gms."<<endl ;
        }
};


int main(){
    Weight a(1, 800) ;
    Weight b(2, 900) ;
    Weight w = a + b ;
    w.Display() ;
    b++ ;
    b.Display() ;
    double d = (double) a ;
    cout<<"Double object-> "<<d<<" kg"<<endl ;
    return 0 ;
}







