#include <iostream>
using namespace std;


// 1. Normal 2D array
// Column size must be specified
void display1(int arr[][3], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}


// 2. Same thing, explicitly specifying rows and columns
void display2(int arr[2][3])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}


// 3. Using pointer to an array
void display3(int (*arr)[3], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}


// 4. Using reference to a 2D array
void display4(int (&arr)[2][3])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}


int main()
{
    int arr[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };


    display1(arr, 2);

    cout << endl;

    display2(arr);

    cout << endl;

    display3(arr, 2);

    cout << endl;

    display4(arr);

    return 0;
}