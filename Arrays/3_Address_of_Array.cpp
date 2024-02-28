#include <iostream>

using namespace std;

int main()
{
    // Address of each element in array

    int arr[] = {1, 2, 3, 4, 5};
    cout << &arr[0] << endl; // ---> this will print 0x61fefe something like this

    // calculating the address of the array

    cout << "address of the array" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << &arr[i] << endl;
    }
    // Output
    // 0x61fef8
    // 0x61fefc
    // 0x61ff00
    // 0x61ff04
    // 0x61ff08
}
