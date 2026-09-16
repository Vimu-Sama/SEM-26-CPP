#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "Hello";
    string s2 = "Hello";
    string s3 = "World";

    // Equality
    if (s1 == s2)
        cout << "Same" << endl;

    // Inequality
    if (s1 != s3)
        cout << "Different" << endl;

    // compare()
    cout << s1.compare(s2) << endl;    // 0

    cout << s1.compare(s3) << endl;    // negative

    cout << s3.compare(s1) << endl;    // positive

    return 0;
}