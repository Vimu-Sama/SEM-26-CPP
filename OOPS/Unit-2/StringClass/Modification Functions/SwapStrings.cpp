#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "Hello";
    string s2 = "World";

    s1.swap(s2);

    cout << s1 << endl;     // World
    cout << s2 << endl;     // Hello

    return 0;
}