// 387. First Unique Character in a String

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

// Input: s = "leetcode"
// Output: 0 ----> return the index of the 1st unique character
int main()
{
    string s = "loveleetcode";
    unordered_map<char, int> mpp;
    for (int i = 0; i < s.size(); i++)
    {
        mpp[s[i]]++;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (mpp[s[i]] == 1)
        {
            cout << i; // ---> this will return 2(index)
            break;
        }
    }
}