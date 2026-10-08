#include<iostream>
#include<fstream>

using namespace std;


int main(){
    int ar[10]= {1,2,3,4,5,6,7,8,9,10} ;
    ofstream writeStream("example.dat", ios::out | ios::binary) ;
    if(!writeStream.is_open()){
        cerr<<"Error in opening file!" ; //controlled error
    }
    writeStream.write((char*) &ar, sizeof(int) * 10) ;
    // writeStream.write(reinterpret_cast<char*>(&i), sizeof(int)) ;
    writeStream.close() ;
    return 0 ;
}