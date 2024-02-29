#include <iostream>

using namespace std;

int main()
{
    // finding the maximum and minimum element in array
    //  We take maxi and update value of this maximum interger and mini int

    int arr[] = {4, 5, 8, 2, 4, -1, 7};
    int n = sizeof(arr) / sizeof(arr[0]); // set the array size;
    int maxi = arr[0];
    int mini = arr[0];
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]); // max function will set the max value
        mini = min(mini, arr[i]); // min function will set min value
    }
    cout << "The maximum element in the array is: " << maxi << endl;
    cout << "The minimum element in the array is: " << mini;
}