#include <iostream>
#include <string>
using namespace std;

int main() {

    // 1. Empty string
    string s1;


    // 2. Initialize with a string literal
    string s2 = "Hello";


    // 3. Direct initialization
    string s3("Hello");


    // 4. Copy initialization from another string
    string s4 = s2;


    // 5. Direct initialization from another string
    string s5(s2);


    // 6. Initialize with a single character repeated N times
    string s6(5, 'A');
    // "AAAAA"


    // 7. Initialize from a character array
    char arr[] = "Hello";
    string s7(arr);


    // 8. Initialize from part of a character array
    string s8(arr, 3);
    // "Hel"


    // 9. Initialize from another string's substring
    string s9 = "Hello World";
    string s10(s9, 6, 5);
    // starts at index 6, takes 5 characters
    // "World"


    // 10. Initialize using iterator range
    string s11(s9.begin(), s9.end());


    // 11. Initialize from initializer list of characters
    string s12({'H', 'e', 'l', 'l', 'o'});


    cout << s2 << endl;
    cout << s6 << endl;
    cout << s7 << endl;
    cout << s8 << endl;
    cout << s10 << endl;
    cout << s11 << endl;
    cout << s12 << endl;

    return 0;
}