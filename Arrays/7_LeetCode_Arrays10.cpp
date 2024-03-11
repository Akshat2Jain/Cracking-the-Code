// 268. Missing Number

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
// Input: nums = [3,0,1]
// Output: 2
// Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.

int findNo(vector<int> &arr)
{
    unordered_set<int> set;
    for (int i : arr)
    {
        set.insert(i);
    }
    for (int i = 0; i <= arr.size(); i++)
    {
        if (set.count(i))
        {
            continue;
        }
        else
        {
            return i;
        }
    }
}

int main()
{
    vector<int> arr;
    arr = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    int res = findNo(arr);
    cout << res;
}
