// 349. Intersection of Two Arrays

#include <iostream>
#include <vector>
#include <unordered_set> // for set stl

using namespace std;

// Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.
// Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2,2]

vector<int> intersect(vector<int> &arr1, vector<int> &arr2)
{
    int n = arr1.size();
    int m = arr2.size();
    unordered_set<int> s1;
    unordered_set<int> s2;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        s1.insert(arr1[i]);
    }
    for (int i = 0; i < m; i++)
    {
        s2.insert(arr2[i]);
    }
    for (auto pair1 : s1)
    {
        for (auto pair2 : s2)
        {
            if (pair1 == pair2) // finding the intersection in two vectors
            {
                ans.push_back(pair1);
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> arr1;
    vector<int> arr2;

    arr1 = {4, 9, 5};
    arr2 = {9, 4, 9, 8, 4};

    vector<int> res = intersect(arr1, arr2);

    for (int i = 0; i < res.size(); i++)
    {
        cout << i << " ";
    }
}

// Hw- Solve the leetocode problem 350. Intersection of Two Arrays II
// this problem is same as this