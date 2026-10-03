#include <iostream>
using namespace std;

class Student{
    int age ;
    string name ;

    public:
        Student(): age(-1), name("NULL"){
            cout<<"Empty constructor called"<<endl ;
        }

        Student(int age, string name): age(age), name(name){
            cout<<"Intialised constructor called"<<endl ;
        }

        void DisplayDetails() ;
} ;

void Student::DisplayDetails(){
    cout<<"Student's Age-> "<<age ;
    cout<<"\nStudent's Name-> "<<name<<endl ;
}

int main() 
{
    Student s1 ;
    s1.DisplayDetails();
    Student s2(20, "John Doe") ;
    s2.DisplayDetails() ;
    return 0;
}