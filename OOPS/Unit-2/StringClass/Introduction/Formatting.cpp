#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string s = "Hello World";

    // Convert to uppercase
    for (char &c : s)
    {
        c = toupper(c);
    }

    cout << s << endl;

    // Convert to lowercase
    for (char &c : s)
    {
        c = tolower(c);
    }

    cout << s << endl;

    return 0;
}