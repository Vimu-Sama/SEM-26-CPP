#include<iostream>
using namespace std ;

class Professor{
    public:
        Professor(){
            cout<<"Cleared Phd"<<endl ;
        }
        ~Professor(){
            cout<<"Failed"<<endl ;
        }
};


class University{
    Professor *p ;
    public:
        University(Professor &other){
            cout<<"University hired professor"<<endl ;
            p = &other ;
        }

        ~University(){
            cout<<"University fired professor"<<endl ;
            p= nullptr ;
        }
};

int main(){
    Professor prof ;
    University u(prof) ;
    return 0;
}







