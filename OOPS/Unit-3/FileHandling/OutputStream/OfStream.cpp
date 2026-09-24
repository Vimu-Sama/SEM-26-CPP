#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() 
{
    ofstream outfile("newFile.txt") ;
    if(outfile.is_open()){
        outfile<<"Hello World!"<<endl ;
    }
    outfile.close() ;
    ifstream infile("newFile.txt") ;
    if(infile.is_open()){
        string s ;
        getline(infile, s);
        cout<<"string-> "<<s<<endl ;
    }
    infile.close() ;
    infile.open("HelloWorld.txt") ;
    if(infile.is_open()){
        string s ;
        getline(infile, s);
        cout<<"string-> "<<s<<endl ;
    }
    infile.close() ;
    return 0;
}