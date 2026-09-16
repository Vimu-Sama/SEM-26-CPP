#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "Hell";

    // Add one character at the end
    s.push_back('o');

    cout << s << endl;          // Hello

    // Remove last character
    s.pop_back();

    cout << s << endl;          // Hell

    return 0;
}