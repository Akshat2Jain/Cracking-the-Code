// 217. Contains Duplicate

#include <iostream>
#include <vector>
#include <unordered_map> // to import unordered_map stl

// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
// Input: nums = [1,2,3,1]
// Output: true

using namespace std;

bool containsDuplicate(vector<int> &arr)
{
    unordered_map<int, int> mpp; // new stl vector to create a unoredered map with key-value
    // pair.
    for (int i = 0; i < arr.size(); i++)
    {
        mpp[arr[i]]++; // this loops create the key value pair  in like element and with its frequency
    }
    // the below for loop just to show what will be the output of the above for loop
    // ele.first shows the element and ele.second shows the freq of that element in that array
    // for (auto ele : mpp)
    // {
    //     cout << ele.first << "->" << ele.second << endl;
    // }

    for (auto x : mpp)
    {
        if (x.second > 1)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    vector<int> arr;
    arr = {1, 2, 3, 1};
    bool res = containsDuplicate(arr); // return true or false
    if (res)
    {
        cout << "Contains Duplicate";
    }
    if (!res)
    {
        cout << "Does Not contain duplicate";
    }
}

// Homework question

// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

// You must implement a solution with a linear runtime complexity and use only constant extra space.