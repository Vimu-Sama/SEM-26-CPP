#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "Hello World";

    // replace(index, number_of_characters, new_string)
    s.replace(6, 5, "C++");

    cout << s << endl;          // Hello C++

    return 0;
}