#include <iostream>
#include <vector>

using namespace std;

// create new array and copy the element from new old to new array in reverse order
vector<int> reverseArr(vector<int> &nums)
{
    vector<int> ans;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        ans.push_back(nums[n - i - 1]); // copying the last element in new vector
    }
    return ans;
}

int main()
{
    vector<int> arr;
    arr = {1, 2, 3, 4, 5};
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    vector<int> res = reverseArr(arr);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << ' ';
    }
}

/// try them without copying them without the into new array