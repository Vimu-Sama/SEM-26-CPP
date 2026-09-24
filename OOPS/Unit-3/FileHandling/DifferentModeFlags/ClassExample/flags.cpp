#include<iostream>
#include<fstream>
#include<string>
using namespace std ;

int main(){
    fstream fileStream("Example.txt", ios::in) ;
    if(!fileStream.is_open()){
        cout<<"File not found!" ;
        return 0 ;
    }
    string s ;
    while(getline(fileStream, s)){
        cout<<s<<endl ;
    }
    fileStream.close() ;
    // fileStream.open("Example.txt", ios::app) ;
    // fileStream<<"\nOverwritten content!" ;
    // fileStream.close() ;
    // return 0 ;
}