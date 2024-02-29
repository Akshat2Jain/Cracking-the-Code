#include <iostream>

using namespace std;

int main()
{
    // finding the 2nd maximum element in array
    //  We take maxi and update value of this maximum interger
    // then take 2nd maxi ele and update it with same condition but also with that
    // it should not be equal to maxi

    int arr[] = {4, 5, 400, 300, 4, -1, 7};
    int n = sizeof(arr) / sizeof(arr[0]); // set the array size;
    int maxi = arr[0];
    int second_maxi = arr[0];
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]); // will give the maxi
    }
    for (int i = 0; i < n; i++)
    {
        if (second_maxi < arr[i] && arr[i] != maxi)
        {
            second_maxi = max(second_maxi, arr[i]); // will give the second maxi
        }
    }
    cout << "The maximum element in the array is: " << maxi << endl;
    cout << "The 2nd maximum element in the array is: " << second_maxi;
}

// In the same way try to get the 1st mini and 2nd mini value in the array
// Another way to get the maxi and mini is by sorting the array in ascending order and the
// print the last element of array