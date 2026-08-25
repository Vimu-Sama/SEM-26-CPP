#include<bits/stdc++.h>
using namespace std;

class Student{
    int regId ;
    string name ;
    float cgpa ;
    public :
        Student(int regId, string name, float cgpa){
            this->regId = regId ;
            this->name = name ;
            this->cgpa = cgpa ;
        }
        //function declaration
        void DisplayDetails() ;
};

//non-inline function defintion outside the class
void Student::DisplayDetails(){
    cout<<regId<<name ;
}

int main(){
    Student s(10, "Hello", 8.0) ;
    s.DisplayDetails() ;
    return 0;
}