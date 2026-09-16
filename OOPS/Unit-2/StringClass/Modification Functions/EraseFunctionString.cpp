#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "Hello World";

    // erase(starting_index, number_of_characters)
    s.erase(5, 6);

    cout << s << endl;          // Hello

    s.erase(2);     // Erase from index 2 till the end
    
    cout << s << endl;          //He

    return 0;
}