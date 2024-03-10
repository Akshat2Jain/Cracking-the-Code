// 14. Longest Common Prefix
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string longestCommonPrefix(vector<string> &str)
{
    sort(str.begin(), str.end());
    string ans = "";
    // the concept behind is that we sort the vector and find the common
    // in the first and last string, if found then that common part will be the
    // common to all the string between them , if not found then return the empty string
    string s1 = str[0];
    string s2 = str[str.size() - 1];
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == s2[i])
        {
            ans += s1[i];
        }
        else
        {
            break;
        }
    }
    return ans;
}
int main()
{
    //     Input: strs = ["flower","flow","flight"]
    // Output: "fl"
    //     Input: strs = ["dog","racecar","car"]
    // Output: ""
    // Explanation: There is no common prefix among the input strings.

    vector<string> str;
    str = {"flower", "flow", "flight"};
    string res = longestCommonPrefix(str);
    cout << res;
}