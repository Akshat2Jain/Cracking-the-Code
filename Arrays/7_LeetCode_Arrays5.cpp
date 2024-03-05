// 26. Remove Duplicates from Sorted Array
#include <iostream>
#include <vector>
#include <map>

// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

using namespace std;

// Input: nums = [1,1,2]
// Output: 2, nums = [1,2]
vector<int> removeDuplicated(vector<int> &arr)
{
    int n = arr.size();
    map<int, int> mpp; // in this question we are using just oredered map instead of using the unordered map
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    for (auto x : mpp)
    {
        if (x.second >= 1)
        {
            ans.push_back(x.first);
        }
    }
    return ans;
}

int main()
{
    vector<int> arr;
    arr = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    vector<int> res = removeDuplicated(arr);
    for (auto i : res)
    {
        cout << i << " ";
    }
}

// this another example to use map for counting freq