#include <iostream>
#include <string>
#include <vector>

using namespace std;
// Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack

// Input: haystack = "sadbutsad", needle = "sad"
// Output: 0
// Explanation: "sad" occurs at index 0 and 6.
// The first occurrence is at index 0, so we return 0.

// Input: haystack = "leetcode", needle = "leeto"
// Output: -1
// Explanation: "leeto" did not occur in "leetcode", so we return -1.

int strStr(string &haystack, string &needle)
{
    // Method 1
    // int n = haystack.find(needle); // built in function to find the index of the substring in a string
    // return n;
    // Method 2
    // By using substr method
    string str;
    for (int i = 0; i < haystack.size(); i++)
    {
        if (needle[0] == haystack[i])
        {
            str = haystack.substr(i, needle.size());
            if (str == needle)
            {
                return i;
            }
        }
    }
    return -1;
}

int main()
{
    string haystack = "sadbutsad";
    string needle = "but";
    int res = strStr(haystack, needle);
    cout << res;
}