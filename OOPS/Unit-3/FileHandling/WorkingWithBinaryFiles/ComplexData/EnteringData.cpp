#include<iostream>
#include<fstream>
#include<string>

using namespace std ;

class Student{
    int regId ;
    string name ;
    public:
        Student(int regId, string name): regId(regId), name(name){
            cout<<"Created"<<endl ;
        }
} ;

int main(){
    int i ;
    cin>>i ;
    Student s[] = {
        Student(101, "One"),
        Student(102, "Two") 
    } ;
    ofstream outStream("file.dat", ios::out | ios::binary) ;
    outStream.write(reinterpret_cast<char*>(&s[0]),sizeof(Student)) ;
    outStream.write(reinterpret_cast<char*>(&s[1]), sizeof(Student)) ;
    return 0 ;
}