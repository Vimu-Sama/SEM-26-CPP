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

        //this is a move constructor, NOT the assignment operator
        //it is called when a NEW object is created using an existing
        //object with move(), for example: Student s2 = move(s1)
        //instead of copying the dynamically allocated memory,
        //we transfer the address from the old object to the new object
        Student (Student &&other){

            //copy the address stored in other.id
            //no new memory is created and the actual integer is not copied
            this->id = other.id ;

            //copy the name from the old object
            this->name = other.name ;

            //make the old object stop pointing to the memory
            //this prevents both objects from owning the same memory
            other.id = nullptr ;
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
   //s2 is a NEW object, so the move constructor is called
   //move(s1) tells C++ to treat s1 as an rvalue
   //the resources of s1 can now be transferred to s2
   Student s2 = move(s1) ;

   cout<<"\nSecond students details->"<<endl;

   cout<<"\nBefore assignment->\n" ;

   //s2 now owns the memory that originally belonged to s1
   s2.displayDetails() ;

   cout<<"Address-> "<<s2.getAddressOfId()<<endl ;

   cout<<"\nAfter assignment->\n" ;

   //s1.id was changed to nullptr inside the move constructor
   //so s1 no longer owns the dynamically allocated memory
   //
   //NOTE: calling displayDetails() here dereferences nullptr
   //and can cause a crash
   s1.displayDetails() ;

   cout<<"Address-> "<<s2.getAddressOfId()<<endl ;

   return 0 ; 
}