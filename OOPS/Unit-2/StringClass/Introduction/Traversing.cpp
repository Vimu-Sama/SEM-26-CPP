#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "Hello";

    // Using index
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }

    cout << endl;

    // Range-based for loop
    for (char c : s)
    {
        cout << c << " ";
    }

    cout << endl;

    return 0;
}