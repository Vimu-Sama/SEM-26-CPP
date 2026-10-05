#include<iostream>
#include<fstream>
#include<string>
using namespace std ;

//Create a simple write stream(ofstream)
//close that stream
//write a single line
//click open the file and tell your findings/ screenshot

int main(){
    fstream fileStream("StreamCheck.txt", ios::in) ;
    int n = 0 ;
    cin>>n ;
    int  i = 0 ;
    fileStream.close() ;
    if(!fileStream.is_open()){
        cout<<"File not opened!" ;
        return 0 ;
    } else {
        for(int j=0;j<n;j++){
            fileStream>>i ;
            if(fileStream.fail()){
                cerr<<"Error occured while processing file." ;
                fileStream.clear() ;
            } else {
                cout<<i<<endl ;
                fileStream.clear() ;
            }
        }
    }
    fileStream.close() ;
    return 0 ;
}