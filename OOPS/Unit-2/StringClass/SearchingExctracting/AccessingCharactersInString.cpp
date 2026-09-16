#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "Hello";

    // [] operator
    cout << s[0] << endl;          // H
    cout << s[1] << endl;          // e

    // at()
    cout << s.at(2) << endl;       // l

    // front()
    cout << s.front() << endl;     // H

    // back()
    cout << s.back() << endl;      // o

    // Modify using []
    s[0] = 'h';

    cout << s << endl;             // hello

    return 0;
}