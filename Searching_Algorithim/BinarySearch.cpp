#include <iostream>

using namespace std;
// Binary Search is defined as a searching algorithm used in a sorted array by repeatedly dividing the search interval in half
int binarySearch(int arr[], int &n, int &target)
{
    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        // Check if target is present at mid
        if (arr[mid] == target)
        {
            return mid;
        }
        // check if the target is higher than mid then updates the mid
        if (arr[mid] < target)
        {
            left = mid + 1;
        }
        // check if the target is lower than mid then updates the mid
        if (arr[mid] > target)
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int target = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int res = binarySearch(arr, n, target);
    if (res == -1)
    {
        cout << "Not Present";
    }
    else
    {
        cout << "Found at index: " << res;
    }
}