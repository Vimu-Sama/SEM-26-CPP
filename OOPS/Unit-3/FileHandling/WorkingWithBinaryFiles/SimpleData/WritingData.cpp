#include<iostream>
#include<fstream>

using namespace std ;

int main(){
    int n = 0 ;
    cout<<"Enter number of elements-> " ;
    cin>>n ;
    int temp ;
    ofstream writeStream("newFile.dat", ios::out | ios::binary) ;
    for(int i=0;i<n;i++){
        cin>>temp ;
        writeStream.write((char*)&temp, sizeof(int)) ;
    }
    writeStream.close() ;
    return 0;
}