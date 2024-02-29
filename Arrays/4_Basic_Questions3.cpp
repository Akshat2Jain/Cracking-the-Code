#include <iostream>

using namespace std;

int main()
{
    // Implementing Linear search
    // The concept the that we have to compare the compare each element with the
    // the target and if the target is found we return true or false

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the target to find: ";
    int x;
    cin >> x; // taking target as input to find in the array

    bool flag = false; // ---> initally defining the bool value to false;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            flag = true; // mark flag as true if present
            break;
        }
        else
        {
            flag = false;
        }
    }

    if (flag) // checking the status of flag
    {
        cout << "The target is present in the array";
    }
    else
    {
        cout << "The target is not present in the array";
    }
}

// More in this question we can return the index of the target that target
// is present at what position
// what we can do?
// int a; and the in the if else condition we can store index in a
// flag = true;
// a=i;
// break;