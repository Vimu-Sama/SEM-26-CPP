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
 
        //this is a MOVE ASSIGNMENT OPERATOR
        //it is called when both objects already exist
        //and we want to transfer the resources of one object
        //to another existing object
        //
        //Example:
        //s2 = move(s1) ;
        //
        //Here s1 already exists and s2 already exists,
        //so this is assignment, not construction
        //
        //Student& means the function returns a reference
        //to the current object (s2 in this case)
        Student& operator=(Student &&other){ 

            //transfer the address stored in other.id to this->id
            //we are NOT copying the actual integer value
            //we are simply transferring ownership of the memory
            this->id = other.id ; 

            //copy the name from the source object
            this->name = other.name ; 

            //make the source object stop pointing to the memory
            //this prevents both objects from pointing to the same memory
            other.id = nullptr ; 

            //return a reference to the current object
            //here *this refers to s2
            //returning Student& avoids creating another Student object
            //and also allows assignment chaining such as: s3 = s2 = move(s1)
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
   //s2 already exists before the assignment
   Student s2(102, "Anil") ; 
   cout<<"\nSecond students details->"<<endl;
   cout<<"\nBefore assignment->\n" ; 
   s2.displayDetails() ; 
   cout<<"Address-> "<<s2.getAddressOfId()<<endl ; 

   //both s1 and s2 already exist
   //therefore this is MOVE ASSIGNMENT
   //
   //move(s1) treats s1 as an rvalue
   //so the move assignment operator is selected:
   //
   //s2.operator=(move(s1))
   //
   //the resources owned by s1 are transferred to s2
   s2= move(s1) ; 

   cout<<"\nAfter assignment->\n" ; 

   //s2 now owns the memory that originally belonged to s1
   //therefore s2 contains id = 101 and name = "Raman"
   s2.displayDetails() ; 

   cout<<"Address-> "<<s2.getAddressOfId()<<endl ; 

   return 0 ;  
}