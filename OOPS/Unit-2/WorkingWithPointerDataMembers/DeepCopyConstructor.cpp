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

        //Copy constructor
        Student(const Student &other){
            //Point where deep copy was created
            this->id = new int(*other.id) ;
            this->name = other.name ;
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
   //the below statement will do a deep copy
   //as we have implemented the copy constructor to handle this
   Student s2 = s1 ;
   s1.displayDetails() ;
   cout<<s1.getAddressOfId()<<endl ;
   cout<<"\nSecond students details->"<<endl;
   s2.displayDetails() ;
   //we will notice that how the address are different for 
   //id from both s1 and s2 objects
   //different objects were created 
   //and copy constructor handled the issue of
   //shallow copy
   cout<<s2.getAddressOfId()<<endl ;
   return 0 ; 
}

