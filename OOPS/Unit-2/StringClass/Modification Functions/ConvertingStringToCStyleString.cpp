#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "Hello";

    const char* p = s.c_str();

    cout << p << endl;

    return 0;
}