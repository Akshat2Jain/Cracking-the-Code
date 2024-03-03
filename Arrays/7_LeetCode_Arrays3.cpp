// Leetcode 189. Rotate Array

#include <iostream>
#include <vector>
#include <algorithm> // for reverse funtion to perform

using namespace std;

// void reverse(vector<int> &arr, int i, int j)
// {
//     while (i <= j)
//     {
//         swap(arr[i], arr[j]);   // for manual reverse method if you are using array
//         i++;
//         j--;
//     }
// }

void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    // Reverse the entire array
    reverse(nums.begin(), nums.end());
    // Reverse the first k elements
    reverse(nums.begin(), nums.begin() + k);
    // Reverse the rest of the elements after k
    reverse(nums.begin() + k, nums.end());
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

    vector<int> arr;

    arr = {1, 2, 3, 4, 5, 6, 7};
    int n = arr.size();
    int k = 3;
    rotate(arr, k);
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}