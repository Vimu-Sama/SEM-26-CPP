#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main()
{
    // 1. Declaration only
    int arr1[2][3];


    // 2. Declaration + initialization
    int arr2[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };


    // 3. Size of rows can be inferred
    int arr3[][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };


    // 4. Partial initialization
    int arr4[2][3] = {
        {1, 2},
        {4}
    };

    // Result:
    // 1 2 0
    // 4 0 0


    // 5. Initialize everything to 0
    int arr5[2][3] = {};


    // 6. Initialize everything to 0
    int arr6[2][3] = {0};


    // 7. Dynamic 2D array using new
    int rows = 2;
    int cols = 3;

    int** arr7 = new int*[rows];

    for (int i = 0; i < rows; i++)
    {
        arr7[i] = new int[cols];
    }

    arr7[0][0] = 10;
    arr7[0][1] = 20;
    arr7[0][2] = 30;

    arr7[1][0] = 40;
    arr7[1][1] = 50;
    arr7[1][2] = 60;


    // 8. Dynamic 2D array with initialization
    int** arr8 = new int*[2];

    for (int i = 0; i < 2; i++)
    {
        arr8[i] = new int[3]{};
    }


    // 9. std::array - fixed-size 2D array
    array<array<int, 3>, 2> arr9 = {{
        {1, 2, 3},
        {4, 5, 6}
    }};


    // 10. vector - dynamic/resizable 2D array
    vector<vector<int>> arr10 = {
        {1, 2, 3},
        {4, 5, 6}
    };


    // Accessing elements
    cout << arr2[0][1] << endl;  // 2
    cout << arr7[1][2] << endl;  // 60
    cout << arr9[0][2] << endl;  // 3
    cout << arr10[1][0] << endl; // 4


    // Free memory for arr7
    for (int i = 0; i < rows; i++)
    {
        delete[] arr7[i];
    }

    delete[] arr7;


    // Free memory for arr8
    for (int i = 0; i < 2; i++)
    {
        delete[] arr8[i];
    }

    delete[] arr8;

    return 0;
}