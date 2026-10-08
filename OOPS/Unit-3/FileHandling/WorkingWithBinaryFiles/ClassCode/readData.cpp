#include<iostream>
#include<fstream>

using namespace std ;

int main(){
    int temp ;
    ifstream readStream("example.dat", ios::in | ios::binary) ;
    if(!readStream.is_open()){
        readStream.open("example.dat", ios::in | ios::binary) ;
    }
    cout<<"The values are-> "<<endl ;
    while(readStream.read((char*) &temp, sizeof(int))){
        cout<<temp<<" " ;
    }
    //ios::beg
    //ios::end
    //ios::cur
    cout<<"\nTell location-> "<<readStream.tellg() ;
    readStream.clear() ;
    readStream.seekg(sizeof(int) * 4 , ios::beg) ;
    cout<<"\nTell location-> "<<readStream.tellg() ;
    readStream.read((char*) &temp, sizeof(int)) ;
    cout<<"\nRandom access of value is-> "<<temp ;
    return 0 ;
}