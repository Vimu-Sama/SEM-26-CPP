#include<iostream>
using namespace std ;

class Example{
    string name ;
    public:
        Example(string name): name(name) {
            cout<<name<<" is the name"<<endl ;
        }

        ~Example(){
            cout<<name<<" object was destroyed"<<endl ;
        }
};


void func(){

}

int main(){
    cout<<"Main"<<endl ;
    static Example e1("Static main e1") ;
    Example e2("Local e2");
    static Example e3("Static main e3") ;
    Example e4("Local e4");
    cout<<"Main ended here"<<endl ;
    return 0 ;
}

Example e("Global ") ;


// Global  is the name
// Main
// Static main e1 is the name
// Local e2 is the name
// Static main e3 is the name
// Local e4 is the name
// Main ended here
// Local e4 object was destroyed
// Local e2 object was destroyed
// Static main e3 object was destroyed
// Static main e1 object was destroyed
// Global  object was destroyed




