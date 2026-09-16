#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "Hello";

    // Insert string at index 5
    s.insert(5, " World");

    cout << s << endl;          // Hello World

    // Insert at beginning
    s.insert(0, "Say ");

    cout << s << endl;          // Say Hello World

    // Insert one character
    s.insert(4, 1, '!');

    cout << s << endl;

    return 0;
}