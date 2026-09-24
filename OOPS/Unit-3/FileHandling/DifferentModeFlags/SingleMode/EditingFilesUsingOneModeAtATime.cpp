#include<iostream>
#include<fstream>
#include<string>
using namespace std ;

int main(){
    fstream fileStream ;
    fileStream.open("ExampleFileText.txt", ios::out) ;
    fileStream<<"This is a new file! Right now we are only creating and writing on that file, treating it as completely new!"
    <<"This is the start of example!\n" ;
    fileStream.close() ;

    fileStream.open("ExampleFileText.txt", ios::in) ;
    cout<<"Our file contains-> "<<endl ;
    char ch ;
    while(fileStream.get(ch)){
        cout<<ch ;
    }
    fileStream.close() ;
    fileStream.open("ExampleFileText.txt", ios::app) ;
    fileStream<<"Appending this line to the File ExampleFileText.txt" ;
    fileStream.close() ;
    cout<<"\nAppended file-> "<<endl ;
    fileStream.open("ExampleFileText.txt", ios::in) ;
    while(fileStream.get(ch)){
        cout<<ch ;
    }
    fileStream.close() ;
    return 0 ;
}