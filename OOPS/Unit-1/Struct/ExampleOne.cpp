#include<bits/stdc++.h>
using namespace std ;


//Struct has separate memory blocks for different data members unlike unions


//A struct is like a class but with only differences-
//  1- the member variables and functions are public by default
//  2- the reason it was made was to group different datas


struct Animal{
    string species ;
    string sound;
    string color ;
    int age ;
        
    public:

        //getter for species
        string GetSpecies(){
            return species ;
        }

        int getAge(){
            return age;
        }

        string getColor(){
            return color ;
        }

        //setter
        void setColor(string s){
            color = s ;
        }

        void setAge(int a){
            age=a ;
        }

        void Sleeps(){
            cout<<"The "<<species<<" is sleeping..." ;
        }

        void Eats(){
            cout<<"The "<<species<<" is eating." ;
        }
        
};

int main(){
    Animal a  ;
    a.species= "Dog" ;
    a.Sleeps() ;
    return 0;
}