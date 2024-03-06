// 66. Plus One
#include <iostream>
#include <vector>

// You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

// Input: digits = [1,2,3]
// Output: [1,2,4]

// Input: digits = [9]
// Output: [1,0]

using namespace std;

// Explanation -> Just take is as basic maths problem like we do taking carry and adding to the next number

vector<int> plusOne(vector<int> &arr)
{
    int n = arr.size();
    int carry = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        int num = arr[i] + carry;
        arr[i] = num % 10; // this loop just increase the one to digit and also keep check on the carry
        carry = num / 10;
    }
    if (carry > 0)
    {
        arr.push_back(0);
        int n = arr.size();
        for (int i = n - 1; n > 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = carry;
    }
    return arr;
}

int main()
{
    vector<int> arr1 = {1, 2, 3};
    vector<int> res = plusOne(arr1);
    for (auto i : res)
    {
        cout << i << " ";
    }
}