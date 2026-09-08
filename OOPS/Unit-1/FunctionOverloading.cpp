#include<bits/stdc++.h>
using namespace std ;

class Student{
    int regId ;
    string name ;
    int marks ;
    char section ;

    public:
        Student(){
            regId = -1 ;
            name = "" ;
            section= '\0' ;
            cout<<"Student was created" ;
        }
        Student(int regId){
            name= "John Doe" ;
            this->regId = regId ;
            section= '\0' ;
        }

        Student(int regId, string name){
            this->regId = regId ;
            this->name = name ;
            section = 'A' ;
        }

        Student(string name, int regId){
            this->regId = regId ;
            this->name = name ;
            this->section= 'B' ;
        }

        void Display() ;

} ;

void Student::Display(){
    cout<<"\nName-> "<<name;
    cout<<"\nRegId-> "<<regId ;
    cout<<"\nSection-> "<<section ;
}

int main(){
    Student s1 ;
    Student s2(1) ;
    Student s3(2, "Ankit") ;
    Student s4("Pankaj", 3) ;
    s1.Display() ;
    s2.Display() ;
    s3.Display() ;
    s4.Display() ;
    return 0 ;
}