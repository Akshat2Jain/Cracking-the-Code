#include <iostream>

using namespace std;

int main()
{
    cout << "Discussing about the syntax of the array" << endl;
    // Cracking the sytax of arrays

    int arr[5]; // ----> Initializing array of size 5

    // Initializing and accessing the one element of array

    arr[0] = 1;
    cout << arr[0] << endl; //---> will print 1
    arr[0] = 10;
    cout << arr[0] << endl; // ---> will print 10 now

    // Printing array using for loop
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    // -----> for loop will print 1 2 3 4 5

    // Taking array as input using for loop
    int arr2[5];
    cout << endl
         << "Input the array";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr2[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << " ";
    }
    //---> will print the input array

    int arr3[5] = {1, 2, 3, 4, 5}; // --> Another way of initializing the array

    // We dont need to give size while initalizing elements at the same time

    int arr4[] = {1, 2, 3, 4, 5}; // --> Will act same

    // In next file we are going to calculate the size of the array

    return 0;
}