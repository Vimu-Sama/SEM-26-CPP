#include <bits/stdc++.h>
using namespace std;

int main() {

    // ============================================================
    // 1. malloc()
    // ============================================================
    // malloc() allocates raw memory.
    //
    // Syntax:
    //     malloc(number_of_bytes)
    //
    // IMPORTANT:
    // - malloc() does NOT initialize the memory.
    // - The memory contains an indeterminate/garbage value.
    // - malloc() returns void*, so C++ requires a cast if used this way.
    //
    // malloc() belongs to C-style memory management.
    // In modern C++, prefer 'new' or smart pointers.

    int* ptr = (int*)malloc(sizeof(int));

    cout << "========== malloc() ==========\n";

    // The value is NOT initialized.
    // Do NOT depend on this value.
    cout << "Address stored in ptr: " << ptr << endl;

    // We can assign a value ourselves.
    *ptr = 100;

    cout << "Value stored using malloc: " << *ptr << endl;


    // ============================================================
    // 2. calloc()
    // ============================================================
    // calloc() is mainly useful when allocating an array.
    //
    // Syntax:
    //     calloc(number_of_elements, size_of_each_element)
    //
    // Unlike malloc(), calloc() initializes the allocated memory
    // to zero.

    int* ptr2 = (int*)calloc(10, sizeof(int));

    cout << "\n========== calloc() ==========\n";

    for (int i = 0; i < 10; i++) {
        cout << "ptr2[" << i << "] -> " << ptr2[i] << endl;
    }

    // Output will normally be:
    //
    // ptr2[0] -> 0
    // ptr2[1] -> 0
    // ptr2[2] -> 0
    // ...
    // ptr2[9] -> 0


    // ============================================================
    // 3. free()
    // ============================================================
    // free() releases memory that was allocated using:
    //
    //     malloc()
    //     calloc()
    //     realloc()
    //
    // After free(), ptr2 becomes a DANGLING POINTER.
    //
    // The pointer still contains the old address,
    // but the memory at that address is no longer owned by us.

    free(ptr2);

    cout << "\n========== free() ==========\n";
    cout << "Memory allocated by calloc() has been released.\n";


    // ============================================================
    // IMPORTANT:
    // DO NOT DO THIS:
    //
    // cout << *ptr2;
    //
    // or:
    //
    // cout << ptr2[0];
    //
    // after free(ptr2).
    //
    // That would be accessing memory whose lifetime has ended.
    // The behavior is UNDEFINED.
    // ============================================================

    // ptr2 is still holding the old address.
    // Make it nullptr so that we know it is no longer usable.

    ptr2 = nullptr;

    cout << "ptr2 is now set to nullptr.\n";


    // ============================================================
    // 4. Working with malloc() memory
    // ============================================================

    cout << "\n========== malloc() memory ==========\n";

    *ptr = 100;

    cout << "*ptr -> " << *ptr << endl;
    cout << "ptr  -> " << ptr << endl;


    // ============================================================
    // 5. Freeing malloc() memory
    // ============================================================
    // Because ptr was created using malloc(),
    // we MUST use free().
    //
    // DO NOT use delete here.

    free(ptr);

    ptr = nullptr;


    // ============================================================
    // 6. new
    // ============================================================
    // new is the C++ way of dynamically allocating memory.
    //
    // Example:
    //
    //     int* p = new int;
    //
    // Or initialize it immediately:
    //
    //     int* p = new int(50);

    int* p = new int(50);

    cout << "\n========== new ==========\n";
    cout << "*p -> " << *p << endl;


    // ============================================================
    // 7. delete
    // ============================================================
    // Memory created using new must be released using delete.

    delete p;

    p = nullptr;

    cout << "Memory allocated using new has been released.\n";


    // ============================================================
    // 8. new[] and delete[]
    // ============================================================
    // For dynamically allocated arrays:
    //
    //     new[]  -> delete[]

    int* arr = new int[5];

    for (int i = 0; i < 5; i++) {
        arr[i] = i * 10;
    }

    cout << "\n========== new[] and delete[] ==========\n";

    for (int i = 0; i < 5; i++) {
        cout << "arr[" << i << "] -> " << arr[i] << endl;
    }

    delete[] arr;

    arr = nullptr;


    return 0;
}