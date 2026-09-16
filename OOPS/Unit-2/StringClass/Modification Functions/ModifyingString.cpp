#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "Hello";

    // assign()
    s.assign("World");
    cout << s << endl;          // World

    // append()
    s.append(" C++");
    cout << s << endl;          // World C++

    // +=
    s += " Programming";
    cout << s << endl;          // World C++ Programming

    s = "Hello";
    string x = "ABCDEFGHIJ";

    s += " World";       // Simple concatenation

    s.append(" C++");   // Also simple concatenation

    s.append(x, 2, 4);  // More control

    return 0;
}