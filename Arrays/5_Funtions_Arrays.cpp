#include <iostream>

using namespace std;

// Before Moving to this you should have clear understanding of funtions in c++
// call by value
// call by reference

void change(int arr[]) // here we recieved the same array
{
    arr[0] = 8;
}
int main()
{
    // In c++ arrays are passed by refrence by default
    int arr[] = {1, 2, 3, 4, 5};
    cout << arr[0] << endl;
    change(arr); // whole arr is passed
    // arr[0] = 8;
    cout << arr[0] << endl;
}
