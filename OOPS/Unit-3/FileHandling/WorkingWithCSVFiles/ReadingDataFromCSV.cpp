#include<iostream>
#include<string>
#include<fstream>
#include<sstream>

using namespace std ;

class Student{
    int regId ;
    string name ;

    public:
        Student(int regId, string name){
            this->regId = regId ;
            this->name = name ;
        }

        static Student FromCSV(string line){
            stringstream ss(line) ;
            string temp ;
            getline(ss, temp, ',') ;
            int regId = stoi(temp) ;
            getline(ss, temp) ;
            return Student(regId, temp) ;
        }


        void Display(){
            cout<<"Student registration Id-> "<<this->regId ;
            cout<<"  Student Name-> "<<this->name<<endl ;
        }
} ;

int main(){
    ifstream readStream("records.csv") ;
    if(!readStream.is_open()){
        cerr<<"Error in opening the file!" ;
        return 0;
    }
    string temp ;
    bool flag= true ;
    while(getline(readStream, temp)){
        if(flag){
            flag = false ;
            continue ;
        }
        Student s = Student::FromCSV(temp) ;
        s.Display() ;
    }
    cout<<"Program ended";
    return 0 ;
}