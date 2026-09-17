#include <iostream>
#include <string>
using namespace std;

bool startsWith(string s, string prefix)
{
    if (prefix.length() > s.length())
        return false;

    for (int i = 0; i < prefix.length(); i++)
    {
        if (s[i] != prefix[i])
            return false;
    }

    return true;
}

int main()
{
    string s = "Hello World";

    cout << startsWith(s, "Hello") << endl;  // 1
    cout << startsWith(s, "World") << endl;  // 0

    return 0;
}