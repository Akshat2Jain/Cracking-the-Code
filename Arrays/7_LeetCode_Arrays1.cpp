// Solve on leet code this problem ProbNo-1

#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    vector<int> ans;
    for (int i = 0; i < n; i++) // these two loop will check each elememt with another element of the array
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target) // [2,7,11,15]
            {                                //  i j ----> here in 1st iteration i will 2 and j will start from 7
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
        }
    }
    return ans;
}
int main()
{
    // Two_Sum
    // Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

    // Example 1:
    // Input: nums = [2,7,11,15], target = 9
    // Output: [0,1]
    // Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

    vector<int> nums;
    nums = {3, 3};
    int target = 6;
    vector<int> res = twoSum(nums, target); // passing the nums and target
    cout << "[ ";
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    cout << "]";
}
