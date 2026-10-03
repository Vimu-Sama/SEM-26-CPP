#include<iostream>
#include<fstream>

using namespace std ;

int main(){

    //In this example as we are using same fileStream,
    //the read and write pointers will share same memory
    fstream fileStream("Example.txt", ios::in | ios::out) ;
    cout<<"Put(Write) pointer value-> "<<fileStream.tellp()<<endl ;
    cout<<"Get(Read) pointer value-> "<<fileStream.tellg()<<endl ;
    string s ;
    fileStream>>s ;
    cout<<s<<endl ;
    cout<<"Put(Write) pointer value-> "<<fileStream.tellp()<<endl ;
    cout<<"Get(Read) pointer value-> "<<fileStream.tellg()<<endl ;
    fileStream.seekg(11, ios::beg) ;
    fileStream>>s ;
    cout<<s<<endl ;
    cout<<"Put(Write) pointer value-> "<<fileStream.tellp()<<endl ;
    cout<<"Get(Read) pointer value-> "<<fileStream.tellg()<<endl ;
    //need to use seekp before writing again after doing read operation earlier 
    fileStream.seekp(18, ios::beg) ;
    fileStream<<"World" ;
    fileStream<<"popular" ;
    fileStream.close() ;
    return 0 ;
}