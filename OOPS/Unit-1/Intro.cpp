#include <iostream>
#include <string>
#include<iomanip>
using namespace std;

int main()
{
    string name ;
    getline(cin, name) ;
    cin.ignore() ;
    cout<<name<<endl ;
    cout<<hex<<45<<endl ;
    cout<<dec<<10<<endl ;
    cout<<setfill('*')<<right<<setw(10)<<"Hello"<<endl ;
    cout<<setfill('*')<<left<<setw(10)<<"Hello"<<endl ;
    return 0;
}



