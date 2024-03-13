#include <iostream>

using namespace std;

int linearSearch(int arr[], int &n, int &target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int target = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int res = linearSearch(arr, n, target);
    if (res == -1)
    {
        cout << "Not Present";
    }
    else
    {
        cout << "Found at index: " << res;
    }
}