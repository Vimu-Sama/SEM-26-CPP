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

        //this overrides the equal to assignment operator
        //now, not only does it copies data from other gameobject
        //but also does the deep copy
        Student& operator=(const Student &other){
            this->id = new int(*other.id) ;
            this->name = other.name ;
            return *this ;
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
   //first student object
   Student s1(101, "Raman") ;
   s1.displayDetails() ;
   cout<<"Address-> "<<s1.getAddressOfId()<<endl ;

   //second student object
   Student s2(102, "Anil") ;
   cout<<"\nSecond students details->"<<endl;
   cout<<"\nBefore assignment->\n" ;
   s2.displayDetails() ;
   cout<<"Address-> "<<s2.getAddressOfId()<<endl ;
   //copying the object from one to another
   //you can see the assignment operator overriden function
   //working by using a simple cout statement in class above
   s2=s1 ;
   cout<<"\nAfter assignment->\n" ;
   s2.displayDetails() ;
   cout<<"Address-> "<<s2.getAddressOfId()<<endl ;
   return 0 ; 
}

