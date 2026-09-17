#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "Hello World";

    // substr(start_index, length)
    string x = s.substr(6, 5);

    cout << x << endl;      // World

    // From index 6 till end
    string y = s.substr(6);

    cout << y << endl;      // World

    return 0;
}