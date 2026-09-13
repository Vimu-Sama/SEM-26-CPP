#include <iostream>
using namespace std;

int main() 
{
    void *temp = new int(5) ;
    int *typeConversionTemp = (int*) temp ;
    cout<<"Type conversion temp-> "<<*typeConversionTemp<<endl ;
    //static cast is more safer than pointer typecast
    //as it handles the conversion checks at the time
    //of compilation itself and only allows the conversion
    //among related types

    int *intTemp = static_cast<int*>(temp) ;
    cout<<"Integer temp-> "<<*intTemp ;
    cout<<"\nAddress void->"<<temp<<endl;
    cout<<"Address type conversion temp->"<<intTemp<<endl ;
    cout<<"Address static type conversion-> "<<intTemp<<endl ;
    return 0 ;
}