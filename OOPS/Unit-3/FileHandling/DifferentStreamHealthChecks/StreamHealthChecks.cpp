#include<iostream>
#include<fstream>
#include<string>
using namespace std ;

int main(){
    fstream fileStream("StreamCheck.txt", ios::in) ;
    int n = 0 ;
    cin>>n ;
    int  i ;
    if(!fileStream.is_open()){
        cout<<"File not opened!" ;
    } else {
            for(int i=0;i<n;i++){
            i = fileStream.get() ;
            if(fileStream.fail()){
                cerr<<"Error occured while processing file." ;
                fileStream.clear() ;
            } else {
                cout<<i<<endl ;
            }
        }
    }
    fileStream.close() ;
    return 0 ;
}