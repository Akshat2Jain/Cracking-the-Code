#include <iostream>

using namespace std;

int main()
{
    // Calculating the size of the array
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr);
    cout << n << endl; // --> will print 20 cauze(4*5)
    // Each int is of 4 bytes so 4*5(elements)=20

    int arrsize = sizeof(arr) / sizeof(arr[0]);
    cout << arrsize; // will print the size of arr i.e=5;

    // Explanation
    // n=20 and arr[0] has size 4bytes
    // arrsize=n/4=5

    // This is how we can calculate the size of the array
}