#include<iostream>
#include<fstream>

using namespace std;

class Student{
    int regId ;
    string name ;
    public:
        void Display() {
            cout<<"Reg-> "<<regId<<endl ;
            cout<<"Name-> "<<name<<endl ;
        }
} ;

int main(){
    ifstream readStream("file.dat", ios::in | ios::binary) ;
    Student s ;
    Student s2 ;
    // readStream.seekg(sizeof(Student)*2) ;
    readStream.read(reinterpret_cast<char*>(&s), sizeof(Student)) ;
    cout<<readStream.tellg()<<endl ;
    s.Display() ;
    readStream.seekg(-sizeof(Student), ios::end) ;
    cout<<readStream.tellg()<<endl ;
    readStream.read(reinterpret_cast<char*>(&s2), sizeof(Student)) ;
    cout<<readStream.tellg()<<endl ;
    s2.Display() ;
    return 0 ;
}