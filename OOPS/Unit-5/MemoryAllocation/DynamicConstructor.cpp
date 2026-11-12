#include<iostream>

using namespace std ;

class Student{
    int id ;
    string name ;
    
    public:
        Student(){
            id = 0;
            name= "" ;
        }

        Student(int i, string n): id(i), name(n){
        }

        void InsertStudentDetails(int id, string name){
            this->id = id ;
            this->name = name ;   
        }

        void Display(){
            cout<<"Student Id-> "<<id<<endl ;
            cout<<"Student Name-> "<<name<<endl ;
        }
};

class StudentManager{
    Student *s= nullptr ;
    int count= 0;

    public:
        //dynamic constructor
        StudentManager(int n){
            s = new Student[n] ;
            count= n ;
        }

        void DisplayAllStudents(){
            for(int i=0;i<count;i++){
                s[i].Display();
                cout<<endl ;
            }
        }
        
        ~StudentManager(){
            delete[] s ;
            s= nullptr ;
        }
};







