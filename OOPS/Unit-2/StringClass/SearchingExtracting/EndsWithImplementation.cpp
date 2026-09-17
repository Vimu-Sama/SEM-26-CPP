#include <iostream>
#include <string>
using namespace std;

bool endsWith(string s, string suffix)
{
    if (suffix.length() > s.length())
        return false;

    int start = s.length() - suffix.length();

    for (int i = 0; i < suffix.length(); i++)
    {
        if (s[start + i] != suffix[i])
            return false;
    }

    return true;
}

int main()
{
    string s = "Hello World";

    cout << endsWith(s, "World") << endl;  // 1
    cout << endsWith(s, "Hello") << endl;  // 0

    return 0;
}