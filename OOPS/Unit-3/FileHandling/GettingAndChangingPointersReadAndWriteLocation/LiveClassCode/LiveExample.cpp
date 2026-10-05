#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    //only tells the location
    //tellg -> tell get -> where your read pointer is
    //tellp -> tell put -> where your write pointer is

    //changes the location
    //seekg -> seek get -> to change the location of read pointer
    //seekp -> seek put -> to change the location of write pointer

    ifstream readStream("Experiment.txt") ;
    cout<<"Location of read pointer-> "<<readStream.tellg() ;
    string s ;
    getline(readStream, s) ;
    cout<<"\nLocation of read pointer-> "<<readStream.tellg() ;
    readStream.seekg(0) ;
    cout<<"\nCurrent character-->"<<(char)readStream.get() ;
    ofstream writeStream("Experiment.txt", ios::app | ios::out) ; 
    cout<<"\nLocation of write pointer-> "<<writeStream.tellp() ;
    writeStream<<"Add-on" ;
    cout<<"\nLocation of write pointer-> "<<writeStream.tellp() ;
    writeStream.close() ;
    //difference betweem append and ate
    return 0 ;
}