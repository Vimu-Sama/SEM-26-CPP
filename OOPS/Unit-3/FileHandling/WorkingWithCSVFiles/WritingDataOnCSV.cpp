#include<iostream>
#include<string>
#include<fstream>

using namespace std ;

class Student{
    int regId ;
    string name ;

    public:
        Student(int regId, string name){
            this->regId = regId ;
            this->name = name ;
        }

        void toCSV(ofstream &outStream) const{
            string s = to_string(regId);
            s= s+ "," + name + "\n" ;
            outStream<<s ;
        }

        void Display(){
            cout<<"Student registration Id-> "<<this->regId ;
            cout<<"Student Name-> "<<this->name ;
        }
} ;

int main(){
    Student s[] = { 
        Student(101, "Ajay") ,
        Student(102, "Vijay") ,
        Student(103, "Ridhi") ,
        Student(104, "Jaya") ,
        Student(105, "Ram")
    } ;
    ofstream outStream("records.csv") ;
    if(!outStream.is_open()){
        cerr<<"Error in opening the file!" ;
        return 0;
    }
    outStream<<"RegId,Name\n" ;
    for(int i=0;i<5;i++){
        s[i].toCSV(outStream) ;
    }
    return 0 ;
}