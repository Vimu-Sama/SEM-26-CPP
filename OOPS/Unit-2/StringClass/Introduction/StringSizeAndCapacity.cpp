#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "Hello";

    // Number of characters
    cout << "size     : " << s.size() << endl;

    // Same as size()
    cout << "length   : " << s.length() << endl;

    // Allocated character capacity
    cout << "capacity : " << s.capacity() << endl;

    // Check whether string is empty
    cout << "empty    : " << s.empty() << endl;

    // Clear the string
    s.clear();

    cout << "After clear:" << endl;
    cout << "size  : " << s.size() << endl;
    cout << "empty : " << s.empty() << endl;

    return 0;
}