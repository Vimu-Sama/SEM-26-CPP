#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "Hello World";

    // Find a string
    cout << s.find("World") << endl;

    // Find a character
    cout << s.find('o') << endl;

    // Search from the right
    cout << s.rfind('o') << endl;

    // Check whether something exists
    if (s.find("World") != string::npos)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}