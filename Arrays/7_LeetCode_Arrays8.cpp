// 283. Move Zeroes
#include <iostream>
#include <vector>

using namespace std;

// moving zeros at the end

vector<int> moveZeros(vector<int> &arr)
{
    vector<int> ans;
    int n = arr.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            ans.push_back(arr[i]);
        }
        else
        {
            count++;
        }
    }
    for (int i = 0; i < count; i++)
    {
        ans.push_back(0);
    }
    return ans;
}

int main()
{
    vector<int> arr;
    arr = {0, 1, 0, 3, 12};
    vector<int> res = moveZeros(arr);
    for (auto i : res)
    {
        cout << i << " ";
    }
}