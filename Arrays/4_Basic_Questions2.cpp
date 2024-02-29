#include <iostream>

using namespace std;

int main()
{
    // Product of all element
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int prod = 1; // we cant take prod as 0 cauz here we are multiplying the elements of array
    for (int i = 0; i < n; i++)
    {
        prod = prod * arr[i];
    }
    cout << "The Product is: ";
    cout << prod;
}