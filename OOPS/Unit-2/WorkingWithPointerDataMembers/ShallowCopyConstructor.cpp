#include<iostream>
using namespace std ;

class Student{
    int *id ;
    string name ;

    public:
        Student(int id, string name){
            this->id= new int(id) ;
            this->name = name ;
        }

        void displayDetails(){
            cout<<"Student id-> "<<*id<<endl ;
            cout<<"Student name-> "<<name<<endl ;
        }

        int* getAddressOfId(){
            return id ;
        }
} ;

int main(){
   Student s1(101, "Raman") ;
   //the below statement will do a shallow copy of the 
   //content of the s1 student as by simply reusing the
   //old memory address of id from student s1
   Student s2 = s1 ;
   s1.displayDetails() ;
   cout<<s1.getAddressOfId()<<endl ;
   cout<<"\nSecond students details->"<<endl;
   s2.displayDetails() ;
   //you will notice that how the address was same for 
   //id from both s1 and s2 objects
   //different objects were created but their pointer of
   //id is pointing towards same memory.
   cout<<s2.getAddressOfId()<<endl ;
   return 0 ; 
}

