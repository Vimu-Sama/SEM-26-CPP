#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "Hello";

    cout << "Size     : " << s.size() << endl;
    cout << "Capacity : " << s.capacity() << endl;

    // Change the size -> only changes the size
    s.resize(10, '*');

    cout << s << endl;             // Hello*****

    // Reserve memory -> only changes the capacity
    s.reserve(100);

    cout << "Capacity : " << s.capacity() << endl;

    return 0;
}