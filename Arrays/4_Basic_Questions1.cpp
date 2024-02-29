#include <iostream>

using namespace std;

int main()
{
    // Sum of the array elements
    int n;
    cin >> n; // enter the array size
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // ---> Take input in the array
    }
    int sum = 0; // declaring the sum variable

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << "The sum of the array elements is: ";
    cout << sum;
}