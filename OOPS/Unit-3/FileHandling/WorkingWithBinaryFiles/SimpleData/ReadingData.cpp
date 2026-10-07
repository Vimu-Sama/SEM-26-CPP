#include<iostream>
#include<fstream>

using namespace std ;


int main(){
    int temp ;
    ifstream readStream("newFile.dat", ios::in | ios::binary) ;
    cout<<"Data-> "<<endl ;
    while(readStream.read(reinterpret_cast<char*>(&temp), sizeof(int)))
    {
        cout<<temp<<" " ;
    }
    return 0 ;
}