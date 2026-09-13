#include<iostream>
using namespace std ;

//below we are using double pointer dereferencing(used **) to change the
//the value of the original address
void checkPointerToPointer(int **temp){
    **temp = 5000;
}

//below we are using the double pointer dereferencing(used *) to change
//the address the original was pointing
void changePointerValueAddress(int **temp){
    //this value will not persist as the scope will end with this function 
    //as its on stack frame
    //you have to assign memory on heap to make the value persist
    int p =  -1 ; 
    *temp =  &p;
    //comment the code above and uncomment the code below
    //to try out the persisting value by creating memory on heap
    //*temp = new int(-1) ;
}

void changePointerValueAddressWithPersistValue(int **temp){

}

int main(){
    int a = 100 ;
    int* temp = &a;
    cout<<"Before first function call-> "<<*temp ;
    //note below we passing address of temp below
    //rather than only temp
    checkPointerToPointer(&temp) ;
    cout<<"\nHas value changed after function call-> "<<*temp ;
    cout<<"\nAddress before the address change-> "<<temp ;
    changePointerValueAddress(&temp) ;
    cout<<"\nAddress after the address change-> "<<temp ;
    cout<<"\nValue after address change-> "<<*temp ;
    return 0 ;
}

