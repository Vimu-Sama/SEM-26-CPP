#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() 
{
    ofstream outfile("newFile.txt") ;
    if(outfile.is_open()){
        cout<<"working" ;
        outfile<<"Hello World!"<<endl ;
    }
    outfile.close() ;
    ifstream infile("newFile.txt") ;
    if(infile.is_open()){
        cout<<"\nwork read" ;
        string s ;
        getline(infile, s);
        cout<<"string-> "<<s ;
    }
    infile.close() ;
    return 0;
}