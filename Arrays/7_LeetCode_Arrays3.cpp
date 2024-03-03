// Leetcode 189. Rotate Array

#include <iostream>
#include <vector>

using namespace std;

void reverse(int arr[], int &i, int &j)
{
    while (i <= j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

void rotate(int arr[], int &k)
{
    int n = sizeof(arr) / sizeof(arr[0]);
    k = k % n;
    reverse(arr, 0, k - n - 1);
    reverse(arr, k - n, n - 1);
    reverse(arr, 0, n - 1);
}

int main()
{
    // Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
    // Input: nums = [1,2,3,4,5,6,7], k = 3
    // Output: [5,6,7,1,2,3,4]
    // Explanation:
    // rotate 1 steps to the right: [7,1,2,3,4,5,6]
    // rotate 2 steps to the right: [6,7,1,2,3,4,5]
    // rotate 3 steps to the right: [5,6,7,1,2,3,4]

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    rotate(arr, k);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}